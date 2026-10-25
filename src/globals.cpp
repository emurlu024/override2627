#include "globals.h"// IWYU pragma: keep
#include "lemlib/api.hpp" // IWYU pragma: keep
#include "pros/adi.hpp"
#include "pros/imu.hpp"
// #include "tasks_headers/activator.h"

/*ports (as of 10/22/26)
  Base Motor 1: 1
  Base Motor 2: 2
  Base Motor 3: 3
  Base Motor 4: 4
  Base Motor 5: 5
  Base Motor 6: 6

  IMU: 7

  Intake Motor 1: 8
  
  Primary Radio: 10
  Backup Radio: 9

  Cascade Motor 1: 20
  Cascade Motor 2: 19

*/


namespace Robot {
  
  namespace Globals {
    // Subsystems
    RobotSubsystems subsystem;

    // IMU
    pros::Imu imu(7);
    // FilteredIMU filteredIMU(15,0.9);
// 
    // Controller
    pros::Controller controller(pros::E_CONTROLLER_MASTER);

    // Motors
    pros::MotorGroup right({-3, -1, -2},pros::MotorGearset::blue);
    pros::MotorGroup left({5, 4, 6},pros::MotorGearset::blue);
    pros::MotorGroup cascadeMotors({20,-19}, pros::MotorGearset::blue);

    pros::Motor intakes({8},pros::MotorGearset::blue);

    // Rotational
    // pros:: rotational 

    // Optical
    // pros::Optical coloring(3);

    // // Distance
    // pros::Distance distance(5);
    // pros::Distance distance2(16);

    // Pneumatics
    // pros::adi::Pneumatics midGoalRetract('A', true);
    // pros::adi::Pneumatics tongue('C',false);
    // pros::adi::Pneumatics wing('B',false);




    // Odometry wheels
    // horizontal tracking wheel encoder. Rotation sensor, port 20, not reversed
    // pros::Rotation horizontalEnc(-11);
    // vertical tracking wheel encoder. Rotation sensor, port 11, reversed 
      //plug in odom wheel probably 11
    pros::Rotation verticalEnc(17);


    // lemlib --> NEED TO FIX
    // horizontal tracking wheel. 2.75" diameter, 5.75" offset, back of the robot (negative)
    // lemlib::TrackingWheel horizontal(&horizontalEnc, lemlib::Omniwheel::NEW_275, -1.375);
    // vertical tracking wheel. 2.75" diameter, 2.5" offset, left of the robot (negative)
    lemlib::TrackingWheel vertical(&verticalEnc, lemlib::Omniwheel::NEW_2, 1.0);

   
    // drivetrain settings
    lemlib::Drivetrain drivetrain(&left, // left motor group
      &right, // right motor group
      12, // 10 inch track width
      lemlib::Omniwheel::NEW_325, // using new 3.25" omnis
      450, // drivetrain rpm is 360
      2 // horizontal drift is 2. If we had traction wheels, it would have been 8
    );

    // lateral PID controller
        //experimental
    lemlib::ControllerSettings lateral_controller(5.5, //5 <-- 3.7 umi proportional gain (kP)
                                                0, // integral gain (kI)
                                                8, // 10 was 25 (umi) derivative gain (kD)
                                                0, // anti windup
                                                1.0, // 0 small error range, in inches
                                                200, // 0 small error range timeout, in milliseconds
                                                3.0 , // 0 large error range, in inches
                                                600, // 0 large error range timeout, in milliseconds
                                                0 // maximum acceleration (slew)
    );
    // lemlib::ControllerSettings lateral_controller(3.7, //3.7 umi proportional gain (kP)
    //                                             0, // integral gain (kI)
    //                                             25, // was 25 (umi) derivative gain (kD)
    //                                             0, // anti windup
    //                                             0, // 0 small error range, in inches
    //                                             0, // 0 small error range timeout, in milliseconds
    //                                             0 , // 0 large error range, in inches
    //                                             0, // 0 large error range timeout, in milliseconds
    //                                             0 // maximum acceleration (slew)
    // );

    // angular PID controller
        //experimental
    lemlib::ControllerSettings angular_controller(4.5, // 5.5 proportional gain (kP)
                                                0, // integral gain (kI)
                                                10, // 25 derivative gain (kD)
                                                0, // anti windup
                                                1.0, // 0 small error range, in inches
                                                200, // 0 small error range timeout, in milliseconds
                                                3.0, // 0 large error range, in inches
                                                600, // 0 large error range timeout, in milliseconds
                                                0 // maximum acceleration (slew)
    );
    // lemlib::ControllerSettings angular_controller(5.5, // proportional gain (kP)
    //                                             0, // integral gain (kI)
    //                                             25, // 25 derivative gain (kD)
    //                                             0, // anti windup
    //                                             0, // 0 small error range, in inches
    //                                             0, // 0 small error range timeout, in milliseconds
    //                                             0, // 0 large error range, in inches
    //                                             0, // 0 large error range timeout, in milliseconds
    //                                             0 // maximum acceleration (slew)
    // );


    // sensors for odometry (horizontal)
    lemlib::OdomSensors sensors(&vertical, // vertical tracking wheel
        nullptr, // vertical tracking wheel 2, set to nullptr as we don't have a second one
        nullptr, // horizontal tracking wheel
        nullptr, // horizontal tracking wheel 2, set to nullptr as we don't have a second one
        &imu // inertial sensor
    );

    // input curve for throttle input during driver control
    lemlib::ExpoDriveCurve throttleCurve(3, // joystick deadband out of 127
                10, // minimum output where drivetrain will move out of 127
                1.7 // expo curve gain
    );

    // input curve for steer input during driver control
    lemlib::ExpoDriveCurve steerCurve(3, // joystick deadband out of 127
              3, // minimum output where drivetrain will move out of 127
              1 // expo curve gain
    );

    // create the chassis
    lemlib::Chassis chassis(drivetrain, lateral_controller, angular_controller, sensors, &throttleCurve, &steerCurve);



  }
}
  
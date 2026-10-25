  //initializations + library and settings 
#include "main.h"
#include "globals.h"// IWYU pragma: keep
#include "lemlib/pid.hpp"
#include "pros/misc.h"
#include "pros/rtos.hpp"
#include "subs_headers/intakes.h"
#include "subs_headers/tongue.h"
#include "robodash/api.h"
using namespace Robot;
using namespace Robot::Globals;
#include "lemlib/api.hpp" // IWYU pragma: keep




    //for auton selector
// ASSET(ringTest_txt); // '.' replaced with "_" to make c++ happy

// std::string selectedAuton = "";
// void a() { 
//   left.move_velocity(-100);
//   right.move_velocity(-100);
//   pros::delay(1000);
//   left.move_velocity(0);
//   right.move_velocity(0);
//   std::cout << "Running best auton" << std::endl; }
// void b() { 
//   pros::delay(2000);
//   left.move_velocity(-100);
//   right.move_velocity(-100);
//   pros::delay(1000);
//   left.move_velocity(0);
//   right.move_velocity(0);
//   std::cout << "Running simple auton " << std::endl; }
// void c() { std::cout << "Running good auton" << std::endl; }
// void d() { std::cout << "Running skills" << std::endl; }

// // ================================= Views ================================= //

// // Create robodash selector
// rd::Selector selector({
//     {"Best auton", &a, "", 0},
//     {"Simple auton", &b, "", 220},
//     {"Good auton", &c, "", 100},
//     {"Skills", &d},
// });

// // Create robodash console
// rd::Console console;



// /**
//  * Runs initialization code. This occurs as soon as the program is started.
//  *
//  * All other competition modes are blocked by initialize; it is recommended
//  * to keep execution time for this mode under a few seconds.
//  */
void initialize() {
//   if (!midGoalRetract.is_extended()) {
//       midGoalRetract.extend();
//   }
    chassis.calibrate(); // Calibrate sensors
    chassis.setPose(0,0,0);

    

//     selector.on_select([](std::optional<rd::Selector::routine_t> routine) {
// 		if (routine == std::nullopt) {
// 			std::cout << "No routine selected" << std::endl;
// 		} else {
// 			std::cout << "Selected Routine: " << routine.value().name << std::endl;
//       selectedAuton = routine.value().name;
// 		}

//         //for the x,y coords on brain screen
//     pros::lcd::initialize(); // initialize brain screen
//     chassis.calibrate(); // calibrate sensors
//     // print position to brain screen
//     pros::Task screen_task([&]() {
//         while (true) {
//             // print robot location to the brain screen
//             pros::lcd::print(0, "X: %f", chassis.getPose().x); // x
//             pros::lcd::print(1, "Y: %f", chassis.getPose().y); // y
//             pros::lcd::print(2, "Theta: %f", chassis.getPose().theta); // heading
//             // delay to save resources
//             pros::delay(20);
//         }
//     });

};
    

    
//     // the default rate is 50. however, if you need to change the rate, you
//     // can do the following.
//     // lemlib::bufferedStdout().setRate(10);
//     // If you use bluetooth or a wired connection, you will want to have a rate of 10ms

//     // for more information on how the formatting for the loggers
//     // works, refer to the fmtlib docs


//     // pros::Task sortingTask Robot::Sorter::(on(void) );    

//     // thread to for brain screen and position logging
//   pros::Task screenTask([&]() {
//     selector.run_auton();
//     while (true) {
//       console.printfln("X: %f", chassis.getPose().x); // x
//       console.printfln("Y: %f", chassis.getPose().y); // y
//       console.printfln("Theta: %f", chassis.getPose().theta); // Use filtered heading
//       // subsystem.intake.color_sort();
//       pros::delay(50); // Ensure sufficient delay
//       console.clear();     
//     }
//   });
// }   

/**
 * Runs while the robot is disabled
 */
void disabled() {}

/**
 * runs after initialize if the robot is connected to field control
 */
void competition_initialize() {
  //selector.focus();
}

// get a path used for pure pursuit
// this needs to be put outside a function
// ASSET(ringTest_txt); // '.' replaced with "_" to make c++ happy

/**
 * Runs during auto
 */
void autonomous() {
    //fill later
    chassis.arcade(-125, 0);
    pros::delay(500);
    chassis.arcade(125, 0);
    pros::delay(500);
    chassis.arcade(-125, 0);
    pros::delay(500);
    chassis.arcade(125, 0);
    pros::delay(500);
    chassis.arcade(-125, 0);
    pros::delay(400);
    chassis.arcade(0, 0);
}


/**
 * Runs in driver control
 */
void opcontrol() {
      //preferences
        //This is the possible control:  
        //L1= cascade going down; use rotational sensor
        //R1 = cascade going up; use rotational sensor
        //R2 = intake spin, unclamp + claw going down, cascade going fully down; calculate using rotational sensor. When the cascade is at the position, then stops there
        //L2 = Intake spin opposite way (outtake)
        //A = piston for claw (clamp or unclamp), if the claw is facing down, clamp then face up.
        //Left stick: going  forward and backward
        //Right stick: going right and left
          //Possible passive macro: 
          // - distance sensor detect cup -> claw piston activate
          // - When scoring down, if the cascade got stuck, instantly unclamp

      //set up
    chassis.setPose(0, 0, 0);
    //FilteredIMU.set_heading(7);

      //to cause no errors with robo dash
    //console.printf("Hello");

      //driver control 
    while (true) {


        // get joystick positions
        int leftY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
        int rightX = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
        
        // move the robot
        chassis.arcade(-leftY, -rightX);

            //cascade
        if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
          //cascade up
          subsystem.cascades.move(1);
        }

        if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
          //cascade down
          subsystem.cascades.move(2);
        }

          //front intakes
        if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2)) {
          //intake spin + unclamp
          subsystem.intake.intake(0);
          
        }
        if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L2)) {
          //outake (intake opp)
          subsystem.intake.intake(1);
        }

          //figure out rotational intake for scoring mech 
          
          //scoring mech
        if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) {
          //claw pneumatic
        }

        // delay to save resources
        pros::delay(50);
    }
}






// ----------------------------------------------------------------------------------
/*

#include "main.h"
#include "globals.h"// IWYU pragma: keep
#include "lemlib/pid.hpp"
#include "pros/rtos.hpp"
#include "subs_headers/intakes.h"
#include "subs_headers/tongue.h"
#include "robodash/api.h"
using namespace Robot;
using namespace Robot::Globals;
#include "lemlib/api.hpp" // IWYU pragma: keep
ASSET(ringTest_txt); // '.' replaced with "_" to make c++ happy

std::string selectedAuton = "";
void a() { 
  left.move_velocity(-100);
  right.move_velocity(-100);
  pros::delay(1000);
  left.move_velocity(0);
  right.move_velocity(0);
  std::cout << "Running best auton" << std::endl; }
void b() { 
  pros::delay(2000);
  left.move_velocity(-100);
  right.move_velocity(-100);
  pros::delay(1000);
  left.move_velocity(0);
  right.move_velocity(0);
  std::cout << "Running simple auton " << std::endl; }
void c() { std::cout << "Running good auton" << std::endl; }
void d() { std::cout << "Running skills" << std::endl; }

// ================================= Views ================================= //

// Create robodash selector
rd::Selector selector({
    {"Best auton", &a, "", 0},
    {"Simple auton", &b, "", 220},
    {"Good auton", &c, "", 100},
    {"Skills", &d},
});

// Create robodash console
rd::Console console;


/***
/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 *//*
void initialize() {

    chassis.calibrate(); // Calibrate sensors

    selector.on_select([](std::optional<rd::Selector::routine_t> routine) {
		if (routine == std::nullopt) {
			std::cout << "No routine selected" << std::endl;
		} else {
			std::cout << "Selected Routine: " << routine.value().name << std::endl;
      selectedAuton = routine.value().name;
		}
	});
    

    
    // the default rate is 50. however, if you need to change the rate, you
    // can do the following.
    // lemlib::bufferedStdout().setRate(10);
    // If you use bluetooth or a wired connection, you will want to have a rate of 10ms

    // for more information on how the formatting for the loggers
    // works, refer to the fmtlib docs


    // pros::Task sortingTask Robot::Sorter::(on(void) );    

    // thread to for brain screen and position logging

  pros::Task screenTask([&]() {
    selector.run_auton();
    while (true) {
      console.printfln("X: %f", chassis.getPose().x); // x
      console.printfln("Y: %f", chassis.getPose().y); // y
      console.printfln("Theta: %f", chassis.getPose().theta); // Use filtered heading
      subsystem.intake.color_sort();
      pros::delay(50); // Ensure sufficient delay
      console.clear();
          
    }
  });
     

}   
/*
/**
 * Runs while the robot is disabled
 */
//void disabled() {}

/**
 * runs after initialize if the robot is connected to field control
 *//*
void competition_initialize() {
  selector.focus();
}

// get a path used for pure pursuit
// this needs to be put outside a function
// ASSET(ringTest_txt); // '.' replaced with "_" to make c++ happy

/**
 * Runs during auto
 *
 *  This is an example autonomous routine which demonstrates a lot of the features LemLib has to offer
 */
/*
void autonomous() {
  subsystem.intake.intake(3);
  chassis.moveToPoint(1,-12,600, {false});
  chassis.turnToHeading(23, 300);
  chassis.moveToPoint(-9,-27, 1500, {false, 40, 0});
  pros::delay(500);
  tongue.toggle();                                                                                                                                                                                                                             
  chassis.turnToHeading(320, 500);
  tongue.toggle();

  chassis.moveToPoint(3, -35,1500, {false, 70});
  chassis.turnToHeading(320, 500);
  subsystem.intake.intake(4);
  pros::delay(2000);

  subsystem.intake.intake(3);
  chassis.moveToPoint(-31,-10, 2000, {true, 50});
  chassis.moveToPose(-32,-31, 180,1500);
  stopper.toggle();
  tongue.toggle();
  subsystem.intake.intake(5);
  pros::delay(2000);
  subsystem.intake.intake(3);
  // stopper.toggle();
  chassis.turnToHeading(180, 300);
  chassis.moveToPoint(-31,19,1500, {false, 35});
  pros::delay(3000);
  chassis.moveToPoint(-31,-25,1000, {true, 70});
  // stopper.toggle();
  subsystem.intake.intake(5);
  // subsystem.intake.auton = false;
  






  // selector.run_auton();
}

/**
 * Runs in driver control
 *//*
void opcontrol() {
    chassis.setPose(0, 0, 0);
    filteredIMU.set_heading(0);
    console.printf("Hello");
    while (true) {
        // get joystick positions
        int leftY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
        int rightX = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
        
        // move the robot
        chassis.arcade(leftY, rightX);

        // run the subsystems
        subsystem.intake.run();
        subsystem.tongue.run();
        subsystem.intake.toggleStopper();

        // delay to save resources
        pros::delay(50);
    }
}
*/
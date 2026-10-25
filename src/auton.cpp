// #include "main.h"
// #include "globals.h"// IWYU pragma: keep
// #include "lemlib/pid.hpp"
// #include "pros/rtos.hpp"
// #include "subs_headers/intakes.h"
// #include "subs_headers/tongue.h"
// #include "auton.h"
// using namespace Robot;
// using namespace Robot::Globals;
// #include "lemlib/api.hpp" // IWYU pragma: keep

// Auton::Auton() {}
// //----------------------------------------------------------------------------------------------------------

// //good team mate versions
//     //v1
// //left --> one goal (long goal): 9
// void leftOne(){
//   chassis.setPose(0, 0, 0);
//   filteredIMU.set_heading(0);

//   // chassis.moveToPose();
//   pros::delay(2000);
//   tongue.extend();
//   chassis.moveToPoint(20, -20, 100);



// }

// //right (flip left)
// void rightOne(){
//   chassis.moveToPoint(0, 0, 5000);
// chassis.moveToPoint(25.481, 7.216, 5000);
// chassis.moveToPoint(-10.147, 31.795, 5000);
// chassis.moveToPoint(22.775, 32.472, 5000);

// }

//     //v2
// //left --> loader first, 2 goals, no under: 7
// void leftLoadFirst(){

// }

// //right (flip left)
// void Auton::right7blocks(){
//     // (RIGHT 7BLOCKS)
//   subsystem.intake.intake(3);
//   chassis.moveToPoint(1,-12,700, {false});
//   chassis.turnToHeading(23, 300);
//   chassis.moveToPoint(-9,-27, 2000, {false, 40, 0});
//   pros::delay(500);
//   tongue.toggle();
//   chassis.turnToHeading(310, 500);
//   chassis.moveToPoint(-33,-10, 1500, {true, 50});
//   chassis.moveToPose(-33,-29, 180,1200);
//   stopper.toggle();
//   pros::delay(1000);
//   subsystem.intake.intake(5);
//   pros::delay(3000);
  
//   subsystem.intake.intake(3);
//   // stopper.toggle();
//   chassis.moveToPose(-33,18, 180,1500, {false});
//   pros::delay(3000);
//   chassis.moveToPoint(-32,-25,1200, {true, 70});
//   // stopper.toggle();
//   subsystem.intake.intake(5);
// }

//     //v3
// //left --> loader second, 2 goals, no under: 7
// void leftLoadSecond(){

// }

// //right (flip left)
// void rightLoadSecond(){

// }

//     //v4
// //left --> 2 goals, w/ under: 9
// void leftUnder(){
    
// }

// //right (flip left)
// void rightUnder(){

// }

// //----------------------------------------------------------------------------------------------------------

// //bad teammates version: solo auton
//     //v1  --> 3 goals (2,2,6), no under: 10 
//         //awp
// void solo(){

// }

// //----------------------------------------------------------------------------------------------------------

// //skills
// void skills(){
    
// }

// void leftBottom(){
//     chassis.setPose(-58.296,-15.846, 0);

// }






//just for organization 
    //copy and paste as needed 
                                                                    //  right 7
//   wing.toggle();
// chassis.setPose(0, 0, 0);
//   subsystem.intake.intake(3);
//   chassis.moveToPoint(-7,-25, 1300, {false, 55, 0});
//   pros::delay(1200);
//   tongue.toggle();
//   pros::delay(300);
//   chassis.moveToPoint(-24.5,0, 1300, {true, 100});
//   chassis.turnToHeading(180,1000);
//   chassis.moveToPoint(-24.5,16,1400, {false, 50, 20});
//   subsystem.intake.intake(3);
//   pros::delay(2500);
//   chassis.moveToPoint(-24,-25,1000, {true, 60});
//   pros::delay(950);
//   subsystem.intake.intake(0);
//   pros::delay(3000);
//   chassis.moveToPoint(-24,-35,1000, {true, 60});
//   chassis.cancelMotion();
//   tongue.toggle();
//   chassis.moveToPoint(-24,0,600, {false, 80, 30});
//   chassis.moveToPoint(-14.7,-12,700, {true, 80, 30});
//   wing.toggle();
//   chassis.moveToPoint(-14.7,-26,900, {true, 80, 47});

                                                                    // left 7
  //      wing.toggle();
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  // chassis.moveToPoint(8,-27, 1300, {false, 60, 0});
  // pros::delay(1250);
  // tongue.toggle();
  // pros::delay(250);
  // chassis.moveToPoint(25,0, 1350, {true, 100});
  // chassis.turnToHeading(180,950);
  // chassis.moveToPoint(25,18,1500, {false, 50, 20});
  // subsystem.intake.intake(3);
  // pros::delay(500);
  //   subsystem.intake.intake(4);
  // pros::delay(100);
  // subsystem.intake.intake(3);
  // pros::delay(2000);
  // chassis.moveToPoint(25,-31,1100, {true, 60});
  // pros::delay(800);
  // subsystem.intake.intake(0);
  // tongue.toggle();
  // chassis.moveToPoint(25,-32,1100, {true, 60});
  // pros::delay(1800);
  // subsystem.intake.intake(2);
  // pros::delay(70);
  // subsystem.intake.intake(0);
  // chassis.moveToPoint(25,-8,500, {false});
  // chassis.turnToHeading(45,300);
  // chassis.moveToPoint(13.5,-15,1000, {false});
  // chassis.turnToHeading(350,600);
  // wing.toggle();
  // chassis.moveToPoint(13.5,-25,1000, {false, 80, 55});

                            //taipei 11211X + 86254B, Blue alliance, bottom right (NOT DONE)
      //4 long, 3 middle, double push 
      //left auton
//   wing.toggle();
// chassis.setPose(0, 0, 0);
//   subsystem.intake.intake(3);
//   chassis.moveToPoint(-24, -4, 1300, {false, 55, 0}) //aligner is forward
//   pros::delay(900);
//   tongue.toggle();
//   pros::delay(300);
  
                                                        // left mid (NOT DONE)

  // wing.toggle();
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  // chassis.moveToPoint(8,-25, 1300, {false, 55, 0});
  // pros::delay(1200);
  // tongue.toggle();
  // pros::delay(250);
  // chassis.turnToHeading(225,1000);
  // chassis.moveToPoint(-9.3, -26.1, 1300, {true, 50});
             //left open
  // chassis.turnToHeading(225,500);
  // pros::delay(1200);
  // midGoalRetract.extend();
  // subsystem.intake.intake(8);
  // midGoalRetract.toggle();
  // pros::delay(1500);
  // midGoalRetract.toggle();
  // subsystem.intake.intake(3);
  // chassis.moveToPoint(25,0, 1500, {true, 100});
  // chassis.turnToHeading(180,850);
  // chassis.moveToPoint(25,18,1300, {false, 50, 20});
  // subsystem.intake.intake(3);
  // pros::delay(2300);
  // chassis.moveToPoint(25,-31,1000, {true, 60});
  // pros::delay(800);
  // subsystem.intake.intake(0);
  // tongue.toggle();
  // chassis.moveToPoint(25,-32,1000, {true, 60});
  // pros::delay(1800);
  // subsystem.intake.intake(4);















  //FINAL USED
      //finished left mid (4 mid, 3 long, no control)
      //tounge is back
  // wing.toggle();
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  //   //middle blocks
  // chassis.moveToPoint(8,-25, 1300, {false, 55, 0});
  // pros::delay(1200);
  // tongue.toggle();
  // pros::delay(250);
  // chassis.moveToPoint(3,-20, 1300, {true, 55, 0});
  // pros::delay(1200);
  // chassis.turnToHeading(225,1000);
  //   //mid goal
  // chassis.moveToPoint(-4.5, -29, 1300, {true, 50});
  //       //left open
  // // chassis.turnToHeading(225,500);
  // pros::delay(1400);
  // midGoalRetract.extend();
  // subsystem.intake.intake(8);
  // midGoalRetract.toggle();
  // pros::delay(1200);
  // midGoalRetract.toggle();
  // subsystem.intake.intake(3);
  //   //backing up 
  // chassis.moveToPoint(6, -10.1, 1300, {false, 100});
  // pros::delay(1200);
  //   //inbetween towards loader
  // chassis.moveToPoint(25,0, 1500, {true, 100});
  // pros::delay(250);
  // chassis.turnToHeading(180,850);
  // chassis.moveToPoint(22,18,1300, {false, 50, 20});
  // subsystem.intake.intake(3);
  // pros::delay(1500);
  //   //long goal
  // chassis.moveToPoint(25,-31,1000, {true, 60});
  // pros::delay(800);
  // subsystem.intake.intake(0);
  // tongue.toggle();
  //   //push in
  // chassis.moveToPoint(25,-32,1000, {true, 60});
  // pros::delay(1800);
  // subsystem.intake.intake(4);
  // pros::delay(1800);

  //   //left mid + wing
//  wing.toggle();
//   chassis.setPose(0, 0, 0);
//   subsystem.intake.intake(3);
//     //middle blocks
//   chassis.moveToPoint(8,-25, 1000, {false, 4000, 50});
//   pros::delay(850);
//   tongue.toggle();
//   pros::delay(250);
//   chassis.moveToPoint(3,-20, 200, {true, 4000, 50});
//   chassis.turnToHeading(230,150);
//     //mid goal
//   chassis.moveToPoint(-5.5, -31, 1000, {true, 4000});
//         //left open
//   pros::delay(1400);
//   midGoalRetract.extend();
//   subsystem.intake.intake(8);
//   midGoalRetract.toggle();
//   pros::delay(1200);
//   midGoalRetract.toggle();
//   subsystem.intake.intake(3);
//     //backing up 
//   chassis.moveToPoint(6, -10.1, 600, {false, 4000});
//   //   //inbetween towards loader
//   pros::delay(250);
//   chassis.moveToPoint(26,-5,1000, {false, 4000, 50});
//   chassis.turnToHeading(180,850);
//   chassis.moveToPoint(25,18,1300, {false, 3500, 50});
//   subsystem.intake.intake(3);
//   pros::delay(1500);
//     //long goal
//   chassis.moveToPoint(26,-31,1000, {true, 4000});
//   pros::delay(1000);
//   subsystem.intake.intake(0);
//   pros::delay(200);
//   tongue.toggle();
//     //push in
//   chassis.moveToPoint(26,-32,1000, {true, 4000});
//   pros::delay(1800);
//   subsystem.intake.intake(4);
//   pros::delay(250);
//     //control
//   chassis.moveToPoint(26,-10,1000, {false, 4000, 50});
//   chassis.moveToPoint(38,-5,1000, {true, 4000});
//   wing.toggle();
//   chassis.moveToPoint(33,-36,1000, {true, 4000, 50});

  //fin right 7p --> adjusted to go more left when control
//    wing.toggle();
// chassis.setPose(0, 0, 0);
//   subsystem.intake.intake(3);
//   chassis.moveToPoint(-7,-23.7, 1300, {false, 55, 0});
//   pros::delay(900);
//   tongue.toggle();
//   pros::delay(300);
//   chassis.moveToPoint(-24,0, 1300, {true, 100});
//   chassis.turnToHeading(175,1050);
//   chassis.moveToPoint(-23.5,18.3,1450, {false, 50, 23});
//   subsystem.intake.intake(3);
//   pros::delay(1500);
//   chassis.moveToPoint(-23.5,-25,1000, {true, 60});
//   pros::delay(950);
//   subsystem.intake.intake(0);
//   pros::delay(100);
//   subsystem.intake.intake(2);
//   pros::delay(80);
//   subsystem.intake.intake(0);
//   pros::delay(300);
//   subsystem.intake.intake(2);
//   pros::delay(80);
//   subsystem.intake.intake(0);
//   pros::delay(1000);
//   subsystem.intake.intake(2);
//   pros::delay(200);
//   subsystem.intake.intake(0);
//   pros::delay(1000);
//   chassis.moveToPoint(-23.3,-35,1100, {true, 60});
//   chassis.cancelMotion();
//   subsystem.intake.intake(4);
//   tongue.toggle();
//   chassis.moveToPoint(-23.3,0,600, {false, 80, 30});
//   chassis.moveToPoint(-14.7,-12,700, {true, 80, 30});
//   wing.toggle();
//   chassis.moveToPoint(-14.7,-24,780, {true, 80, 47});

























    //USED ONES/CURRENT PROJECTS (most recent version in main.cpp)
                                                        
  //left mid + wing/control                                               //finished left control
//  wing.toggle();
//   chassis.setPose(0, 0, 0);
//   subsystem.intake.intake(3);
//     //middle blocks
//   chassis.moveToPoint(8,-25, 1000, {false, 4000, 50});
//   pros::delay(850);
//   tongue.toggle();
//   pros::delay(250);
//   chassis.moveToPoint(3,-20, 200, {true, 4000, 50});
//   chassis.turnToHeading(230,150);
//     //mid goal
//   chassis.moveToPoint(-5.5, -31, 1000, {true, 4000});
//         //left open
//   pros::delay(1400);
//   midGoalRetract.extend();
//   subsystem.intake.intake(8);
//   midGoalRetract.toggle();
//   pros::delay(1200);
//   midGoalRetract.toggle();
//   subsystem.intake.intake(3);
//     //backing up 
//   chassis.moveToPoint(6, -10.1, 600, {false, 4000});
//   //   //inbetween towards loader
//   pros::delay(250);
//   chassis.moveToPoint(26,-5,1000, {false, 4000, 50});
//   chassis.turnToHeading(180,850);
//   chassis.moveToPoint(25,18,1300, {false, 3500, 50});
//   subsystem.intake.intake(3);
//   pros::delay(1500);
//     //long goal
//   chassis.moveToPoint(26,-31,1000, {true, 4000});
//   pros::delay(1000);
//   subsystem.intake.intake(0);
//   pros::delay(200);
//   tongue.toggle();
//     //push in
//   chassis.moveToPoint(26,-32,1000, {true, 4000});
//   pros::delay(1800);
//   subsystem.intake.intake(4);
//   pros::delay(250);
//     //control
//   chassis.moveToPoint(26,-10,1000, {false, 4000, 50});
//   chassis.moveToPoint(38,-5,1000, {true, 4000});
//   wing.toggle();
//   chassis.moveToPoint(33,-36,1000, {true, 4000, 50});

                                                                  //finished left mid (Ema)

//       //unfinished left mid by Umi
//       //tounge is back
//   wing.toggle();
//   chassis.setPose(0, 0, 0);
//   subsystem.intake.intake(3);
//     //middle blocks
//   chassis.moveToPoint(8,-25, 1300, {false, 55, 0});
//   pros::delay(1200);
//   tongue.toggle();
//   pros::delay(250);
//   chassis.turnToHeading(224,1000);
//     //mid goal
//   chassis.moveToPoint(-4.3, -28.1, 1300, {true, 50});
//         //left open
//   chassis.turnToHeading(225,500);
//   pros::delay(1200);
//   midGoalRetract.extend();
//   subsystem.intake.intake(8);
//   midGoalRetract.toggle();
//   pros::delay(1500);
//   midGoalRetract.toggle();
//   subsystem.intake.intake(3);
//     //backing up 
//   chassis.moveToPoint(0, -10.1, 1300, {false, 100});
//   pros::delay(1200);
//     //inbetween towards loader
//   chassis.moveToPoint(25,0, 1500, {true, 100});
//   pros::delay(250);
//   chassis.turnToHeading(180,850);
//   chassis.moveToPoint(24,18,1300, {false, 50, 20});
//   subsystem.intake.intake(3);
//     //need to test ---------------
//   pros::delay(1300);
//     //long goal
//   chassis.moveToPoint(25,-31,1000, {true, 60});
//   pros::delay(800);
//   subsystem.intake.intake(0);
//   tongue.toggle();
//     //push in
//   chassis.moveToPoint(25,-32,1000, {true, 60});
//   pros::delay(1800);
//   subsystem.intake.intake(4);
//   pros::delay(1800);


                                                //fin right 7 p coded auton (Umi) --> iffy pid?
//   wing.toggle();
// chassis.setPose(0, 0, 0);
//   subsystem.intake.intake(3);
//   chassis.moveToPoint(-7,-23.7, 1300, {false, 55, 0});
//   pros::delay(900);
//   tongue.toggle();
//   pros::delay(300);
//   chassis.moveToPoint(-24,0, 1300, {true, 100});
//   chassis.turnToHeading(175,1050);
//   chassis.moveToPoint(-23.5,18.3,1450, {false, 50, 23});
//   subsystem.intake.intake(3);
//   pros::delay(2500);
//   chassis.moveToPoint(-23.5,-25,1000, {true, 60});
//   pros::delay(950);
//   subsystem.intake.intake(0);
//   pros::delay(100);
//   subsystem.intake.intake(2);
//   pros::delay(80);
//   subsystem.intake.intake(0);
//   pros::delay(300);
//   subsystem.intake.intake(2);
//   pros::delay(80);
//   subsystem.intake.intake(0);
//   pros::delay(1000);
//   subsystem.intake.intake(2);
//   pros::delay(200);
//   subsystem.intake.intake(0);
//   pros::delay(1000);
//   chassis.moveToPoint(-23.3,-35,1100, {true, 60});
//   chassis.cancelMotion();
//   subsystem.intake.intake(4);
//   tongue.toggle();
//   chassis.moveToPoint(-23.3,0,600, {false, 80, 30});
//   chassis.moveToPoint(-14.7,-12,700, {true, 80, 30});
//   wing.toggle();
//   chassis.moveToPoint(-14.7,-24,780, {true, 80, 47});

                                                        //right mid --> left mid flipped (NEEDS TESTING)
//all x coords flipped + outtake bottom (NOT DONE)
  //right mid bottom
  //needs to be tested
  // wing.toggle();
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  //   //middle blocks
  // chassis.moveToPoint(-9,-26, 1300, {false, 55, 0});
  // pros::delay(1200);
  // tongue.toggle();
  // pros::delay(250);
  // chassis.moveToPoint(-3,-20, 1300, {true, 55, 0});
  // pros::delay(1200);
  //     //fix
  // // chassis.turnToHeading(135,1000);
  // pros::delay(250);
  // tongue.toggle();
  //   //mid goal
  // chassis.moveToPoint(5.5, -29.5, 1300, {false, 50});
  //       //left open
  // // chassis.turnToHeading(225,500);
  // pros::delay(1400);
  // midGoalRetract.extend();
  // subsystem.intake.intake(2);
  // pros::delay(1400);
  //   //backing up 
  // chassis.moveToPoint(-6, -10.1, 1300, {true, 100});
  // tongue.toggle();
  // subsystem.intake.intake(3);
  // pros::delay(1200);
  //   //inbetween towards loader
  // chassis.moveToPoint(-25,0, 1500, {true, 100});
  // pros::delay(250);
  // chassis.turnToHeading(180,850);
  // chassis.moveToPoint(-20.5,18,1300, {false, 50, 20});
  // subsystem.intake.intake(3);
  // pros::delay(1500);
  //   //long goal
  // chassis.moveToPoint(-23,-31,1000, {true, 60});
  // pros::delay(800);
  // subsystem.intake.intake(0);
  // tongue.toggle();
  //   //push in
  // chassis.moveToPoint(-23,-32,1000, {true, 60});
  // pros::delay(1800);
  // subsystem.intake.intake(4);
  // pros::delay(1800);

                                                      //solo awp from left (NOT DONE)
//left mid + bottom mid = solo awp
  // wing.toggle();
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  //   //middle blocks
  // chassis.moveToPoint(8,-25, 1300, {false, 55, 0});
  // pros::delay(1000);
  // tongue.toggle();
  // pros::delay(250);
  // chassis.turnToHeading(224,1000);
  //   //mid goal
  // chassis.moveToPoint(-4.3, -28.1, 1300, {true, 50});
  //       //left open
  // chassis.turnToHeading(225,500);
  // pros::delay(1200);
  // midGoalRetract.extend();
  // subsystem.intake.intake(8);
  // midGoalRetract.toggle();
  // pros::delay(1500);
  // midGoalRetract.toggle();
  // subsystem.intake.intake(3);
  //   //backing up 
  // chassis.moveToPoint(0, -10.1, 1300, {false, 100});
  // pros::delay(1000);
  //   //go to bottom goal 
  //       //intaking the other side
  // chassis.moveToPoint(-8,-25,1300, {false, 55, 0});
  // pros::delay(1000);
  // tongue.toggle();
  // pros::delay(250);
  //       //turn towards bottom goal
  // chassis.turnToHeading(136,1000);
  // chassis.moveToPoint(4.3, -28.1, 1300, {true, 50});
  //   //from right mid code
  // pros::delay(1400);
  // midGoalRetract.extend();
  // tounge.toggle();
  // subsystem.intake.intake(2);
  // pros::delay(1400);
  //   //backing up 
  // chassis.moveToPoint(-6, -10.1, 1300, {false, 100});
  // subsystem.intake.intake(3);
  // pros::delay(1200);
  //   //inbetween towards loader
  // chassis.moveToPoint(-25,0, 1500, {true, 100});
  // pros::delay(250);
  // chassis.turnToHeading(180,850);
  // chassis.moveToPoint(-22,18,1300, {false, 50, 20});
  // subsystem.intake.intake(3);
  // pros::delay(1500);
  //   //long goal
  // chassis.moveToPoint(-25,-31,1000, {true, 60});
  // pros::delay(800);
  // subsystem.intake.intake(0);
  // tongue.toggle();
  //   //push in
  // chassis.moveToPoint(-25,-32,1000, {true, 60});
  // pros::delay(1800);
  // subsystem.intake.intake(4);
  // pros::delay(1800);
        //   //inbetween towards loader
        // chassis.moveToPoint(25,0, 1500, {true, 100});
        // pros::delay(250);
        // chassis.turnToHeading(180,850);
        // chassis.moveToPoint(24,18,1300, {false, 50, 20});
        // subsystem.intake.intake(3);
        // pros::delay(1300);
        //   //long goal
        // chassis.moveToPoint(25,-31,1000, {true, 60});
        // pros::delay(800);
        // subsystem.intake.intake(0);
        // tongue.toggle();
        //   //push in
        // chassis.moveToPoint(25,-32,1000, {true, 60});
        // pros::delay(1800);
        // subsystem.intake.intake(4);
        // pros::delay(1800);     
        
  

                                                                  //auton skills left mid + park (NEEDS TESTING)
  //skills to clear park 
  // wing.toggle();
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  //   //middle blocks
  // chassis.moveToPoint(8,-25, 1300, {false, 55, 0});
  // pros::delay(1200);
  // tongue.toggle();
  // pros::delay(250);
  // chassis.turnToHeading(224,1000);
  //   //mid goal
  // chassis.moveToPoint(-4.3, -28.1, 1300, {true, 50});
  //       //left open
  // chassis.turnToHeading(225,500);
  // pros::delay(1200);
  // midGoalRetract.extend();
  // subsystem.intake.intake(8);
  // midGoalRetract.toggle();
  // pros::delay(1500);
  // midGoalRetract.toggle();
  // subsystem.intake.intake(3);
  //   //backing up 
  // chassis.moveToPoint(0, -10.1, 1300, {false, 100});
  // pros::delay(1200);
  //   //inbetween towards loader
  // chassis.moveToPoint(25,0, 1500, {true, 100});
  // pros::delay(250);
  // chassis.turnToHeading(180,850);
  // chassis.moveToPoint(24,18,1300, {false, 50, 20});
  // subsystem.intake.intake(3);
  //   //need to test ---------------
  // pros::delay(1300);
  //   //long goal
  // chassis.moveToPoint(25,-31,1000, {true, 60});
  // pros::delay(800);
  // subsystem.intake.intake(0);
  // tongue.toggle();
  //   //push in
  // chassis.moveToPoint(25,-32,1000, {true, 60});
  // pros::delay(1800);
  // subsystem.intake.intake(4);
  // pros::delay(1800);
  //   //go to park
  // chassis.moveToPoint(0,5,1000, {false, 60});
  // pros::delay(1200);
  // chassis.turnToHeading(-90,850);
  // pros::delay(1200);
  // subsystem.intake.intake(3);
  // chassis.moveToPoint(20,5,1000, {false, 60})
  // pros::delay(1200);
        //version 2
  // wing.toggle();
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  //   //middle blocks
  // chassis.moveToPoint(8,-25, 2000, {false, 55, 0});
  // pros::delay(1200);
  // tongue.toggle();
  // pros::delay(250);
  // chassis.turnToHeading(224,500);
  //   //mid goal
  // chassis.moveToPoint(-4.3, -28.1, 2000, {true, 50});
  //       //left open
  // chassis.turnToHeading(225,700);
  // pros::delay(1200);
  // midGoalRetract.extend();
  // subsystem.intake.intake(8);
  // midGoalRetract.toggle();
  // pros::delay(1500);
  // midGoalRetract.toggle();
  // subsystem.intake.intake(3);
  //   //backing up 
  // chassis.moveToPoint(0, -10.1, 1300, {false, 100});
  // pros::delay(1200);
  //   //inbetween towards loader
  // chassis.moveToPoint(25,0, 1500, {true, 100});
  // pros::delay(250);
  // chassis.turnToHeading(180,850);
  // chassis.moveToPoint(24,18,1300, {false, 50, 20});
  // subsystem.intake.intake(3);
  // pros::delay(1300);
  //   //long goal
  // chassis.moveToPoint(25,-31,2000, {true, 60});
  // pros::delay(800);
  // subsystem.intake.intake(0);
  // tongue.toggle();
  //   //push in
  // chassis.moveToPoint(25,-32,2000, {true, 60});
  // pros::delay(1800);
  // subsystem.intake.intake(4);
  // pros::delay(1200);
  //   //go to park
  // chassis.moveToPoint(0,20,1000, {false, 60});
  // pros::delay(1200);
  // chassis.turnToHeading(90,850);
  // pros::delay(1200);
  // subsystem.intake.intake(3);
  // chassis.moveToPoint(30,20,1000, {true, 60});
  // pros::delay(1200);

                                                                    //simple skills (NEEDS TESTING)
  // chassis.setPose(0, 0, 0);
  // subsystem.intake.intake(3);
  // chassis.moveToPoint(0,10,1600, {true, 60});
  // pros::delay(1800);
  // chassis.moveToPoint(0,-20,10000, {false, 60});
  // pros::delay(1800);


                                                                    //solo awp (NOT DONE)
// chassis.setPose(0,0,0);
// subsystem.intake.intake(3);
//   //push bot
// // chassis.moveToPoint(0,-15, 250, {false,4000});
//   //matchload
// chassis.moveToPoint(0,36, 1000, {true,4000});
// chassis.turnToHeading(90,50);
// tongue.toggle();
// chassis.moveToPoint(17,36, 1800, {false,4000});
//   //long goal
// chassis.moveToPoint(-25 ,36, 2500, {true,4000});
// subsystem.intake.intake(0);
// pros::delay(200);
// subsystem.intake.intake(2);
// pros::delay(200);
// subsystem.intake.intake(0);
// pros::delay(1800);
// subsystem.intake.intake(4);
// tongue.toggle();
//   //back up
// chassis.moveToPoint(5,36, 400, {false ,4000});
//   //middle blocks collection
// chassis.moveToPoint(-26 ,10, 1000, {false ,4000});
// subsystem.intake.intake(3);
// pros::delay(1400);
// tongue.toggle();
// pros::delay(400);
// tongue.toggle();
// chassis.moveToPoint(-17,-25, 1000, {false ,4000});
//   //middle top
//     //fix heading 
// // chassis.moveToPoint(-12 ,-20, 400, {false,4000});
// chassis.moveToPoint(-26 ,-9, 1000, {true,4000});
// tongue.toggle();
// pros::delay(800);
// chassis.turnToHeading(300,200);
// midGoalRetract.toggle();
// subsystem.intake.intake(0);
// pros::delay(2500);
// subsystem.intake.intake(4);
// //   //back up
// // chassis.moveToPoint(-10 ,-20, 400, {false,4000});
//   //match load 2
// subsystem.intake.intake(3);
// chassis.moveToPoint(0 ,-36.5, 800, {false,4000});
// chassis.moveToPoint(15 ,-36, 1800, {false,3500});
//   //long goal 
// chassis.moveToPoint(-25,-36.5, 200, {true,4000});
// pros::delay(500);
// subsystem.intake.intake(0);

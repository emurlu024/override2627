#pragma once

namespace Robot {

/**
 * @brief The Intake class represents a robot intake system.
 */
class Intake {
public:
   /**
    * @brief Runs the main function of the intake system.
    *
    * Takes optional user input to control the direction of the intake system in
    * autonomous.
    */
   void intake(int state);
   Intake();

private:
   // bool elevate;
   bool l2;
   bool up;
   bool dn;
   bool stopped; //stopping the intake to load
   int state;
   /**
    * @brief blue is false, red is true.
    */
};
} // namespace Robot
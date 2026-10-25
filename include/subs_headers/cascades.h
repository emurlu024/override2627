#pragma once

namespace Robot {

/**
 * @brief The Intake class represents a robot intake system.
 */
class cascades {
public:
   /**
    * @brief Runs the main function of the ring rush system.
    *
    * Takes optional user input to control the direction of the intake system in
    * autonomous.
    */
   void move(int state);

   // void cascadesUp();
   // void cascadesDown();
};
} // namespace Robot
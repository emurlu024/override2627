#include "main.h"// IWYU pragma: keep
#include "globals.h"// IWYU pragma: keep
#include "pros/misc.h"
#include "subs_headers/intakes.h"
using namespace Robot;
using namespace Robot::Globals;

Intake::Intake() {}

void Intake::intake(int state) {
  if (state == 0) {
    intakes.move_velocity(600);    // forward
  } else if (state == 1) {
    intakes.move_velocity(-600);   // reverse
  } else if (state == 2) {
    intakes.move_velocity(0);      // stop
  }
}

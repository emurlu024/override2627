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

void Intake::run() {
  if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
    intake(0);
  } else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
    intake(1);
  } else {
    intake(2);
  }
}
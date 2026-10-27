#include "main.h"// IWYU pragma: keep
#include "globals.h"// IWYU pragma: keep
#include "pros/misc.h"
#include "subs_headers/cascades.h"
using namespace Robot;
using namespace Robot::Globals;

cascades::cascades() {}

void cascades::move(int state) {
  if (state == 0) {
    cascadeMotors.move_velocity(600);
  } else if (state == 1) {
    cascadeMotors.move_velocity(-600);
  } else if (state == 2) {
    cascadeMotors.brake();
  }
}

void cascades::run() {
  if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
    move(0);
  } else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
    move(1);
  } else {
    move(2);
  }
}
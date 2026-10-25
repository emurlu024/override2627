#include "main.h"// IWYU pragma: keep
#include "globals.h"// IWYU pragma: keep
#include "subs_headers/tongue.h"
#include "pros/misc.h"
using namespace Robot;
using namespace Robot::Globals;

#include "cascades.h"

cascades::cascades() {}

void cascades::move(int state) {
    //up
  if(state == 1){
    cascadeMotors.move_velocity(800);
  }
    //down
  else if(state == 2){
    cascadeMotors.move_velocity(-800);
  }

  else
  {
    cascadeMotors.move_velocity(0);
  }
}


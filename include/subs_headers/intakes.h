#pragma once

namespace Robot {

class Intake {
public:
   Intake();
   void intake(int state);   // 0 = forward, 1 = reverse, 2 = stop
   void run();
};
} // namespace Robot
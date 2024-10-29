#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor L1 = motor(PORT3, ratio6_1, true);
motor L2 = motor(PORT4, ratio6_1, true);
motor L3 = motor(PORT5, ratio6_1, false);
motor R1 = motor(PORT17, ratio6_1, false);
motor R2 = motor(PORT7, ratio6_1, false);
motor R3 = motor(PORT8, ratio6_1, true);
motor upper = motor(PORT18, ratio18_1, true);
motor lower = motor(PORT10, ratio36_1, true);
inertial IMU = inertial(PORT15);
digital_out mogoClamp = digital_out(Brain.ThreeWirePort.A);
digital_out goalRush = digital_out(Brain.ThreeWirePort.B);
motor arm = motor(PORT9, ratio18_1, false);
digital_out hang1 = digital_out(Brain.ThreeWirePort.F);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
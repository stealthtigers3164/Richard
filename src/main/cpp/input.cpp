#include <input.h>
#include <drive.h>
#include <Gamepad.h>
#include <input.h>
input::input(){
    controller = new Gamepad(0);
    drivechain = new drive(1,2,3,0,5);
}
void input::update(){
  // Joysticks
    float* LeftStick = controller->LeftJoystick();
    float* RightStick = controller->RightJoystick();
    float Pivot = controller->getPivot();
    //Extra Controls (yet tbd)

    float pivot = Pivot;
    float left = LeftStick[1];
    float right = LeftStick[0];
    //right *= -1.0f;
    drivechain->update(left, right, pivot);
    
}
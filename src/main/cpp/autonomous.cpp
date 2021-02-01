#include <input.h>
#include <drive.h>
#include <Gamepad.h>
#include <autonomous.h>
autonomous::autonomous(){
    drivechain = new drive(1,2,3,0,5);
}
void autonomous::forward(){
    drivechain->update(0.4,0.4,0.0);
}
void autonomous::stop(){
    drivechain->update(0,0,0);
}
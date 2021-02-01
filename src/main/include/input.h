#pragma once
#include <Gamepad.h>
#include <drive.h>
#include <frc/Joystick.h>

//input class
//detects input from controllers using the gamepad wrapper

//TO DO:
//create control scheme selector
//  (probably in seperate smartdashboard class)

class input{

    public:

        input();
        void update();

    private:
        Gamepad *controller;
        drive *drivechain; 
};
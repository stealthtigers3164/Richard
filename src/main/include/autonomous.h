#pragma once
#include <Gamepad.h>
#include <drive.h>

//input class
//detects input from controllers using the gamepad wrapper

//TO DO:
//create control scheme selector
//  (probably in seperate smartdashboard class)

class autonomous{

    public:

        autonomous();
        void forward();
        void stop();

    private:
        drive *drivechain; 

};
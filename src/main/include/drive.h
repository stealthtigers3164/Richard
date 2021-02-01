#pragma once
#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Spark.h>
#include <Gamepad.h>

class drive{

    //create private 
    private:
        Spark *m_Left;
        Spark *m_Right;
        Spark *m_backLeft;
        Spark *m_backRight;
        Spark *m_test;

    public:

        drive();
        drive(int Left, int Right, int backLeft , int backRight, int test);
        
        void update(float left, float right, float pivot);
};
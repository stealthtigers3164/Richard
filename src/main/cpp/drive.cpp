#include <iostream>
#include <frc/Spark.h>
#include <Gamepad.h>
#include <drive.h>

drive::drive(){
    std::cout << "WARNING! No ports defined for drive class constructor." <<  std::endl;
}

drive::drive(int left, int right, int backLeft , int backRight, int test){
    m_Left = new frc::Spark(left);
    m_Right = new frc::Spark(right);
    m_backLeft = new frc::Spark(backLeft);
    m_backRight = new frc::Spark(backRight);
    m_test = new frc::Spark(test);
}

void drive::update(float left, float right, float pivot){
    std::cout << "left." << left <<  std::endl;
    m_Left->Set(0.5*(left + right - pivot));
    m_Right->Set(0.5*(-left - right - pivot));
    m_backLeft->Set(0.5*(left - right - pivot));
    m_backRight->Set(0.5*(-left + right - pivot));

}
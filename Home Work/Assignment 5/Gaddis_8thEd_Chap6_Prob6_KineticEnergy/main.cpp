/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 2nd, 2017, 11:30 PM
  Purpose: This program calculates the kinetic energy of an object given the
           objects mass and velocity. 
 */

//System Libraries
#include <iostream> //Input output stream
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float KinEn(float, float); //Function that calculates kinetic energy
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float mass, vel, KinEnG; ///Mass and velocity variables
    //Input values
    cout<<"What is the mass in kilograms of the object? ";
    cin >>mass; //Get the mass of the object
    cout<<"What is the object's velocity in (m/s)? ";
    cin >>vel; //Get the velocity of the object
    
    //Process by mapping inputs to outputs
    KinEnG = KinEn(mass,vel); //Call function to get kinetic energy
    //Output values
    cout<<"The kinetic energy of the object is "<<KinEnG<<" kilogram meters^2\n"
        <<"per second^2.";
    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of KinEn function. This function calculates the kinetic energy of*
// an object given the objects mass and velocity.                              *
//******************************************************************************
float KinEn(float m, float v)
{
    float Kin;
    Kin = (.5)*m*(v*v); //calculate the kinetic energy
    return Kin; //Return the kinetic energy to main
}
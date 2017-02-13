/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 8th, 2017, 7:00 PM
  Purpose: This program calculates that a distance has fallen given the amount
           of time that it falls. 
 */

//System Libraries
#include <iostream> //Input output stream
#include <iomanip> //To manipulate the output
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const float g = 9.8; //force of gravity equals 9.8 meters per sec squared
//Function Prototypes
float fallDis(float); //Function that calculates the distance fallen

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float dist; //distance
    float g =9.8; //gravity
    float t; //time
    //Prompt user
    cout<<"This program calculates the distance an object will fall over a\n"
        <<"period of time.\n"; //Tell user what the program does
    for(float t=1, dist; t<=10; t++)
    {
        dist = fallDis(t); 
        cout<<"If the object falls for "<<t<<" seconds it will fall for\n"
            <<dist<<" meters."; //Display the time and distance fallen
    }
    
    //Call fallDis function
    
            
    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the fallDis function. This function calculates the distance  **
// that the object has fallen given time                                      **
//******************************************************************************
float fallDis(float time)
{
    float dist, g = 9.8;
    
    dist = (.5)*(g)*((time*time )); //calculate ditance fallen
    return dist;
}
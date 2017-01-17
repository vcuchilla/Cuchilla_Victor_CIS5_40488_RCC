/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 6:15 PM
  Purpose: This program takes the mass of an object and calculates its' weight.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float mass, weight; //Mass and weight of object
    //Input values
    cout<<"I will calculate the weight of an object from its' mass.\n"
        <<"What is the object's mass?\n";
    cin>>mass;
    //Process by mapping inputs to outputs
    weight = mass*9.8;
    //Output values
            if (weight > 1000)
                cout<<"The mass that you entered was too large or too heavy.";
            else if (weight < 10)
                cout<<"The mass that you entered was too small or too light.";
            else
                cout<<"The weight of the object is "<<weight<<" Newtons.";
    //Exit stage right!
    return 0;
}

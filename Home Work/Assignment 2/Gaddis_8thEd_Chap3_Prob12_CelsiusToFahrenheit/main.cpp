/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 5:00 PM
  Purpose: This Program converts celsius temperature to fahrenheit temperatures.
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
    float C, F; // Celsius and Fahrenheit
    //Input values
    cout<<"What is the temperature in celsius?\n";
    cin>>C;
    //Process by mapping inputs to outputs
    F = 1.8*C+32; //Celsius to Fahrenheit conversion
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"If the temperature is "<<C<<" degrees celsuis"<<",\n"
          "then it is "<<F<<" degrees farehheit.";
    //Exit stage right!
    return 0;
}

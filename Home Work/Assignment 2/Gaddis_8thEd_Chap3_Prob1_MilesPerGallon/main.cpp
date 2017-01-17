/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 1:15 PM
  Purpose: This program figures out how many miles to the gallon a car gets
 */

//System Libraries
#include <iostream>
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
    float gCrHlds, nmrMls, MlsPerG; //gallons car holds, number of miles, MPG
    //Input values
    cout<<"How many gallons of gas does your car hold? \n";
    cin>>gCrHlds; //user inputs gallons car holds
    cout<<"How many miles can your car drive on a full tank of gas? \n";
    cin>>nmrMls; //user inputs number of miles car drives
    //Process by mapping inputs to outputs
    MlsPerG = nmrMls/gCrHlds;
    //Output values
    cout<<"Your car gets "<<MlsPerG<<" miles per gallon!";
    //Exit stage right!
    return 0;
}
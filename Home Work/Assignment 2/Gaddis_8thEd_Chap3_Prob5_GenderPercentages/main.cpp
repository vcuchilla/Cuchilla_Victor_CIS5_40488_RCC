/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 2:00 PM
  Purpose: This program determines the gender percentages of those in a class
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
    float numMal, numFem, totstds; //gender variables and total student
    float pcntMal, pcntFem; //gender percentages
    //Input values
    cout<<"How many males are registered in the class?\n";
    cin>>numMal;
    cout<<"How many females are registered in the class?\n";
    cin>>numFem;
    //Process by mapping inputs to outputs
    totstds = numMal + numFem;
    pcntMal = (numMal/totstds)*100;
    pcntFem = (numFem/totstds)*100;      
    //Output values
    cout<<"The class is made up of "<<pcntMal<<"% males\n"<<
          "and "<<pcntFem<<"% Females";
    //Exit stage right!
    return 0;
}
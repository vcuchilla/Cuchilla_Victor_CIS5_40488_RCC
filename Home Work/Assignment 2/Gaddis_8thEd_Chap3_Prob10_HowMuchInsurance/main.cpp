/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 3:30 PM
  Purpose: This program determines how much insurance a property owner should
 *         purchase. 
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
    float RpmtCst, InscCst; //Replacement cost
    //Input values
    cout<<"How much would it cost to replace your property?\n";
    cin>>RpmtCst; //user inputs Replacement cost
    //Process by mapping inputs to outputs
    InscCst = RpmtCst*.8; //80% of replacement cost
    
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"Many financial advisors suggest that a property owner such as\n"
          "yourself purchase a minimum of $"<<InscCst<<" for your property.";
    //Exit stage right!
    return 0;
}

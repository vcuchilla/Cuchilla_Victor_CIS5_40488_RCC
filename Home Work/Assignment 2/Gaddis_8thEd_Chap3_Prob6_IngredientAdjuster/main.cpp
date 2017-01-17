/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 2:15 PM
  Purpose: This program creates a recipe based of the amount of cookies that one
 wants to make
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
    float UsrAmnt, RcpAmnt; //User and recipe amount of cookies
    float AmntSg, AmntBt, AmntFl; // Amount of different ingredients
    //Input values
    cout<<"How many cookies do you want to make?\n";
    cin>>UsrAmnt;
            
    //Process by mapping inputs to outputs
    AmntSg = 1.5 * (UsrAmnt/48);
    AmntBt = 1   * (UsrAmnt/48);
    AmntFl = 2.75* (UsrAmnt/48);
    //Output values
    cout<<"Here is the recipe in order to make "<<UsrAmnt<<" cookies:\n";
    cout<<setprecision(2)<<fixed;
    cout<<AmntSg<<" cups of sugar\n";
    cout<<AmntBt<<" cups of butter\n";
    cout<<AmntFl<<" cups of flour\n";
            
    //Exit stage right!
    return 0;
}
/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 3:30 PM
  Purpose: This program determines how many calories a person has eaten based 
 *         off the amount of cookies they have eaten.  
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
    short nmrCkEt, calCsmd; //Number of cookies eaten and calories consumed
    //Input values
    cout<<"A bag of cookies holds 30 cookies.\n"
          "The calorie information on the bag claims that there\n"
    "are 10 \"servings\" in the bag and that a serving equals 300 calories.\n";
    cout<<"\nHow many cookies did you eat?\n";
    cin>>nmrCkEt;
    //Process by mapping inputs to outputs
    calCsmd = nmrCkEt*10;
    //Output values
    cout<<"You have Consumed "<<calCsmd<<" calories.";
    //Exit stage right!
    return 0;
}

/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 4:15 PM
  Purpose: This Program Finds the Sum of two Integers
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
    int int1 = 50, int2 = 100, //Declare integers as variables
            total ; //Total of two Integer Variable
    //Input values
    
    //Process by mapping inputs to outputs
    total = int1 + int2 ; //Adding two integers
    //Output values
    cout<<"This program adds the two numbers 50 and 100"<<endl;
    cout<<"whose sum is "<<total<<endl; //Output the total
    //Exit stage right!
    return 0;
}
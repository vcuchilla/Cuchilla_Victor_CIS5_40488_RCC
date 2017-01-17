/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 1:15 PM
  Purpose: This program is a math tutor by determining if a user's guess to a 
           sum is correct.
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
    int sum;
    //Input values
    cout<<"I am a math tutor. I want you to guess the sum of this equation:\n"
        <<"              247\n"
        <<"             +129\n"
        <<"              ___\n              ";
    cin>>sum;
    
    //Process by mapping inputs to outputs
    if (sum == 376)
        cout<<"\nGreat job, you got the correct answer of 376!";
    else
        cout<<"Actually, the correct answer is 376.";
    //Output values

    //Exit stage right!
    return 0;
}
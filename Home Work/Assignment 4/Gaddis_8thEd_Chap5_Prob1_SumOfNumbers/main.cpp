/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 19, 2017, 1:13 PM
  Purpose: This program finds the sum of all the integers from 1 all the way up
           to a user inputted number using a loop.
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
    int stNum = 1, stopNum, sum; //User number and sum of all integers to #
    
    //Input values
    cout<<"Pick any number and I will tell you the sum of all the digits from\n"
        <<"1 to that number.\n";
    cin>>stopNum;
    
    //Process by mapping inputs to outputs (perform iterations to find sum)
    //Using a loop
    while (stNum<=stopNum)
        {
            sum+=stNum;
            stNum++;
        }        
    //Output values
    cout<<"The number you entered was "<<stopNum<<".\n";
    cout<<"The sum of all the integers to that number is "<<sum<<".\n";
    //Exit stage right!
    return 0;
}
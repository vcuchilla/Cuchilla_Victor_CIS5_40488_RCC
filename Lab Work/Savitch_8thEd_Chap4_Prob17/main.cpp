/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
bool qryDigt (int number, int digit);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char digit;
    int number;
    
    //Input values
    cout<<"This program finds a digit\n";
    cout<<"Input a single digit\n";
    cin>>digit;
    
    //Generate a random number
    number=rand();
    // Loop until you find the digit or exit
    
    return 0;
}
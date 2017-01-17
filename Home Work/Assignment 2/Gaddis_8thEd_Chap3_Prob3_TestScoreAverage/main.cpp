/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 1:30 PM
  Purpose: This program calculates the average of five test scores
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
    short test1, test2, test3, test4, test5; //tests
    float testAvg ; //test average
    //Input values
    cout<<"What were the five test scores? ex. 97 78 91 83 79\n";
    cin>>test1>>test2>>test3>>test4>>test5;
     
    //Process by mapping inputs to outputs
    testAvg = (test1+test2+test3+test4+test5)/5;
    //Output values
    cout<<setprecision(1)<<fixed;
    cout<<"The average of the five test scores was "<<testAvg<<"%";
    //Exit stage right!
    return 0;
}
/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 5:00 PM
  Purpose: This computer determines which two user values are larger.
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
    int X,Y; //Two separate user numbers.
    //Input values
    cout<<"Please enter two different numbers an X and a Y. ex. 3 8\n";
    cin>>X>>Y;
    if (X>Y)
    cout<<"X is greater than Y. X is "<<X<<" and Y is "<<Y<<".";
    if (Y>X)
    cout<<"Y is greater than X. Y is "<<Y<<" and X is "<<X<<".";
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
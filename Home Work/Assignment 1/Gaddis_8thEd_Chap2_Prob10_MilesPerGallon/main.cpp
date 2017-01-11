/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 4:45 PM
  Purpose:  This Program figures out the miles per gallon a car gets
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
    int GGUsd = 15, //Gallons of gas the car used
      MlsDrvn = 375, //Miles the car was able to drive before re-fueling
          MPG; //Miles Per Gallon
    //Input values
    
    //Process by mapping inputs to outputs
    MPG = MlsDrvn/GGUsd; //Miles Driven divided by the number of gallons used
    //Output values
    cout<<"The Car drove "<<MlsDrvn<<" miles on "<<GGUsd<<" gallons of gas"<<endl;
    cout<<"and got "<<MPG<<" miles per gallon of gasoline"<<endl;
    //Exit stage right!
    return 0;
}
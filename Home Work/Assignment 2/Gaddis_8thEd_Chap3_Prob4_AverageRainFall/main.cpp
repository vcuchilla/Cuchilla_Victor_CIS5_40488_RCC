/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 1:40 PM
  Purpose: This program calculates the average rainfall over three months 
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
    string month1, month2, month3; //months which rain fell
    float mnt1Rnf, mnt2Rnf, mnt3Rnf, AvgRnFl; //Rain of the three months + Avg
    //Input values
    cout<<"In which months did you want to calculate the average rainfall(in) "
          "for?\n"<< "ex. January February March\n"; //prompt user
    cin>>month1>>month2>>month3; //user inputs months
    cout<<"How much rain fell in "<<month1<<"?\n"; //User inputs amounts for
    cin>>mnt1Rnf;                                 //each month
    cout<<"How much rain fell in "<<month2<<"?\n";
    cin>>mnt2Rnf;
    cout<<"How much rain fell in "<<month3<<"?\n";
    cin>>mnt3Rnf;
    
    //Process by mapping inputs to outputs
    AvgRnFl = (mnt1Rnf + mnt2Rnf + mnt3Rnf)/3;
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"The average rain that fell for the months of "<<month1<<", "
        <<month2<<", and\n"<<month3<<" was "<<AvgRnFl<<" inches.";
    //Exit stage right!
    return 0;
}
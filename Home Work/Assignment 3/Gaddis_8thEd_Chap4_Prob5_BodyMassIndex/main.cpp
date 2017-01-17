/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 6:00 PM
  Purpose: This program figures out and displays and individual's Body Mass
           index.
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
    float weight, height, BMI; //Weight, Height, and BMI
    //Input values
    cout<<"I am going to calculate your Body Mass Index. What is your weight in"
        <<" lbs. ?\n";
    cin>>weight;
    cout<<"How tall are you in inches?\n";
    cin>>height;
            
    //Process by mapping inputs to outputs
    BMI = (weight*70.3)/(height*height);
    //Output values
    cout<<setprecision(2)<<fixed;
    if (BMI > 25)
        cout<<"You are considered to be overweight and your BMI is "<<BMI;
    else if (BMI > 18.5 && BMI < 25)
        cout<<"You are considered to be at optimal weight and your BMI is "<<BMI
              ;
    else
        cout<<"You are considered to be underweight and your BMI is "<<BMI;
    //Exit stage right!
    return 0;
}
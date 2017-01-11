/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 11, 2017, 12:45 PM
  Purpose: This Program calculates paycheck accounting for overtime hours
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
    float hrsWrkd, payRate, //hours worked and the pay rate are given
          paychk; //This is calculated given users input
    //Input values
    cout<<"This Program figures out a person paycheck while"<<endl;
    cout<<"accounting for overtime hours."<<endl;
    cout<<"How many hours did you work? ";
    cin>>hrsWrkd;
    cout<<"What is your pay rate? $";
    cin>>payRate; 
     
    //Process by mapping inputs to outputs(Calculate the user's paycheck)
    if (hrsWrkd > 40) //paycheck operations if there are overtime hours
        paychk = (40*payRate) + (hrsWrkd-40)*payRate*2;
    
    paychk = hrsWrkd*payRate ;
   
    //Output values
    cout<<"Your paycheck is $"<<paychk<<endl;
    //Exit stage right!
    return 0;
}
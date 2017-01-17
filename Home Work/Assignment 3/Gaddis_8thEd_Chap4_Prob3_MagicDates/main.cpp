/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 5:30 PM
  Purpose:  
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
    int month, day, year; //date variables
    //Input values
    cout<<"Enter a month in the year, but its numerical number. ex 1 = January"
        <<"\n";
    cin>>month; //enter month
    cout<<"Enter a day within the month from 1-30 or 1-31. ex 7 = seventh day"
        <<"\n";
    cin>>day; //enter day
    cout<<"Enter a two digit year. anything from 01-99. ex 23\n";
    cin>>year; //enter year
            
    //Process by mapping inputs to outputs
    if (day*month == year) 
        cout<<"You entered the magical date of "<<month<<"/"<<day<<"/"<<year
            <<"\n";
    else
        cout<<"You entered the regular date of"<<month<<"/"<<day<<"/"<<year;
    //Output values

    //Exit stage right!
    return 0;
}
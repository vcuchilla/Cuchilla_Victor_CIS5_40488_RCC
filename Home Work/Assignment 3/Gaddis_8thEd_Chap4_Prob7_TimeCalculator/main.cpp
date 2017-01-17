/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 6:30 PM
  Purpose: This program calculates and displays how much time is in a number of
           seconds.
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
    float sec, time; //seconds and the amount of time in those seconds
    //Input values
    cout<<"I am a time teller. How many seconds do you want me to account for?"
        <<"\n" ;
    cin>>sec; //User inputs the number of seconds
    //Process by mapping inputs to outputs
    cout<<setprecision(2)<<fixed;
    if (sec < 60)
        cout<<"That is a total of "<<sec<<" seconds.";
    else if (sec >= 60 && sec < 3600)
    {
        float min;
        min = (sec/60);
        cout<<"That is a total of "<<min<<" minutes.";
    }
    else if (sec >= 3600 && sec <86400)
    {
        float hour;
        hour = (sec/3600);
        cout<<"That is a total of "<<hour<<" hours.";
    }
    else 
    {
        float day;
        day = (sec/86400);
        cout<<"That is a total of "<<day<<" days.";
    }
    //Output values

    //Exit stage right!
    return 0;
}
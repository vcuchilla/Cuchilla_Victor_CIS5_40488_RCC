/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 7nd, 2017, 6:00 PM
  Purpose: This program converts fahrenheit degrees to celsius degrees and
           displays a table.
 */

//System Libraries
#include <iostream> //Input output stream
#include <iomanip>  //To manipulate output
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float celsius(float); //Function that converts degrees of temperature
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float F, C; //fahrenheit and celsius
    cout<<"Fahrenheit                  Celsius\n";
    //Loop and call function to display table
    for (F=0, C; F<=20; F++)
    {
        C = celsius(F); //Call celsius function
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<" "<<F<<"                       "<<C<<"\n";
    }

    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of function celsius. This program calculate celsius from        **
// fahrenheit.                                                                **
//******************************************************************************
float celsius(float F)
{
    //Calculate celsius from fahrenheit
   return ((5.0/9)*(F-32)); // return c to main
}
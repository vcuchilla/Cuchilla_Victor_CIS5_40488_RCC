/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 12:15 PM
  Purpose:  This Program determines the percent of the federal budget spent on
 * the Military and NASA program in 2016
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
    float fedBud = 3.54E12, //The Federal Budget of 2016
                             //Source:http://federal-budget.insidegov.com
          milBud = 598E9  , //The Federal Military Budget of 2016
                             //Source:https://www.nationalpriorities.org
         nasaBud = 19E9   , //The Federal Budget for NASA of 2016
                             //Source:https://spaceflightnow.com
         pcntMil , pcntNas;  // Percent Military Budget and Percent NASA Budget
    //Input values
    
    //Process by mapping inputs to outputs
    pcntMil = (milBud/fedBud)*100; //Percent of Fed. Budget spent on Military
    pcntNas = (nasaBud/fedBud)*100; //Percent of Fed. Budget spent on NASA
    //Output values
    cout<<"The U.S Federal Budget for 2016 was $"<<fedBud<<endl;
    cout<<"The Military Federal Budget for 2016 was $"<<milBud<<endl;
    cout<<"The NASA Federal Budget for 2016 was $"<<nasaBud<<endl;
    cout<<"The percent of the Federal Budget spent on"<<endl;
    cout<<"the Military was "<<pcntMil<<"%"<<endl;
    cout<<"The percent of the Federal Budget spent on"<<endl;
    cout<<"NASA was "<<pcntNas<<"%"<<endl;
    
           
    //Exit stage right!
    return 0;
}
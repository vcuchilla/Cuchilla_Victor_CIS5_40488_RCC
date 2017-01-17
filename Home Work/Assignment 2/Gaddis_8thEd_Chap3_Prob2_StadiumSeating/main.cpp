/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 1:15 PM
  Purpose: This program determines the revenue created from ticket sales at a 
           stadium
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
    int classA, classB, classC; //Tickets and the income
    float income; //Income will be in dollar amount with decimal point
    //Input values
    cout<<"How many class A, B, C tickets were sold?\n"
          "Ex. 20, 86, 56\n"; //Have user input ticket sales
    cin>>classA>>classB>>classC;
            
    //Process by mapping inputs to outputs
    income = classA*15 + classB*12 + classC*9;
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"The total income generated from the ticket sales is\n"
          "$"<<income;
    //Exit stage right!
    return 0;
}
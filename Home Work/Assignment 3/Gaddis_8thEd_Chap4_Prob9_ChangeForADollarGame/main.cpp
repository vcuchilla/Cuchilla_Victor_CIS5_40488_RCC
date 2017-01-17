/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 1:15 PM
  Purpose: This program asks the user for the amount of individual coins in
           order to make a dollar. 
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
    int penn, nick, dime, quart, totval; //Coins and their total value
    //Input values
    cout<<"This is a computer game: please make a dollar amount with any number"
        <<"\nof pennies, nickels, dimes, and quarters...\n";
    cout<<"How many pennies?\n";
    cin>>penn;
    cout<<"How many nickels?\n";
    cin>>nick;
    cout<<"How many dimes?\n";
    cin>>dime;
    cout<<"How many quarters?\n";
    cin>>quart;
    //Process by mapping inputs to outputs
    totval = (penn + nick*5 + dime*10 + quart*25);
    //Output values
            if (totval == 100)
                cout<<"Good job player you made exactly a dollar!";
            else if (totval > 100)
                cout<<"Sorry player you have made more than a dollar!";
            else 
                cout<<"Sorry player you have made less than a dollar!";
                
    //Exit stage right!
    return 0;
}
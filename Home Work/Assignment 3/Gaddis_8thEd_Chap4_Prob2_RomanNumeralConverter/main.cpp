/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 5:15 PM
  Purpose: This program converts regular numbers from 1-10 into a Roman numeral
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
    int choice ;
    //Input values
    cout<<"Enter a number from 1-10. not lower than 1, or higher than 10...\n";
    cin>>choice;
    switch (choice)
    {      
        case 1 : cout<<"The Roman Numeral is I\n";
              break;
        case 2 : cout<<"The Roman Numeral is II\n";
              break;
        case 3 : cout<<"The Roman Numeral is III\n";
              break;
        case 4 : cout<<"The Roman Numeral is IV\n";
              break;
        case 5 : cout<<"The Roman Numeral is V\n";
              break;
        case 6 : cout<<"The Roman Numeral is VI\n";
              break;
        case 7 : cout<<"The Roman Numeral is VII\n";
              break;
        case 8 : cout<<"The Roman Numeral is VIII\n";
              break;
        case 9 : cout<<"The Roman Numeral is IX\n"; 
              break;
        case 10 : cout<<"The Roman Numeral is X\n"; 
        default: cout<<"You did not enter a number between 1 and 10";
    } 
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
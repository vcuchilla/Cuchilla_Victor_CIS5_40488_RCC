/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 6:45 PM
  Purpose: This program will mix two primary colors that the user inputs and 
           display the secondary color created from those two. 
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
    string  color1, color2; //Color options 
    //Input values
    cout<<"Pick two primary colors and I will mix them.\n"
        <<"Primary colors are : red, blue, and yellow\n"
        <<"Pick your first color...\n";
    cin>>color1;
    cout<<"Pick your second color...\n";
    cin>>color2;
    //Process by mapping inputs to outputs
    if (color1 == "red" && color2 == "blue")
        cout<<"When you mix red and blue you get purple.";
    else if (color1 == "blue" && color2 == "red")
        cout<<"When you mix red and blue you get purple.";
    else if (color1 == "red" && color2 == "yellow")
        cout<<"When you mix red and yellow you get orange.";
    else if (color1 == "yellow" && color2 == "red")
        cout<<"When you mix red and yellow you get orange.";
    else if (color1 == "blue" && color2 == "yellow")
        cout<<"When you mix blue and yellow you get green.";
    else if (color1 == "yellow" && color2 == "blue")
        cout<<"When you mix blue and yellow you get green.";
    else 
        cout<<"ERROR: You are only allowed to enter red, blue or yellow!";
    //Output values

    //Exit stage right!
    return 0;
}
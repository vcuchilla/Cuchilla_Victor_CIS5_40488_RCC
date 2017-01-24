/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 19, 2017, 1:36 PM
  Purpose: This program uses a loop to display the characters for the ASCII  
           codes 0 through 127. Displays 16 characters on each line.  
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
    int ASCII=0, Lastchr=127; //Start code characters and and end code
    //Input values
    
    //Process by mapping inputs to outputs
    while (ASCII<=Lastchr)
        {
            if (ASCII%16==0)
                cout<<"\n";
            cout<<static_cast<char>(ASCII);
            ASCII++;
        }
    //Output values

    //Exit stage right!
    return 0;
}
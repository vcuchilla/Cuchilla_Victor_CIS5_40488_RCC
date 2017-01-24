/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 20, 2017, 7:07 PM
  Purpose: This program determines how much the ocean levels will rise in 25
           years.  
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
    float oceanlev = 1.5; //Ocean levels variable
    int year = 0, endyear = 25;//Year variable
    
    //Prompt user
    cout<<"I will display a table showing how much the ocean levels will rise:"
        <<"\n\n";
    cout<<"Millimeters Risen | Year\n";
    //Process by mapping inputs to outputs
    while(year<=endyear){
        cout<<setprecision(1)<<fixed;
        cout<<"         "<<(oceanlev<10?' ':'\0')<<oceanlev<<"         "<<year<<"\n";
        oceanlev+=1.5;
        year++;
    }
    //Output values

    //Exit stage right!
    return 0;
}
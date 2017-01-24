/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 20, 2017, 7:45 PM
  Purpose: This program calculates and displays the projected membership rates
           of a country club.  
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
    float mshpFee = 2500.0; //Membership fee
    int year = 0, finYear = 6; //Year of fees
    
    //Prompt User
    cout<<"I will display the country club's projected membership fees for\n"
        <<"the next six years:\n\n"
        <<"Membership Fees   |   Year (year 0 is current year)\n";
    
    //Process by mapping inputs to outputs
    for( year=0, finYear=6; year<=finYear; year++)
        {
            cout<<setprecision(2)<<fixed;
            cout<<"   $"<<mshpFee<<"            "<<year<<"\n";
            mshpFee = mshpFee + (.04*mshpFee);
        }
        
    //Output values

    //Exit stage right!
    return 0;
}
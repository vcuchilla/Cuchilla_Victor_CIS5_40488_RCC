/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 20, 2017, 7:30 PM
  Purpose: This program lists the calories burned running on a treadmill for
           every 5 minutes. 
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
    float calbrnd = 3.6; //Calories burned
    int min = 0, lastMin = 30; //Time running on treadmill
    //Prompt User
    cout<<"I will display the amount of calories burned while running on\n"
        <<"a treadmill for a certain duration...\n\n"
        <<"Calories Burned  |  Minutes Running\n";
    
    //Process by mapping inputs to outputs using loop
    while(min<=lastMin){
        if (min%5==0)
        {
            cout<<setprecision(1)<<fixed;
            cout<<"    "<<(calbrnd<200?' ':'\0')<<calbrnd<<"        "
            <<"      "<<min<<"\n";
        }
        calbrnd+=3.6;
        min++;
    }
    //Output values

    //Exit stage right!
    return 0;
}
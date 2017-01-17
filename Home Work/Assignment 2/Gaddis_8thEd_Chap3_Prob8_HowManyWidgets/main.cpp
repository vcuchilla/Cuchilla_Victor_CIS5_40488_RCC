/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 3:00 PM
  Purpose: This program determines how many widgets are on a pallet based off
 *         the pallet's weight
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
    float wgtWght, ttlWght, pltWght, nmbrWgt; //Weights and number of widgets
    //Input values
    cout<<"How much does the pallet weight by itself?\n";
    cin>>pltWght;
    cout<<"How much do the pallets and widgets weight together?\n";
    cin>>ttlWght;
           
    //Process by mapping inputs to outputs
    wgtWght = 12.5;
    nmbrWgt = (ttlWght-pltWght)/wgtWght;
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"The number of widgets on the pallet are "<<nmbrWgt;
    //Exit stage right!
    return 0;
}
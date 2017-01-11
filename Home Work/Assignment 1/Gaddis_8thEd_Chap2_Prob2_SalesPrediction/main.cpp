/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 4:25 PM
  Purpose:  This Program figures out how much in $'s a sales division generated 
  for its company in a year.
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
    float prEcSls = .58, //Percent of sales East Coast Division Generates
           ttlSls = 8.6e6, //Total sales of company in single year
          ecstSls ;//Total sales in $'s East Coast Division Generates
    //Input values
    
    //Process by mapping inputs to outputs
          ecstSls = prEcSls * ttlSls; //Percent times total sales = EastCst Sales
    //Output values
    cout<<"The East Coast Division generates "<<prEcSls*100<<"% of the total sales"<<endl;
    cout<<"The total sales of the entire company in a year is $"<<static_cast<int>(ttlSls)<<endl;
    cout<<"The total sales the East Coast Division Generates is"<<endl;
    cout<<" $"<<static_cast<int>(ecstSls)<<endl;
    //Exit stage right!
    return 0;
}
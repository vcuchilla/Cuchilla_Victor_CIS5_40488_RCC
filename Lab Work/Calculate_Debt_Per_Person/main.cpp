/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 10, 2017, 1:15 PM
  Purpose:  
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
    float USPop16 = 3.2e8,   //US population in 2016
                             //Source:http://www.usnews.com
          USPop08 = 3.04e8,  //US population in 2008
                             //Source:http://www.multpl.com
          USDet16 = 1.95e13, //US debt in 2016
                             //Source:www.usgovernmentdebt.us/
          USDet08 = 1.06e13, //US debt in 2008
                             //Source:https://www.washingtonpost.com
          DbtPr8, DbtPr16 ;  //Debt per person in 2008 and 2016
    //Process by mapping inputs to outputs
    DbtPr8  = USDet08/USPop08; //Debt in $'s Per person in 2008 
    DbtPr16 = USDet16/USPop16; //Debt in $'s per person in 2016
    //Output values
    cout<<"The U.S population in 2008 was "<<USPop08<<endl;
    
    cout<<"The U.S population in 2016 was "<<USPop16<<endl;
    
    cout<<"The U.S Debt in 2008 was $"<<USDet08<<endl;
    
    cout<<"The U.S Debt in 2016 was $"<<USDet16<<endl;
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The Debt in 2008 was $"<<DbtPr8<<" per person"<<endl;
    
    cout<<"The Debt in 2016 was $"<<DbtPr16<<" per person"<<endl;
    //Exit stage right!
    return 0;
}
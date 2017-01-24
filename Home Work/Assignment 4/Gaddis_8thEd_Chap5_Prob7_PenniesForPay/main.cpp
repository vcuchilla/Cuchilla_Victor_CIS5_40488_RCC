/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 19, 2017, 11:00 AM
  Purpose: Pennies for Pay  
 */

//System Libraries
#include <iostream> //Input output library
#include <cmath> //Math Library
#include <iomanip> //Formatting
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
    int salary=1, totpay = 0, maxdays=30; //Salary and pay in pennies
    //Input values
    
    //Process by mapping inputs to outputs
    for(int day = 1;day<=maxdays;day++,salary*=2)
    {
        int cents=salary%100;
        int dollars=(salary-cents)/100;
        
        totpay+=salary;
        cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<"\n";
        
        cents=totpay%100;
        dollars=(totpay-cents)/100;
        cout<<"The total pay for the day is $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<"\n\n";
    }
    //Predicting the result
    double salLday=(pow(2,maxdays-1))/100; //Results in dollars
    double totLday=(pow(2,maxdays)-1)/100; //Results in dollars
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Final salary predicted = $"<<salLday<<"\n";
    cout<<"Final total pay predicted = $"<<totLday<<"\n";
    //Exit stage right!
    return 0;
}
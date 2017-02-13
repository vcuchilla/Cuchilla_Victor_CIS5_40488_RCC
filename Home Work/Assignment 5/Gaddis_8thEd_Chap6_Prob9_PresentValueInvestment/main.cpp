/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 2nd, 2017, 11:30 PM
  Purpose: This program calculates the present value investment in order to
           reach a certain amount in the user's savings over a # of years.
 */

//System Libraries
#include <iostream> //Input output stream
#include <iomanip> //to manipulate output
#include <cmath>   //for pow
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float presVal(float, float, int); //function that calculates the present value
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float futVal, intRate, presV; //Present value, Future value, interest rate
    int numYear;           //number of years
    
    //Input values
    cout<<"What is the future amount you want in your savings account?\n"
        <<"$";
    cin >>futVal; //Get the future value the user wants to reach
    cout<<"What is the annual interest rate? ";
    cin >>intRate; //Get the annual interest rate
    cout<<"How many years do you plan to let the money sit in the account? ";
    cin >>numYear; //Get number of years from the user
    
    //Process by mapping inputs to outputs
    presV = presVal(futVal, intRate, numYear); //call the presVal function
    
    //Output values
    cout<<setprecision(2)<<fixed<<showpoint; //manipulate dollar amount
    cout<<"The amount that you would have to invest this year would be $";
    cout<<presV; //Display the present value amount
            
    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the presVal function. This function calculates the present   **
// value needed to invest in order to reach to intended savings amount.       **
//******************************************************************************
float presVal(float futVal, float intRate, int numYear)
{
    return (futVal/(pow((1+intRate),numYear)));
}
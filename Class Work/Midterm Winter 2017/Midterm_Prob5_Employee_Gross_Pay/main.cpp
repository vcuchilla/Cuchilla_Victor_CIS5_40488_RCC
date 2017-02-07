/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 29, 2017, 6:30 AM
  Purpose: This program calculates the gross pay of an employee accounting for
           overtime pay rates
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float MAX_PAY = 150, MAX_HRS = 336; //Max pay and max hours 
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float grssPay, hrsWrkd, payRate; //Hours worked, Gross pay, and pay rate
    
    //Prompt user to input pay rate and hours worked values
    cout<<"This software calculates an employees gross pay when given the\n"
        <<"the amount of hours that the employee worked and their pay rate.\n";
    cout<<"What is the employees pay rate (dollars per hour)? $";
    cin >>payRate; //User inputs the pay rate for the employee
    while (payRate>MAX_PAY || payRate<11) //Make sure pay does not exceed max pay
    {
        cout<<"Pay rate must be at least $11.00 per hour can not exceed\n"
            <<"$150.00 per hour.\n";
        cout<<"What is the employees pay rate (dollars per hour)? $";
        cin >>payRate; //User inputs the pay rate for the employee
    }
    cout<<"How many hours did the employee work? ";
    cin >>hrsWrkd; //User inputs the hours worked for the employee
    while (hrsWrkd>MAX_HRS || hrsWrkd <0) //Make sure hours does not exceed max hours
    {
        cout<<"Hours worked can not be negative or exceed 336 hours.\n";
        cout<<"How many hours did the employee work? ";
        cin >>hrsWrkd; //User inputs the hours worked for the employee        
    }
    
    //Take the pay rate and hours worked and calculate employee's gross pay
    if (hrsWrkd<=20) 
         grssPay = hrsWrkd * payRate; //Calculate gross pay no OT
    else if (hrsWrkd>20 && hrsWrkd<=40)
        {
         grssPay = (payRate*20)+(2*payRate*(hrsWrkd-20)); //Gross pay with DOT
        }
    else                                   //Gross pay with TOP
         grssPay = (payRate*20)+(2*payRate*20)+(3*payRate*(hrsWrkd-40)); 
    //Output values (Gross Pay)
    cout<<setprecision(2)<<fixed;
    cout<<"The employee's pay rate was $"<<payRate<<" per hour.\n";
    cout<<"The employee worked a total of "<<hrsWrkd<<" hours.\n\n";
    cout<<"The employee's gross pay is $"<<grssPay;
    

    //Exit stage right!
    return 0;
}
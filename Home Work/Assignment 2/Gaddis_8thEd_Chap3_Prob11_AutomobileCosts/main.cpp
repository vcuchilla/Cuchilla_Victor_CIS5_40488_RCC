/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 4:15 PM
  Purpose:  This program determines monthly and yearly automobile expenses
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
    float insrnc, loan, gas, oil, tires, maint; //Different expenses
    float ttlMnt, ttlYr; //Total yearly and monthly payments
    //Input values
    cout<<"I am going to figure out your monthly and yearly automobile expenses\n"
          "How much is your loan payment per month?\n";
    cin>>loan;
    cout<<"How much is your insurance payment each month?\n";
    cin>>insrnc;
    cout<<"How much do you spend on gas each month?\n";
    cin>>gas;
    cout<<"How much do you spend on oil each month?\n";
    cin>>oil;
    cout<<"How much do you spend on tires each month?\n";
    cin>>tires;
    cout<<"How much do you spend on maintenance each month?\n";
    cin>>maint;
    //Process by mapping inputs to outputs
    ttlMnt = insrnc + loan + gas + oil + tires + maint;
    ttlYr  = ttlMnt*12;
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"Your total monthly automobile costs are $"<<ttlMnt<<"\n";
    cout<<"Your total yearly automobile costs are $"<<ttlYr;
    //Exit stage right!
    return 0;
}
/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 27, 2017, 8:00 PM
  Purpose: This program reads a 4 number digit and displays an output based on
           on the digit, accounting for errors. 
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
    int digit, Thsnds=1000, Hundrds=100, Tens=10, Ones=1; //User inputted 
                                                //digit and powers of ten
    int n1000, n100, n10, n1; //digits in each place
    char  Nonnum; //If user inputs non number character
    //Input values or 4 character digit
    cout<<"Input a four number digit and I will display those numbers from\n"
        <<"least to greatest: ";
    cin >>digit; //User inputs the digit
    
    //Process the powers of 10 out of the digit
    n1000 = (digit-digit%Thsnds)/Thsnds; //Determine how many thousands
    digit = digit-n1000*Thsnds;
    n100  = (digit-digit%Hundrds)/Hundrds; //Determine how many hundreds
    digit = digit-n100*Hundrds;
    n10   = (digit-digit%Tens)/Tens; //Determine how many tens
    n1    = digit-n10*Tens; //Determine the number of ones

    //Output values Depending on the digit
    if(n1000==1){cout<<n1000<<" "<<"*\n";}
    if(n100==1){cout<<n100<<" "<<"*\n";}
    if(n10==1){cout<<n10<<" "<<"*\n";}  
    if(n1==1){cout<<n1<<" "<<"*\n";}
    if(n1000==2){cout<<n1000<<" "<<"**\n";}
    if(n100==2){cout<<n100<<" "<<"**\n";}
    if(n10==2){cout<<n10<<" "<<"**\n";}  
    if(n1==2){cout<<n1<<" "<<"**\n";}
    if(n1000==3){cout<<n1000<<" "<<"***\n";}
    if(n100==3){cout<<n100<<" "<<"***\n";}
    if(n10==3){cout<<n10<<" "<<"***\n";}  
    if(n1==3){cout<<n1<<" "<<"***\n";}
    if(n1000==4){cout<<n1000<<" "<<"****\n";}
    if(n100==4){cout<<n100<<" "<<"****\n";}
    if(n10==4){cout<<n10<<" "<<"****\n";}  
    if(n1==4){cout<<n1<<" "<<"****\n";}
    if(n1000==5){cout<<n1000<<" "<<"*****\n";}
    if(n100==5){cout<<n100<<" "<<"*****\n";}
    if(n10==5){cout<<n10<<" "<<"*****\n";}  
    if(n1==5){cout<<n1<<" "<<"*****\n";}
    if(n1000==6){cout<<n1000<<" "<<"******\n";}
    if(n100==6){cout<<n100<<" "<<"******\n";}
    if(n10==6){cout<<n10<<" "<<"******\n";}  
    if(n1==6){cout<<n1<<" "<<"******\n";}
    if(n1000==7){cout<<n1000<<" "<<"*******\n";}
    if(n100==7){cout<<n100<<" "<<"*******\n";}
    if(n10==7){cout<<n10<<" "<<"*******\n";}  
    if(n1==7){cout<<n1<<" "<<"*******\n";}
    if(n1000==8){cout<<n1000<<" "<<"********\n";}
    if(n100==8){cout<<n100<<" "<<"********\n";}
    if(n10==8){cout<<n10<<" "<<"********\n";}  
    if(n1==8){cout<<n1<<" "<<"********\n";}
    if(n1000==9){cout<<n1000<<" "<<"*********\n";}
    if(n100==9){cout<<n100<<" "<<"*********\n";}
    if(n10==9){cout<<n10<<" "<<"*********\n";}  
    if(n1==9){cout<<n1<<" "<<"*********\n";}
    if(n1000==Nonnum){cout<<(n1000)<<" "<<"?\n";}
    if(n100==Nonnum){cout<<(n100)<<" "<<"?\n";}
    if(n10==Nonnum){cout<<(n10)<<" "<<"?\n";}
    if(n1==Nonnum){cout<<(n1)<<" "<<"?\n";}
    //Exit stage right!
    return 0;
}
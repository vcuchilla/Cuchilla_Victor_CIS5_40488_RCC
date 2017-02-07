/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 3, 2017, 12:15 PM
  Purpose: This program creates an X with integers depending on the integer
           the user inputs.
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
    int Xnum, maxNum, Num2Wid, stNum; //Number user inputs
    
    //Input values
    cout<<"I will display an X depending on the number you input.\n"
        <<"Please enter a digit greater than 1 and less than 50: "; 
    cin>>Xnum; //Get number from user
    
    //Display the X by using for loop
    stNum = 1;
    maxNum = Xnum;
    if(Xnum%2==1)
    {
        for(Xnum, maxNum=Xnum, stNum; stNum<(maxNum/2)+1 ; stNum++, Xnum-- )    
        {
            cout<<setw(stNum)<<Xnum;
            cout<<setw(Xnum-stNum)<<stNum<<"\n";    
        }
    }

    
    //Output values

    //Exit stage right!
    return 0;
}
/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 2nd, 2017, 12:30 PM
  Purpose: This program asks the user to enter an item’s wholesale cost and 
           its markup percentage. It will then display the item’s retail price.
 */

//System Libraries
#include <iostream> //Input output stream
#include <iomanip>  //To manipulate output and calculations
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float calculateRetail(float WhlSl, float markUp);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables (Wholesale cost and the markup percentage)
    float WhlSl, markUp, Retail; //Whole sale cost, markup percentage, retail
    
    //Input values the mark up, and the Whole-sale cost
    cout<<"I am a business program that calculates the retail cost of an\n"
        <<"item. What was the whole sale cost of the item? $";
    cin >>WhlSl; //Get the whole sale cost
    if(WhlSl<0) 
    {
        cout<<"Sorry the wholesale cost can't be less than $0.00\n";
        cout<<"What was the Whole sale cost for the item? ";
        cin >>WhlSl; //Get the whole sale cost if it is negative
    }
    cout<<"What is the mark up percentage? ";
    cin>>markUp; //Get the mark up percentage
    if(markUp<0) 
    {
        cout<<"Sorry the mark up percentage can't be less than 0.\n";
        cout<<"What is the mark up percentage for the item? ";
        cin >>markUp; //Get the whole sale cost if it is negative
    }
    //Call calculateRetail to calculate the retail cost for the item
    Retail = calculateRetail(WhlSl, markUp); //Call function
    //Output values
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"The retail cost of the item is $"<<Retail; //Display retail cost
    //Exit stage right!
    return 0;
}

//*****************************************************************************
// Definition of function calculateRetail                                    **
// This function calculates the retail value given wholesale cost and the    **
// markup percentage.                                                        **
//*****************************************************************************

float calculateRetail(float WhlSl, float markUp)
{
    return WhlSl + (WhlSl*(markUp/100)); //Define the body of the function
}
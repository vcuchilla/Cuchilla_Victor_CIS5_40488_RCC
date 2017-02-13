/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 2nd, 2017, 11:30 PM
  Purpose: This program simulates a coin toss by displaying the result and 
           performing the toss a certain number of times.
 */

//System Libraries
#include <iostream> //Input output stream
#include <ctime>  //Time to set the seed
#include <cstdlib> //for rand and srand
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
int coinToss(); //Coin toss function
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int numToss, dec; //Number of tosses
    
    //Input values
    cout<<"I will simulate a coin toss. How many times should the coin be\n"
        <<"tossed? ";
    cin >>numToss; //Get the number of tosses
    
    //Process by mapping inputs to outputs by calling function
    for (int stToss=1; stToss<=numToss; stToss++)
    {
        dec = coinToss(); //Call function
        if (dec==1) cout<<"heads\n";
        else cout<<"tails\n";
    }
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the coin toss function.  This function simulates a coin toss **
// and returns a 1 or 2 value at random                                       **
//******************************************************************************
int coinToss()
{
    //Generate random number 1 or 2
    return ((rand() % 2) + 1);//Return the decision of the toss
}
/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 20, 2017, 7:07 PM
  Purpose: This program calculates the occupancies of a hotel. 
 */

//System Libraries
#include <iostream>
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
    float numFlrs, stFlr = 1, numRms, totRms, totFlrs, numOc, totNumO;
                                                //Rooms and floors
    float prcntOc ; //Percent of rooms occupied
    
    //Input values from user
    cout<<"How many floors does the hotel have? ";
    cin >>numFlrs; //get number of floors from user
    if (numFlrs<1)
        {cout<<"The hotel must have at least 1 floor.\n";}
    
    //Process by mapping inputs to outputs using loop
    while (stFlr<=numFlrs) //While floor is less than or equal to total floors
        {
        if (stFlr==13)
            stFlr++;
        cout<<"How many rooms are there on the #"<<stFlr<<"? ";
        cin >>numRms;//rooms on each floor
        if (numRms<10)
            {cout<<"There must be at least 10 or more rooms on each floor.\n";}
        cout<<"How many of those rooms are occupied? ";
        cin >>numOc; //rooms occupied on each floor
        totRms +=numRms; //total rooms counter
        totNumO +=numOc; //total rooms occupied counter
        stFlr++; //floor counter
        }
    prcntOc = (totNumO/totRms)*100;
    //Output values
    cout<<"The total number of floors is "<<numFlrs<<".\n"; //Display totals
    cout<<"There is a total of "<<totRms<<" rooms in the hotel.\n";
    cout<<"Of those rooms "<<totNumO<<" of them are occupied.\n";
    cout<<"And "<<(totRms-totNumO)<<" of them are unoccupied.\n";
    cout<<"That means "<<prcntOc<<"%"<<" of the rooms are occupied";
    
    //Exit stage right!
    return 0;
}
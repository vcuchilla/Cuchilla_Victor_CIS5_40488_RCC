/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 7th, 2017, 8:00 PM
  Purpose: This program figures out the safest area to drive in given the number
           of accidents in each region.
 */

//System Libraries
#include <iostream> //Input output stream
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
int getNumAcc(string); //function that gets # of crashes
void findlow (int, int, int, int, int, string); 
//function that finds safest region to drive

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string reg1, reg2, reg3, reg4, reg5, safReg; //Five different regions
    int tot1, tot2, tot3, tot4, tot5; //Five crash totals
    
    //Input values
    cout<<"What is the name of the first region? "; //prompt user
    cin >>reg1; //get name of first region
    tot1 = getNumAcc(reg1); //call function to get crash totals in region
    safReg = reg1; //get region with lowest crashes
    cout<<"What is the name of the second region? "; //prompt user
    cin >>reg2; //get name of first region
    tot2 = getNumAcc(reg2); //call function to get crash totals in region
    if (tot2<tot1)
        safReg = reg2; //get region with lowest crashes
    cout<<"What is the name of the third region? "; //prompt user
    cin >>reg3; //get name of first region
    tot3 = getNumAcc(reg3); //call function to get crash totals in region
    if (tot3<tot2 && tot3<tot1)
        safReg = reg3; //get region with lowest crashes
    cout<<"What is the name of the fourth region? "; //prompt user
    cin >>reg4; //get name of first region
    tot4 = getNumAcc(reg4); //call function to get crash totals in region
    if (tot4<tot3 && tot4<tot2 && tot4<tot1)
        safReg = reg4; //get region with lowest crashes
    cout<<"What is the name of the  fifth region? "; //prompt user
    cin >>reg5; //get name of first region
    tot5 = getNumAcc(reg5); //call function to get crash totals in region
    if (tot5<tot4 && tot5<tot3 && tot5<tot2 && tot5<tot1)
        safReg = reg5; //get region with lowest crashes
    
    //Process by mapping inputs to outputs and output safest region
    findlow(tot1, tot2, tot3, tot4, tot5, safReg); //call get low function


    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the getNumAcc function. This function gets the number of     **
// crashes for each region inputted by the user.                              **
//******************************************************************************
int getNumAcc(string reg)
{
    int numAcc; //Number of accidents variable to be outputted
    cout<<"How many accidents were there in the "<<reg<<" region last year? ";
    cin >>numAcc; //Have user input number of accidents
    while(numAcc<0) //make sure to validate number of accidents
    {
        cout<<"Error: the number of crashes cannot be less than 0";
        cout<<"How many accidents were there in the "<<reg<<" region last year? ";
        cin >>numAcc; //Have user input number of accidents
        
    }
    return numAcc; //return the number of accidents        
}
//******************************************************************************
// Definition of the findlow function. This function gets the lowest number of**
// crashes for all the crashes and displays the region and number of crashes  **
//******************************************************************************
void findlow(int tot1, int tot2, int tot3, int tot4, int tot5, string safReg)
{
    if(tot5<tot4 && tot5<tot3 && tot5<tot2 && tot5<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot5<<"\n"
        <<"crashes.";
    else if(tot4<tot5 && tot4<tot3 && tot4<tot2 && tot4<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot4<<"\n"
        <<"crashes.";
    else if(tot3<tot5 && tot3<tot4 && tot3<tot2 && tot3<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot3<<"\n"
        <<"crashes.";
    else if(tot2<tot5 && tot2<tot3 && tot2<tot4 && tot2<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot2<<"\n"
        <<"crashes.";
    else if(tot1<tot5 && tot1<tot3 && tot1<tot2 && tot1<tot4)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot1<<"\n"
        <<"crashes.";
}

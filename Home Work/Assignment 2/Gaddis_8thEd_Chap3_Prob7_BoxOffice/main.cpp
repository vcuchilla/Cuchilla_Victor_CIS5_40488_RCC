/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 12, 2017, 2:45 PM
  Purpose:  This program determines the profits from a movie at a movie theater
            in a single night.
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
    string NmOfMv ; //Name of movie
    float numAdT, numChT, GrsPrft, NetPrft, AmntPd; //Tickets, Profits, and Paid
    //Input values
    cout<<"What was the name of the movie?\n";
    getline(cin, NmOfMv);
    cout<<"How many Adult tickets were sold?\n";
    cin>>numAdT;
    cout<<"How many Child tickets were sold?\n";
    cin>>numChT;
            
    //Process by mapping inputs to outputs
    GrsPrft = numAdT*10+numChT*6;
    NetPrft = GrsPrft*.2;
    AmntPd  = GrsPrft*.8;        
            
    //Output values
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Movie Name:                    "<<"\""<<NmOfMv<<"\"\n";
    cout<<"Adult tickets sold:            "<<numAdT<<"\n";
    cout<<"Child tickets sold:            "<<numChT<<"\n";
    cout<<"Gross Box Office Profit:       "<<"$"<<GrsPrft<<"\n";
    cout<<"Net Box Office Profit:         "<<"$"<<NetPrft<<"\n";
    cout<<"Amount Paid to Distributor:    "<<"$"<<AmntPd<<"\n";
           
    //Exit stage right!
    return 0;
}
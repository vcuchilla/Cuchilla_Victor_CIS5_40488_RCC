/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 20, 2017, 9:07 PM
  Purpose: This program calculates the average monthly rainfall over a period
           of time.
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
    float numYrs, startYr = 1.0, startMt = 1.0, inRain, totRain;
    float avgRain;
    //Input values 
    cout<<"I calculate the average rainfall over a number of years...\n";
    cout<<"For how many years did the rain fall? "; //Get years from user
    cin >>numYrs;
    if (numYrs<1){cout<<"\nRain must have fell for at least 1 year\n";}
    
    //Process the first loop
    while (startYr<=numYrs)
        {
        cout<<"For year #"<<startYr<<"\n";
            for (startMt=1; startMt<=12 ; startMt++)
                {
                cout<<"How much rain fell (in) in month #"<<startMt<<"? ";
                cin>>inRain;
                if (inRain<0){cout<<"\nAmount of rain must be a positive number"
                        <<"\n";}
                totRain +=inRain;
                }  
        startYr++;
        }
    avgRain = totRain/(12*numYrs);
    //Output values
    cout<<setprecision(2)<<fixed;
    cout<<"The total amount of rain that fell in "<<numYrs*12<<" months\n"
        <<"was "<<totRain<<" inches.\n";
    cout<<"The average amount of rain (in) that fell per month was "<<avgRain;
    //Exit stage right!
    return 0;
}
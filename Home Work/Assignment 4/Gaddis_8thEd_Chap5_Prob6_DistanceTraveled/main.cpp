/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 20, 2017, 8:00 PM
  Purpose: This program calculates and displays the distance a vehicle travels
           for every hour that it travels.  
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
    float speed, start=1, HrsTrld, distance ; //Speed, hours traveled and distance
   
    //Prompt User for speed and hours traveled
    cout<<"I calculate the distance a vehicle has traveled.\n\n"
        <<"How fast (mph) was the vehicle traveling? ";
    cin>>speed;
    cout<<"For how long (hours) did the vehicle travel at that speed? ";
    cin>>HrsTrld;
    cout<<"\n"<<"    Hour      Distance Traveled\n"
        <<"-------------------------------------\n";
    //Process by mapping inputs to outputs using loop
    for (start=1;start<=HrsTrld;start++) 
        {
        distance = start*speed;
        cout<<" "<<setw(8)<<start<<"           "<<setprecision(1)<<fixed
            <<setw(8)<<distance<<"\n";
        }
        
    //Output values

    //Exit stage right!
    return 0;
}
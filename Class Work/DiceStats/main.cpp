/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 18, 2017, 10:35 AM
  Purpose: Statistics for rolling a pair of dice.
 */

//System Libraries
#include <iostream> //Input output Library
#include <cstdlib>  //random Numbers
#include <ctime>    //Time to set the seed
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nThrows = 36000; //Number of throws for the pair of dice
    unsigned int n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0,
            n10 = 0, n11 = 0, n12 = 0;
    
    //Loop and take dice statistics
    for(int toss=1;toss<=nThrows;toss++)
    {
        //Call random number generator for the dice
        char die1 = rand()%6+1; //value from 1 through 6
        char die2 = rand()%6+1; //value from 1 through 6
        char sum  = die1+die2;
        switch (sum)
        {
            case 2:n2++ ;break;
            case 3:n3++ ;break;
            case 4:n4++ ;break;
            case 5:n5++ ;break;
            case 6:n6++ ;break;
            case 7:n7++ ;break;
            case 8:n8++ ;break;
            case 9:n9++ ;break;
            case 10:n10++ ;break;
            case 11:n11++ ;break;
            case 12:n12++ ;break;
            default: cout<<"You are in error!\n";
        }
        
    }
  
    //Output values
    cout<<"the number 2 was thrown "<<n2<<" times.\n";
    cout<<"the number 3 was thrown "<<n3<<" times.\n";
    cout<<"the number 4 was thrown "<<n4<<" times.\n";
    cout<<"the number 5 was thrown "<<n5<<" times.\n";
    cout<<"the number 6 was thrown "<<n6<<" times.\n";
    cout<<"the number 7 was thrown "<<n7<<" times.\n";
    cout<<"the number 8 was thrown "<<n8<<" times.\n";
    cout<<"the number 9 was thrown "<<n9<<" times.\n";
    cout<<"the number 10 was thrown "<<n10<<" times.\n";
    cout<<"the number 11 was thrown "<<n11<<" times.\n";
    cout<<"the number 12 was thrown "<<n12<<" times.\n";

    //Exit stage right!
    return 0;
}
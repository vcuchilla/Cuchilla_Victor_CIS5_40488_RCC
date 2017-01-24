/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 18, 2017, 10:35 AM
  Purpose: Statistics for craps.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
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
    float ngames = 1000000000; //Number of throws for the pair of dice
    float wins = 0, losses = 0, maxThrw = 0;
    int avgThrw = 0;
    //Loop and take dice statistics
    for(int game=1;game<=ngames;game++)
    {
        //Call random number generator for the dice
        char die1 = rand()%6+1; //value from 1 through 6
        char die2 = rand()%6+1; //value from 1 through 6
        char sum  = die1+die2;
        unsigned int cntThrw = 1;
        avgThrw++;
       //Now determine wins or losses
        if (sum==2 || sum==3 || sum==12) losses++;
        else if (sum==7 || sum==11)wins++;
        else 
        {
            bool kpThrw=true;
            do
            {
               die1 = rand()%6+1; //value from 1 through 6
               die2 = rand()%6+1; //value from 1 through 6
               avgThrw++; cntThrw++;
               char sumAgn=die1+die2;
               if(sumAgn==7)
               {
                   losses++;
                   kpThrw=false;
               }
               else if (sumAgn==sum)
               {
                   wins++; 
                   kpThrw=false;      
               }
            } while (kpThrw);
        }
        if(maxThrw<cntThrw) maxThrw=cntThrw;
    }
    
    //Output values
    cout<<"the total number of games played was "<<ngames<<"\n";
    cout<<"the total number of games won was "<<wins<<"\n";
    cout<<"the total number of games lost was "<<losses<<"\n";
    cout<<"the total number of games played was "<<wins+losses<<"\n";
    cout<<"The percentage of games won was "<<(wins/ngames)*100<<"%\n";
    cout<<"The percentage of games won was "<<(losses/ngames)*100<<"%\n";
    cout<<"The average number of times the dice was thrown was "<<avgThrw/ngames
        <<"\n";
    cout<<"The max number of times the dice was thrown in a game was "<<maxThrw
        <<"\n";

    //Exit stage right!
    return 0;
}
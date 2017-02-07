/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 24, 2017, 12:15 PM
  Purpose: Biased Coin
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const unsigned int MAXRND=pow(2,31)-1;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the Random Number Generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float pTails, pHeads; 
    unsigned int nTails=0, nHeads=0, nCoins;
    //Input values
    cout<<"Coin flipping Problem\n";
    cout<<"Input the probability of Tails\n";
    cin>>pTails;
    cout<<"Input the number of coins flipped\n";
    cin>>nCoins;
           
    //Process by mapping inputs to outputs
    pHeads = 1 - pTails;
    
    for(unsigned int flip=1; flip<=nCoins; flip++){
        float prob= rand()/static_cast<float>(MAXRND);
        if(prob<=pTails)nTails++;
        else nHeads++;
    }
    //Output values
    cout<<setprecision(4)<<fixed<<showpoint;
    cout<<"Percentage input for Prob of Tails = "<<pTails<<"\n";
    cout<<"Percentage input for Prob of Heads = "<<pHeads<<"\n";
    cout<<"Percentage output for Prob of Tails = "
        <<static_cast<float>(nTails)/nCoins<<"\n";
    cout<<"Percentage output for Prob of Tails = "
        <<static_cast<float>(nHeads)/nCoins<<"\n";
    //Exit stage right!
    return 0;
}
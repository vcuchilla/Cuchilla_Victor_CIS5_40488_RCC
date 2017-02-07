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
    unsigned int nTT = 0, nTH = 0, nHT = 0, nHH= 0, nCoins;
    //Input values
    cout<<"Coin flipping Problem\n";
    cout<<"Input the probability of Tails\n";
    cin>>pTails;
    cout<<"Input the number of coins flipped\n";
    cin>>nCoins;
           
    //Process by mapping inputs to outputs
    pHeads = 1 - pTails;
    
    for(unsigned int flip=1; flip<=nCoins; flip++){
        float prob1=rand()/static_cast<float>(MAXRND);
        float prob2=rand()/static_cast<float>(MAXRND);
        if(prob1<=pTails&&prob2<=pTails)nTT++;
        else if(prob1<=pTails&&prob2>pTails)nTH++;
        else if(prob1>pTails&&prob2>pTails)nHH++;
        else nHT++;       
    }
    //Output values
    cout<<setprecision(4)<<fixed;
    cout<<"Percentage input for Prob of Tails = "<<pTails<<"\n";
    cout<<"Percentage input for Prob of Heads = "<<pHeads<<"\n";
    cout<<"Percentage output for Prob of TT = "
        <<static_cast<float>(nTT)/nCoins<<"\n";
    cout<<"Percentage output for Prob of TH = "
        <<static_cast<float>(nTH)/nCoins<<"\n";
    cout<<"Percentage output for Prob of HH = "
        <<static_cast<float>(nHH)/nCoins<<"\n";
    cout<<"Percentage output for Prob of HT = "
        <<static_cast<float>(nHT)/nCoins<<"\n";

    return 0;
}
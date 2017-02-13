/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 11th, 2017, 11:30 PM
  Purpose: This program picks a random  element of a array n number of times
           and displays the frequency of the elements chosen. 
 */

//System Libraries
#include <iostream> //Input output stream
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void randSeq(short int[], int[], int, int); //Function that gets frequency
                                            //of random number generated
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the time for seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int n=5,ntimes=10000; //Size of set and frequency
    short int rndseq[]={9,52,78,101,119}; //Random sequence of numbers
          int freq[n]={0}; //Frequency of numbers
    
    //Process by mapping inputs to outputs
          randSeq(rndseq, freq, n, ntimes); //Call function to select numbers
    //Output values
          for(int count = 0; count<5 ; count++)
          {
          cout<<"The number "<<rndseq[count]<<" was chosen "<<freq[count]<<"\n"
              <<"times.\n"; //Display the number and its frequency
          }
    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the randSeq function that accepts two arrays of integers     **
// it accumulates the contents of one depending on the random element selected**
// from the other.                                                            **
//******************************************************************************
void randSeq(short int seq[], int freq[], int size, int limit)
{
    for(int counter = 1; counter<=limit; counter++)
    {
        int temp; //temp variable to hold element choice
        temp = rand()%5; 
        freq[temp]++;
    }
}
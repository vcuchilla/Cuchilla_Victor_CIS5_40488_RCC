/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 28, 2017, 11:30 PM
  Purpose: This program writes the series for Collatz Conjecture based off the
           beginning number the user inputs 
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
    int begNum; //Beginning number to start series
    const int SIZE=100; //Size of array and Max number of terms
    int nTerm, MAX_NUM; 
    int nthTerm[SIZE]; //Array of nthTerms for series
    
    //Input values
    cout<<"I will write the series for Collatz conjecture based of the\n"
        <<"the starting number you enter: ";
    cin >>begNum; //Input the beginning number
    nthTerm[1] = begNum; //beginning number is start of series or array
    
    //Process the series from beginning number
    if(begNum%2!=0)
    {
        int count=2; //Starting at second array or series term
        nTerm = (begNum*3)-1; //The value of the nth term
        nthTerm[count] = nTerm; //Set array subscript to nth term
    }
    
    //Output values of array using for loop
    cout<<nthTerm[1]<<nthTerm[2]<<"The numbers in the series are:\n";
    
    
    //Exit stage right!
    return 0;
}
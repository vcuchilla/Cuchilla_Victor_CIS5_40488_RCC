/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 10th, 2017, 11:30 PM
  Purpose: This program reverses an inputted number and subtracts the
           largest three digit number without going negative within the range
 *         of a short integer.
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
short RevNum(unsigned short); //Function that reverses the number
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short usrNum, reverse; //User number and the reverse number
    
    //Input values
    cout<<"Input a number to reverse, I'll reverse the number and subtract the\n"
        <<"largest three number digit without going negative. \n"
        <<"Digit: ";
    cin >>usrNum; //Have user input the number to be reversed
    
    //Process by mapping inputs to outputs, reverse the number
    
    reverse = RevNum(usrNum); //Call function to reverse number
    if (reverse>32767)
            cout<<"Sorry The digit you have entered would be out of range\n"
                <<"if converted.\n";
    else //finish converting the reversed number and output the value
    {
        if (reverse>1000)
            reverse = (reverse - 999); //subtract by 999 if larger than 1000
        else
            reverse = (reverse - (reverse-1)); //Subtract by less than number
        cout<<reverse; 
    }  
    
    
    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the RevNum function. This function takes the user inputted   **
// number reverses it with a loop and then returns a signed short.            **
//******************************************************************************
short RevNum(unsigned short input)
{
    signed short reverse = 0;
    for (int count = 0; input!=0; count++ )
    {
        
        reverse *=10; //Add digit place for reverse number
        reverse = reverse + input%10; //Add the last digit to first
        input = input/10; //get rid of the last digit in the number
    }
  return reverse; //Return the reversed number
}
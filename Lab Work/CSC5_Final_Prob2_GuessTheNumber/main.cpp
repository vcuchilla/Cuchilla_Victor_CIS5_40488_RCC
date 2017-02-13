/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 10th, 2017, 6:00 PM
  Purpose: This program has the user try to guess a number that the program
           randomly generates, with a max number of guesses.
 */

//System Libraries
#include <iostream> //Input output stream
#include <ctime> //For the time function
#include <cstdlib> //For rand and srand
#include <cmath> //for Pow function

using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
int Randnum(int); //Function that generates a random value 1-9
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the seed to generate random numbers
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int X, MaxGues, guess, guesses = 1; //Number to use for power of 10, and max guesses
    unsigned int guesNum; //Number user needs to guess
    char key; //Character to continue
    
    //Input value X by generating Number
    do
    {
    X = rand()%9 + 1; //generate random value 1-9
    guesNum = Randnum(X); //Get the guess number and pass x as variable
    MaxGues = log2(pow(10,X))+1; //Get the number of max guesses
    
    
    //Have the user input a guess number until guesses up or win
    cout<<"I have a number between 1 and 10^"<<X<<" Can you guess my number? \n"
        <<"You will be given a maximum integer of "<<MaxGues<<" guesses.\n";
            
    for (guesses; guesses<=MaxGues && guess!=guesNum ; guesses++)
    { 
            cout<<"What is your guess? ";
            cin>>guess;
            if (guess == guesNum)
            {
                cout<<"Congratulations, You guessed the number!\n";
                cout<<"Would you like to play again(y or n)\n";
                cin >>key;
            }
            else if(guess < guesNum)
                cout<<"Too low.  Try again.\n";
            else if(guess > guesNum)
                cout<<"Too High. Try Again.\n";
    }
    if (guesses>MaxGues)
    {
    cout<<"Sorry you have exceeded your number of guesses. \n";
    cout<<"Would you like to play again(y or n)\n";
    cin >>key;
    }
    } while (key == 'y' || key == 'Y');
        
    
    //Output values

    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the function RandNum. This function generates a random       **
// number between 1 and 10^X. The function accepts X as an argument           **
//******************************************************************************
int Randnum(int x)
{
    unsigned int randNum, randran; //Random number to be generated
    randran = pow(10,x);
    randNum = rand()%(randran)+1; //Generate the number to be guessed
    return randNum; //Return the number to be guessed
}
/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 10th, 2017, 11:30 PM
  Purpose:  This program contains all of the problems from CSC5 final in a menu.
 */

//System Libraries
#include <iostream> //Input output stream
#include <ctime> //For the time function
#include <cstdlib> //For rand and srand
#include <cmath> //for Pow function
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
short RevNum(unsigned short); //Function that reverses the number
int Randnum(int); //Function that generates a random value 1-9
void fillVec(vector<int>&, vector<int>&, int); //Function that fills the vectors
void prntVec(vector<int>, vector<int>, int); //Function that prints the contents of the vectors
void fillArr(int Numb[][2],vector<int>, vector<int>, int, int, int);
void prntArr(int Numb[][2], int, int); //Function that prints the array
void randSeq(short int[], int[], int, int); //Function that gets frequency
                                            //of random number generated
void printArr(char array[][15], int, int); //Function that prints array
void sortArr(char array[][15], int, int); //Function that sorts the array
void ReadNum(int[][6], int); //Function that reads the numbers from the data
void AugNum(int [][6], int [][7], int); //Function that alters the table

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice; //decision to choose problem
    
    //Input values to get problem choice
    do
    {
        cout<<"Which problem would you like to go to?\n";
        cout<<"Problem 1: Reverse number problem\n"
        <<"Problem 2: Guess the Number\n"
        <<"Problem 3: Even Odd Functions\n"
        <<"Problem 4: Random Sequence\n"
        <<"Problem 5: All Kinds of Sorting\n"
        <<"Problem 6: Spreadsheet Stuff\n"
        <<"Or press 7 to exit\n";
        cout<<"Please enter the number you would like to go to: ";
        cin>>choice;
        
        if(choice == '1')
        {
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
        }
        else if (choice=='2')
        {
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
        }
        
        else if (choice=='3')
        {
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare Variables
            const int maxrow=2;
            int sizecol, index, row ; //The size of number of columns in each vector inputted by user
            vector<int> evenNum; //Vector of even numbers
            vector<int> oddNum; //Vector of odd numbers
            const int maxSize = 90; //Max size of the array rows

            int Numb[maxSize][maxrow]; //Array that takes contents of vector

            //Input values
            cout<<"how many different even and odd pairs should there be? ";
            cin >>sizecol; //Input the size of the table
            cout<<" Even    ||    Odd \n"; //Set up the table

            //Fill the vectors with numbers and display vector table
            for (index = 0, sizecol ; index<sizecol ; index++) //Continue filling to size 
            {
                fillVec(evenNum, oddNum, index); //Call the fill vector function 
                prntVec(evenNum, oddNum, index); //Call the function to display vectors

            }
            for (int row = 0; row<=1 ; row++) //Continue filling to size 
            {
                fillArr(Numb, evenNum, oddNum, sizecol, index, row);
            }

            //Fill the array and display the 2D array
            cout<<" Even    ||    Odd (2-D Array)\n"; //Set up the table
            prntArr(Numb, sizecol, row); //Print the 2D columns
        }
        
        else if (choice == '4')
        {
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
        }
        else if (choice =='5')
        {
            const int maxrow = 10, maxcol = 15;
            char array[maxrow][maxcol] = {{'L','c','e','k','o','e','d','d','h','o','f','f','b','m','e'},
                            {'L','k','c','m','g','g','j','c','d','h','h','g','l','i','f'},
                            {'C','g','l','d','j','h','c','e','k','j','i','g','c','d','e'},
                            {'C','g','l','d','j','h','c','e','k','j','i','g','c','d','z'},
                            {'B','f','g','m','d','b','k','c','e','n','l','a','f','j','k'},
                            {'F','g','g','d','i','j','i','j','e','g','f','b','l','l','n'},
                            {'J','j','l','n','c','n','i','m','j','l','d','f','e','d','j'},
                            {'A','m','l','i','g','l','f','o','h','a','j','c','d','m','m'},
                            {'B','a','l','g','f','c','a','e','l','h','f','k','g','e','b'},
                            {'K','m','l','h','m','h','c','d','d','f','o','e','i','l','d'}}; 
                                    //Character array 10*15

            //Print the array without being sorted
            cout<<"Unsorted array: \n\n";
            printArr(array, maxrow, maxcol); //Print the unsorted array
            cout<<"\n\n";

            //Process by sorting array from greatest to least
            sortArr(array, maxrow, maxcol); 

            //Print the sorted array
            cout<<"Sorted array: \n\n";
            printArr(array, maxrow, maxcol);
            //Output values
        }
        else if (choice =='6')
        {
            //Declare Variables
            int numbrs[5][6]; //An array to take the input table data
            int chang[6][7]; //Array with sums
            int count = 0; //counter



            // Read the numbers from the file into the array by calling function.
            cout<<"Example input table: \n";
            ReadNum(numbrs, count);
            cout<<"\n";

            //Take the data from the table and sum columns
            cout<<"Example augmented output table: \n";
            AugNum(numbrs, chang, count);
            cout<<"\n";


            //Write the table to a file
            ofstream outputFile; // Output file stream object
            outputFile.open("AugTable.txt");// Open a file for output.
            // Write the array contents to the file.
            for (count =0; count<6; count++)
            {
                for (int pos = 0; pos<7; pos++)
                {
                    outputFile<<setw(6)<<chang[count][pos];
                }
                outputFile<<"\n\n\n\n";
            }
        }
        cout<<"\n";
    }while(choice!='7');
    
    
            
    //Process by mapping inputs to outputs
    
    //Output values

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

//******************************************************************************
// Definition of the fillVec function. This function accepts a vector and its **
// size as an argument. It loops through the contents of the filling them with**
// A random 2 digit number that is generated.                                 **
//******************************************************************************
void fillVec(vector<int> &evenNum, vector<int> &oddNum, int index)
{
    int evenInt, oddInt; //even integer to be generated
    evenInt = rand()%99+1; //Generate random number
    while(evenInt%2!=0 || evenInt<10)
        evenInt = rand()%99+1; //Generate random number
    evenNum.push_back(evenInt); //Send the random number to the vector
    
    oddInt = rand()%99+1; //Generate random number
    while(oddInt%2!=1 || oddInt<10)
        oddInt = rand()%99+1; //Generate random number
    oddNum.push_back(oddInt); //Send the random number to the vector
}

//******************************************************************************
// Definition of the prntVec function. This function displays the contents in **
// the vectors that contain even and odd numbers. it accepts the vectors as   **
// arguments and then displays a table showing the contents of the vector     **
//******************************************************************************
void prntVec(vector<int> evenNum, vector<int> oddNum, int index)
{
   cout<<"  "<<evenNum[index]<<"            "<<oddNum[index]<<"\n"; //Display contents 
}

//******************************************************************************
// Definition of the fillArr function. This function accepts two vectors as an**
// argument and fills a 2D array with the vector contents.                    **
//                                                                            **
//******************************************************************************
void fillArr(int Numb[][2], vector<int> evenNum, vector<int> oddNum, int sizecol, int index, int row)
{
   for  (index = 0, sizecol ; index<sizecol ; index++)
      {
        if (row==0) 
        {
            Numb[index][row] = evenNum[index];
        }
        else if (row==1)
        {
            Numb[index][row] = oddNum[index];
        }
      } 
}
//******************************************************************************
// Definition of the prntArr function. This function accepts a 2D array as an **
// argument and displays the 2D array with the columns and each row           **
//                                                                            **
//******************************************************************************
void prntArr (int Numb[][2], int sizecol, int row)
{
   for (int row = 0; row<sizecol;  row++)
    {
        cout<<"  "<<Numb[row][0]<<"            "<<Numb[row][1]<<"\n"; 
    } 
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

// *****************************************************************************
// Definition of the printArray function. This program  prints the contents of**
// the array back out.                                                        **
// *****************************************************************************
void printArr(char array[][15], int maxrow, int maxcol)
{
   for (int startr = 0; startr<maxrow ; startr++)
    {
        for(int count = 0; count<maxcol; count++)
        {
            cout<<array[startr][count];
        }
        cout<<"\n";
    } 
}

// *****************************************************************************
// Definition of the sort Array function. This program sorts the contents of  **
// the array in order from greatest to least.                                                        **
// *****************************************************************************
void sortArr(char array[][15] , int maxrow, int maxcol)
{
    int temp;
    bool swch;
    do{
        swch =false; //End loop if all values are ordered
        for (int count = 0; count<(maxrow-1); count++)
        {
            
            if (array[count][0] < array[count+1][0])
            {
                for(int col = 0; col<maxcol; col++)
                {
                    temp = array[count][col]; //temp to hold low value
                    array[count][col] = array[count+1][col];
                    array[count+1][col] = temp;
                }
                swch = true;
            }
        }
        }while (swch);
}

//******************************************************************************
// Definition of the read number function. This function reads the data table  **
// from the ext file.                                                         **
//******************************************************************************
void ReadNum(int numbrs[][6], int count)
{
    ifstream inputFile; // Input file stream object
    inputFile.open("table.txt");// Open the file.
    for (count; count<5; count++)
    {
        for (int col = 0; col<6; col++)
        {
            inputFile>>numbrs[count][col];
            cout<<setw(6)<<numbrs[count][col];
        }
        cout<<"\n";
    }  
}

void AugNum(int numbrs[][6], int chang[][7], int count)
{
    for(count=0; count<5; count++)
    {
        for(int pos = 0; pos<6; pos++)
            chang[count][pos] = numbrs[count][pos];
    }
    
    
    for(count = 0; count<5; count++)
    {
        int totl = 0;
        for(int pos =0; pos<6 ; pos++)
        {
            
            totl+=chang[count][pos];
            chang[count][6]=totl;
            cout<<setw(6)<<chang[count][pos];
            if (pos==5) cout<<setw(6)<<chang[count][6];
        }
        cout<<"\n";
    }
    for(int pos = 0; pos<7; pos++)
    {
        int totl = 0;
        for(count =0; count<5; count++)
        {
            totl+=chang[count][pos];
            chang[5][pos]=totl;
        }
        cout<<setw(6)<<chang[5][pos];
    }
}
/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 10th, 2017, 10:00 PM
  Purpose: This program uses vectors and arrays to fill a column of even or odd
           numbers that are randomly generated.  
 */

//System Libraries
#include <iostream> //Input output stream
#include <cstdlib>
#include <ctime> 
#include <vector>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int maxrow  = 2 ; //Max number of columns in array
//Function Prototypes
void fillVec(vector<int>&, vector<int>&, int); //Function that fills the vectors
void prntVec(vector<int>, vector<int>, int); //Function that prints the contents of the vectors
void fillArr(int Numb[][maxrow],vector<int>, vector<int>, int, int, int);
void prntArr(int Numb[][maxrow], int, int); //Function that prints the array
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int sizecol, index, row; //The size of number of columns in each vector inputted by user
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
    
    //Exit stage right!
    return 0;
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
void fillArr(int Numb[][maxrow], vector<int> evenNum, vector<int> oddNum, int sizecol, int index, int row)
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
void prntArr (int Numb[][maxrow], int sizecol, int row)
{
   for (int row = 0; row<sizecol;  row++)
    {
        cout<<"  "<<Numb[row][0]<<"            "<<Numb[row][1]<<"\n"; 
    } 
}
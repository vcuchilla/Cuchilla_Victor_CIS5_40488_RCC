/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 2nd, 2017, 11:30 PM
  Purpose: This program displays a table of digits and the table adds the rows
 *         and columns together. It reads the table from a file and outputs to
           a file as well.      
 */

//System Libraries
#include <iostream> //Input output stream
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void ReadNum(int[][6], int); //Function that reads the numbers from the data
void AugNum(int [][6], int [][7], int); //Function that alters the table

//Executable code begins here!!!
int main(int argc, char** argv) {
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
    
    //Output values

    //Exit stage right!
    return 0;
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
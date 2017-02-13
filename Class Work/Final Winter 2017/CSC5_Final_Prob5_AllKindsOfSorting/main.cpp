/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 2nd, 2017, 11:30 PM
  Purpose:  This program sorts 10*15 arrays of characters from greatest to least
 */

//System Libraries
#include <iostream> //Input output stream
using namespace std;

//User Libraries

//Global Constants
const int maxrow = 10, maxcol = 15; //Max array elements
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void printArr(char array[][maxcol], int, int); //Function that prints array
void sortArr(char array[][maxcol], int, int); //Function that sorts the array
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
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

    //Exit stage right!
    return 0;
}

// *****************************************************************************
// Definition of the printArray function. This program  prints the contents of**
// the array back out.                                                        **
// *****************************************************************************
void printArr(char array[][maxcol], int maxrow, int maxcol)
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
void sortArr(char array[][maxcol] , int maxrow, int maxcol)
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
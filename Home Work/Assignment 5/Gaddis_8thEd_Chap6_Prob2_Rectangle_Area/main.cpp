/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 8th, 2017, 11:30 PM
  Purpose: This program asks the user to enter the width and length of a 
           rectangle and then display the rectangle’s area using functions.
 */

//System Libraries
#include <iostream> //Input output stream
#include <iomanip> //To format output
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float getLength(float); //function that gets length
float getWidth(float); //function that gets width
float getArea(float, float);  //function that calculates area
void displayData(float, float, float); //displays data

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float length, width, area; //Information about rectangle
    
    //Input values
    length = getLength(length); //Call getLength
    width  = getWidth(width); //Call getWidth
    
    //Process by mapping inputs to outputs
    area = getArea(length, width); //Call getArea
    
    //Output values
    displayData(length, width, area); //call displayData
    
    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of getLength Function. This function gets the length of the     **
// rectangle from the user.                                                   **
//******************************************************************************
float getLength(float length)
{
    cout<<"What is the length of the rectangle in ft? "; //prompt user
    cin >>length; //get length
    return length; //return length to main
}

//******************************************************************************
// Definition of getWidth Function. This function gets the Width of the       **
// rectangle from the user.                                                   **
//******************************************************************************
float getWidth(float width)
{
    cout<<"What is the width of the rectangle in ft? "; //prompt user
    cin >>width; //get the width
    return width; //return width to main
}

//******************************************************************************
// Definition of getArea Function. This function gets the Area of the         **
// rectangle from the user inputted length and width.                         **                        **
//******************************************************************************
float getArea(float length, float width)
{
    float area;// declare area and calculate area
    area = length*width;
    return area; //return area to main
}

//******************************************************************************
// Definition of displayData Function. This function displays the area of the **
// rectangle after calculating the area.                                      **
//******************************************************************************
void displayData(float length, float width, float area)
{
    cout<<setprecision(2)<<showpoint<<fixed;  //Format output      
    cout<<"The area of the rectangle is "<<area
        <<" square ft, and its length is "<<length<<" ft and its width is\n"
        <<width<<" ft."; //display Data
}
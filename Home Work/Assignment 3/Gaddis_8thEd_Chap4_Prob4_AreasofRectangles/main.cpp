/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 16, 2017, 5:30 PM
  Purpose: This program determines the areas of two rectangles and compares 
           them.
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
    int len1, wid1, len2, wid2, area1, area2; //length widths and areas
    //Input values
    cout<<"What is the length of the first rectangle?\n";
    cin>>len1;
    cout<<"What is the width of the first rectangle?\n";
    cin>>wid1;
    cout<<"What is the length of the second rectangle?\n";
    cin>>len2;
    cout<<"What is the width of the second rectangle?\n";
    cin>>wid2;
    //Process by mapping inputs to outputs
    area1 = len1 * wid1;
    area2 = len2 * wid2;
    //Output values
    if (area1 > area2)
        cout<<"Rectangle 1 has a larger area then rectangle 2";
    else if (area2 > area1)
        cout<<"Rectangle 2 has a larger area then rectangle 1";
    else
        cout<<"Rectangle 1 and Rectangle 2 have the same area";

    //Exit stage right!
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Victor Cuchilla
 *
 * Created on January 18, 2017, 12:14 PM
 * This Program calculates pi using some sort of loop.
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    //Open output file
    ofstream PiFile( "c:\\Users\\rcc\\desktop\\pi.txt", ios::app );
    //Declare Variables
    // pi = 4 ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)
    const unsigned long NUM_TERMS = 1000000;
    float pi = 0.0;
    
    //Perform the loop to get the digits of pie
    for( int n = 0; n<NUM_TERMS; ++n)
        {
        pi += 4 * pow(-1,n) / (2*n + 1);
        }
    cout.precision( 7 );
    PiFile << "pi = "<<pi<<"\n";
    cout << "pi = "<<pi<<"\n";
    return 0;
}


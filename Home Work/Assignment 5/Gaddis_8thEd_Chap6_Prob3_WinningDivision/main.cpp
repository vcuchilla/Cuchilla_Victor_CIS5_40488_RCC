/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on: February 8th, 2017, 10:00 PM
  Purpose: This program uses two function to analyze the sales of four different
           divisions of a company.
 */

//System Libraries
#include <iostream> //Input output stream
#include <string> //To read string
#include <iomanip> //To manipulate output
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float getSls(float); //function that gets sales from name
void findHgh(float ,float ,float ,float, string ); //Function that finds high score
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string Div1, Div2, Div3, Div4, winDiv; //each division of company
    float sale1, sale2, sale3, sale4; //Sales for each division
    //Input values
    cout<<"What is the name of the first division?\n";
    cin >>Div1; //Get the name of the first division
    sale1 = getSls(sale1);
    winDiv = Div1;
    cout<<"What is the name of the second division?\n";
    cin >>Div2; //Get the name of the second division
    sale2 = getSls(sale2);
    if (sale2>sale1)
        winDiv = Div2;
    cout<<"What is the name of the third division?\n";
    cin >>Div3; //Get the name of the third division
    sale3 = getSls(sale3);
    if (sale3>sale2)
        winDiv = Div3;
    cout<<"What is the name of the fourth division?\n";
    cin >>Div4; //Get the name of the fourth division
    sale4 = getSls(sale4);
    if (sale4>sale3)
        winDiv = Div4;
    //Process by mapping inputs to outputs and Output values and winners
    findHgh(sale1, sale2, sale3, sale4, winDiv);
    //Exit stage right!
    return 0;
}

//******************************************************************************
// Definition of the getSls function.                                         **
//This function gets the quarterly sales totals for a single division.        **
//******************************************************************************
float getSls(float sales)
{
    cout<<"What is your division's quarterly sales figure? $";
    cin >>sales; 
    if (sales>0.00)
        return sales;
    else 
    {
        do{
            cout<<"ERROR: The sales figure must be larger than $0.00\n";
            cout<<"What is your division's quarterly sales figure? ";
            cin >>sales;
        }while (sales<0.00);
    }
      
}

//******************************************************************************
// Definition of the findHgh function.                                        **
//This function figures out which division had highest sales and displays.    **
//******************************************************************************
void findHgh(float sales1, float sales2, float sales3, float sales4, 
        string winr)
{
    cout<<setprecision(2)<<fixed<<showpoint;
    if (sales1>sales2 && sales1>sales3 && sales1>sales4)
        cout<<"The winner is the "<<winr<<" division, and their quarterly sales"
            <<"were "<<"$"<<sales1;
    else if (sales2>sales1 && sales2>sales3 && sales2>sales4)
        cout<<"The winner is the "<<winr<<" division, and their quarterly sales"
            <<"were "<<"$"<<sales2;
    else if (sales3>sales1 && sales3>sales2 && sales3>sales4)
        cout<<"The winner is the "<<winr<<" division, and their quarterly sales"
            <<"were "<<"$"<<sales3;
    else cout<<"The winner is the "<<winr<<" division, and their quarterly sales"
            <<"were "<<"$"<<sales4;
}
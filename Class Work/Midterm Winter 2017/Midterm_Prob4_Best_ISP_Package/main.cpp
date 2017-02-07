/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 28, 2017, 11:30 PM
  Purpose: This program calculates he best ISP package along with the monthly
           bill, the best package choice, and the money saved with best choice.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float aRate = 16.75, bRate = 23.75, cRate = 29.95; //Rates of each package
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float mBill, amtSave; //Monthly bill and amount saved
    char choice; //The subscribers package choice
    int hours; //Hours of access each month
    
    //Get package choice from the ISP subscriber
    cout<<"Choose which subscription you would like:\n" //Prompt subscriber
        <<"a)  $16.75 per month, 5 hours access.  Additional hours\n"
	<<"    are $0.75 up to 20 hours then $1 for all additional\n"
	<<"    hours.\n" //list package a
	<<"b)  $23.75 per month, 15 hours access.  Additional hours\n"
        <<"    are $0.55 up to 25 hours then $0.70 for each\n"
	<<"    hour above this limit.\n" //list package b
	<<"c)  $29.95 per month unlimited access.\n"; //list package c
    cout<<"Please enter a, b, or c : ";
    cin>>choice; //Ask user to input choice
    switch(choice)
    {
        case'a': cout<<"You have chosen package a.\n";
                     break;
        case'b': cout<<"You have chosen package b.\n";
                     break;
        case'c': cout<<"You have chosen package c.\n";
                     break;
        default: cout<<"You have chosen something other than a, b, or c.\n"
                     <<"Please restart the program and try again.\n";

    }
    cout<<"How many hours of access did you want per month? : ";
    cin>>hours; //Ask the user to input the hours of access
    while (hours<1 || hours>500)
    {
        cout<<"Hours must be greater than 1, but no more than 500.\n";
        cout<<"How many hours of access did you want per month? : ";
        cin >>hours;
    }
    //Calculate the monthly bill, possible suggestions, and money saved
    cout<<setprecision(2)<<fixed;
    if (choice=='a') //Calculations if user picks package a
    {
        if (hours<=5)
        {
            mBill = aRate; //Hours don't exceed package a amount 
            cout<<"Your monthly bill is $"<<mBill<<".\n";
            cout<<"You currently have made the best package choice.\n";
        }
        else if (hours>5 && hours<15)
        {
            mBill = aRate + (.75*(hours-5)); //Hours fit between optimal package
                                             //a hours 
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You currently have made the best package choice\n";       
        }
        else if (hours>=15 && hours<=20) //Hours exceed picking package a
        {
            mBill = aRate + (.75*(hours-5));
            amtSave = mBill - (bRate + (.55*(hours-15))); 
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You would save money switching to package b for "<<hours
                <<"\nhours of access.\n";
            cout<<"You could save $"<<amtSave; //Display amount saved
        }
        else if (hours==21) //Hours suggest switching from package a to b
        {
            mBill = aRate + (.75*(15)) + (1*(hours-20));
            amtSave = mBill - (bRate + (.55*(hours-15))); //Amount saved
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You would save money switching to package b for "<<hours
                <<"\nhours of access.\n";
            cout<<"You could save $"<<amtSave; //Display amount saved
        }
        else 
        {
            mBill = aRate + (.75*(15)) + (1*hours-20); //Hours suggest picking c
            amtSave = mBill - cRate; //Calculate amount saved
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You would save money switching to package c for unlimited"
                <<"\nhours of access.\n";
            cout<<"You could save $"<<amtSave; //Display amount saved
            
        }
        
    }
    else if (choice=='b') //Calculations if user picks package b
    {
        if (hours<=5) //Hours suggest picking package a
        {
            mBill = bRate; //Monthly bill equals package b rate
            amtSave = bRate - aRate; //Amount saved from switching to a
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You would save money switching to package a for "<<hours
                <<"\nhours of access.\n";
            cout<<"You could save $"<<amtSave; //Display amount saved
        }
        else if (hours>5 && hours<15) //Hours suggest switching to a
        {
            mBill = bRate; //Monthly bill equals package b rate
            amtSave = bRate - (aRate + (.75*(hours-5)));
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You would save money switching to package a for "<<hours
                <<"\nhours of access.\n";
            cout<<"You could save $"<<amtSave; //Display amount saved
        }
        else if (hours>=15 && hours<=25) //Hours suggest staying with b
        {
            mBill = bRate + (.55*(hours-15)); //Monthly bill = rate + extra
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You currently have made the best package choice\n";
        }
        else if (hours==26)
        {
            mBill = bRate + (.55*(10))+ (.7*(hours-25));
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"Either package b or c is optimal for "<<hours
                <<"\nhours of access.\n";
        }
        else
        {
            mBill = bRate + (.55*(10))+ (.7*(hours-25)); 
            amtSave = mBill - cRate;
            cout<<"Your monthly bill is $"<<mBill<<"\n";
            cout<<"You would save money switching to package c for unlimited"
                <<"\nhours of access.\n";
            cout<<"You could save $"<<amtSave; //Display amount saved
            
        }
    }
    if(choice=='c')
    {
       if (hours<=5)
       {
           mBill = cRate; //Monthly bill is equal to the package c rate
           amtSave = cRate - aRate;
           cout<<"Your monthly bill is $"<<mBill<<"\n";
           cout<<"You would save money switching to package a for "<<hours
               <<"\nhours of access.\n";
           cout<<"You could save $"<<amtSave; //Display amount saved
       }
       else if (hours>5 && hours<15)
       {
           mBill = cRate; //Monthly bill stays one rate constantly
           amtSave = cRate - (aRate + (.75*(hours-5)));
           cout<<"Your monthly bill is $"<<mBill<<"\n";
           cout<<"You would save money switching to package a for "<<hours
               <<"\nhours of access.\n";
           cout<<"You could save $"<<amtSave; //Display amount saved
        }
       else if (hours>=15 && hours<26)
       {
           mBill = cRate; //Monthly bill stays one rate constantly
           amtSave = cRate - (bRate + (.55*(hours-15)));
           cout<<"Your monthly bill is $"<<mBill<<"\n";
           cout<<"You would save money switching to package b for "<<hours
               <<"\nhours of access.\n";
           cout<<"You could save $"<<amtSave; //Display amount saved
       }
       else if (hours==26)
       {
           mBill = cRate; //Monthly bill is equal to c rate
           cout<<"Your monthly bill is $"<<mBill<<"\n";
           cout<<"Either package b or c is optimal for "<<hours
               <<"\nhours of access.\n";
       } 
       else 
       {
           mBill = cRate;
           cout<<"Your monthly bill is $"<<mBill<<"\n";
           cout<<"You currently have made the best package choice\n";
       }
    }
    
    //Output values

    //Exit stage right!
    return 0;
}


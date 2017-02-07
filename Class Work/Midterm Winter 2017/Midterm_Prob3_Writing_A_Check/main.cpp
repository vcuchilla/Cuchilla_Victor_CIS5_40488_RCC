/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 27, 2017, 6:00 PM
  Purpose: This program writes a check displaying the Date, Payee, Amount, 
           and the account holder information.
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
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
    string Date, Payee, AccHldr; //Payee, Account holder, and 
                                          //date strings
    int Amount, n1000, n100, n10, n1; //Individual numbers and amount
    float nonWhle; //Amount non whole number
    //Get Input values from the user
    cout<<"I am a check writer. Please enter the following information and \n"
        <<"I will write a check based off that information.\n";
    cout<<"What is the date? (ex. 01/01/15): ";
    getline(cin,Date); //User enters date
    cout<<"Who is the payee? (ex. John Doe): ";
    getline(cin,Payee); //User enters name of the payee
    cout<<"What is the check amount? (whole-dollar amount): $";
    cin>>Amount; //User enters the amount for the check
    cin.ignore(); //Ignore the enter key from Amount Variable
    if (Amount==nonWhle)
    {
        cout<<"The check amount can only be a whole number.\n";
        cout<<"\nWhat is the check amount? (whole-dollar amount): $";
        cin >>Amount;
        cin.ignore(); //Ignore the enter key from Amount Variable
    }
    while (Amount>1999 || Amount<1)
    {
        cout<<"The check can not be more than $1999 or less than $1.";
        cout<<"\nWhat is the check amount? (whole-dollar amount): $";
        cin >>Amount;
        cin.ignore(); //Ignore the enter key from Amount Variable
    }//Make sure check is greater than $1 and less than $1999
    
    cout<<"Who is the account holder? (ex. Jane Doe): ";
    getline(cin,AccHldr); //User inputs the Account holder
    
    //Strip digits for output of words for numbers
    n1000 = (Amount-Amount%1000)/1000; //Determine number of thousands
    int fixAmnt = Amount-n1000*1000;   //Take away thousand from Amount
    n100  = (fixAmnt-fixAmnt%100)/100; //Determine number of hundreds
        fixAmnt = fixAmnt-n100*100;    //Take away hundreds from Amount
    n10   = (fixAmnt-fixAmnt%10)/10;   //Determine the number of tens
        fixAmnt = fixAmnt-n10*10;      //Take away tens
    n1    = fixAmnt;                   //Determine number of ones
    
    //Output or display the written check
    cout<<"\n*****************************************************************";
    cout<<"\n"<<AccHldr<<"\n";
    cout<<"STREET ADDRESS\n";
    cout<<"CITY, STATE ZIP                                   Date: "<<Date;
    cout<<"\n\n";
    cout<<"Pay to the order of:  "<<Payee<<"             $"<<Amount<<".00\n\n";
    
    //Output the written numbers for the amount on the check
    if (n1000==1)cout<<"One Thousand "; //Display thousand if amount>1000
    if (n100==1)cout<<"One Hundred ";   //Display the hundreds 100-900
    else if (n100==2)cout<<"Two Hundred ";
    else if (n100==3)cout<<"Three Hundred ";
    else if (n100==4)cout<<"Four Hundred ";
    else if (n100==5)cout<<"Five Hundred ";
    else if (n100==6)cout<<"Six Hundred ";
    else if (n100==7)cout<<"Seven Hundred ";
    else if (n100==8)cout<<"Eight Hundred ";
    else if (n100==9)cout<<"Nine Hundred ";
    if (n10==1) //Display the tens
    {
        if (n1==0)cout<<"Ten "; //If number of tens=1 then display ten or teens
        else if (n1==1)cout<<"Eleven ";
        else if (n1==2)cout<<"Twelve ";
        else if (n1==3)cout<<"Thirteen ";
        else if (n1==4)cout<<"Fourteen ";
        else if (n1==5)cout<<"Fifteen ";
        else if (n1==6)cout<<"Sixteen ";
        else if (n1==7)cout<<"Seventeen ";
        else if (n1==8)cout<<"Eighteen ";
        else if (n1==9)cout<<"Nineteen ";
    }
    else if (n10==2)cout<<"Twenty "; //Display tens that are greater than 1
    else if (n10==3)cout<<"Thirty "; //20-90
    else if (n10==4)cout<<"Forty ";
    else if (n10==5)cout<<"Fifty ";
    else if (n10==6)cout<<"Sixty ";
    else if (n10==7)cout<<"Seventy ";
    else if (n10==8)cout<<"Eighty ";
    else if (n10==9)cout<<"Ninety ";
    if (n1==1 && n10!=1)cout<<"One "; //Display the ones
    else if (n1==2 && n10!=1)cout<<"Two ";
    else if (n1==3 && n10!=1)cout<<"Three ";
    else if (n1==4 && n10!=1)cout<<"Four ";
    else if (n1==5 && n10!=1)cout<<"Five ";
    else if (n1==6 && n10!=1)cout<<"Six ";
    else if (n1==7 && n10!=1)cout<<"Seven ";
    else if (n1==8 && n10!=1)cout<<"Nine ";
    
    //Display the rest of the check
    cout<<"and no/100s Dollars\n";
    cout<<"\nBANK OF CSC5\n";
    cout<<"FOR: THE BILLS THAT KEEP ON COMING                 "<<AccHldr<<"\n";
    cout<<"*******************************************************************";
    
    //Exit stage right!
    return 0;
}
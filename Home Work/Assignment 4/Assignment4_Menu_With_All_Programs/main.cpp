/* 
  File:   main.cpp
  Author: Victor, Cuchilla
  Created on January 20, 2017, 9:00 PM
  Purpose: This program serves as a menu for Assignment 4 (Chapter 5 Problems)
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
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
    char choice;
    
    //Input choice from user
    cout<<"Choose from the list:\n";
    cout<<"Type 1 for Sum of Two Numbers problem\n";
    cout<<"Type 2 for ASCII character display problem\n";
    cout<<"Type 3 for Ocean Levels problem\n";
    cout<<"Type 4 for Calories Burned problem\n";
    cout<<"Type 5 for Membership Fees Increase problem\n";
    cout<<"Type 6 for Distance Traveled problem\n";
    cout<<"Type 7 for the Pennies for Pay problem\n";
    cout<<"Type 8 for the Hotel Occupancy problem\n";
    cout<<"Type 9 for the Average Rainfall problem\n";
    cin >>choice;
    
    //Switch to determine the problem
    switch (choice) 
    {   
        case '1':
        {
        cout<<"This problem finds the sum of two numbers\n\n";
            //Declare Variables
        int stNum = 1, stopNum, sum; //User number and sum of all integers to #

        //Input values
        cout<<"Pick any number and I will tell you the sum of all the digits "
            <<"from\n"
            <<"1 to that number.\n";
        cin>>stopNum;

        //Process by mapping inputs to outputs (perform iterations to find sum)
        //Using a loop
        while (stNum<=stopNum)
            {
                sum+=stNum;
                stNum++;
            }        
        //Output values
        cout<<"The number you entered was "<<stopNum<<".\n";
        cout<<"The sum of all the integers to that number is "<<sum<<".\n";
        break;
        }
        case '2':
        {
            cout<<"This program displays the ASCII code characters on the screen"
                <<"\n\n";
            //Declare Variables
        int ASCII=0, Lastchr=127; //Start code characters and and end code
        //Input values

        //Process by mapping inputs to outputs
        while (ASCII<=Lastchr)
            {
                if (ASCII%16==0)
                    cout<<"\n";
                cout<<static_cast<char>(ASCII);
                ASCII++;
            }
        break;
        }
        case'3':
        {
            cout<<"This program displays rising ocean levels\n\n";
            //Declare Variables
        float oceanlev = 1.5; //Ocean levels variable
        int year = 0, endyear = 25;//Year variable

        //Prompt user
        cout<<"I will display a table showing how much the ocean levels "
            <<"will rise:"
            <<"\n\n";
        cout<<"Millimeters Risen | Year\n";
        //Process by mapping inputs to outputs
        while(year<=endyear){
            cout<<setprecision(1)<<fixed;
            cout<<"         "<<(oceanlev<10?' ':'\0')<<oceanlev<<"         "
                <<year<<"\n";
            oceanlev+=1.5;
            year++;
        }
        break;
        }
        case '4':
        { 
            cout<<"This program displays amount of calories burned on a \n"
                <<"treadmill\n\n";
                //Declare Variables
        float calbrnd = 3.6; //Calories burned
        int min = 0, lastMin = 30; //Time running on treadmill
        //Prompt User
        cout<<"I will display the amount of calories burned while running on\n"
            <<"a treadmill for a certain duration...\n\n"
            <<"Calories Burned  |  Minutes Running\n";

        //Process by mapping inputs to outputs using loop
        while(min<=lastMin){
            if (min%5==0)
            {
                cout<<setprecision(1)<<fixed;
                cout<<"    "<<(calbrnd<200?' ':'\0')<<calbrnd<<"        "
                <<"      "<<min<<"\n";
            }
            calbrnd+=3.6;
            min++;
        }
        break;   
        }
        case '5':
        { 
            cout<<"This program displays membership fee increases\n\n";
                //Declare Variables
        float mshpFee = 2500.0; //Membership fee
        int year = 0, finYear = 6; //Year of fees

        //Prompt User
        cout<<"I will display the country club's projected membership fees "
            <<"for\n"
            <<"the next six years:\n\n"
            <<"Membership Fees   |   Year (year 0 is current year)\n";

        //Process by mapping inputs to outputs
        for( year=0, finYear=6; year<=finYear; year++)
            {
                cout<<setprecision(2)<<fixed;
                cout<<"   $"<<mshpFee<<"            "<<year<<"\n";
                mshpFee = mshpFee + (.04*mshpFee);
            }
        break;   
        }
        case '6':
        {
            cout<<"This program displays the distance a vehicle traveled\n\n";
                //Declare Variables
        float speed, start=1, HrsTrld, distance ; 
                     //Speed, hours traveled and distance

        //Prompt User for speed and hours traveled
        cout<<"I calculate the distance a vehicle has traveled.\n\n"
            <<"How fast (mph) was the vehicle traveling? ";
        cin>>speed;
        cout<<"For how long (hours) did the vehicle travel at that speed? ";
        cin>>HrsTrld;
        cout<<"\n"<<"    Hour      Distance Traveled\n"
            <<"-------------------------------------\n";
        //Process by mapping inputs to outputs using loop
        for (start=1;start<=HrsTrld;start++) 
            {
            distance = start*speed;
            cout<<" "<<setw(8)<<start<<"           "<<setprecision(1)<<fixed
                <<setw(8)<<distance<<"\n";
            }
        break;   
        }
        case '7':
        {
            cout<<"This program displays the pennies for pay problem\n\n";
                //Declare Variables
        int salary=1, totpay = 0, maxdays=30; //Salary and pay in pennies
        //Input values

        //Process by mapping inputs to outputs
        for(int day = 1;day<=maxdays;day++,salary*=2)
        {
            int cents=salary%100;
            int dollars=(salary-cents)/100;

            totpay+=salary;
            cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
                    <<(cents<10?'0':'\0')<<cents<<"\n";

            cents=totpay%100;
            dollars=(totpay-cents)/100;
            cout<<"The total pay for the day is $"<<dollars<<"."
                    <<(cents<10?'0':'\0')<<cents<<"\n\n";
        }
        //Predicting the result
        double salLday=(pow(2,maxdays-1))/100; //Results in dollars
        double totLday=(pow(2,maxdays)-1)/100; //Results in dollars
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Final salary predicted = $"<<salLday<<"\n";
        cout<<"Final total pay predicted = $"<<totLday<<"\n";
        break;   
        }
        case '8':
        {
            cout<<"This program calculates the occupancies of a hotel\n\n";
                //Declare Variables
        float numFlrs, stFlr = 1, numRms, totRms, totFlrs, numOc, totNumO;
                                                    //Rooms and floors
        float prcntOc ; //Percent of rooms occupied

        //Input values from user
        cout<<"How many floors does the hotel have? ";
        cin >>numFlrs; //get number of floors from user
        if (numFlrs<1)
            {cout<<"The hotel must have at least 1 floor.\n";}

        //Process by mapping inputs to outputs using loop
        while (stFlr<=numFlrs) //While floor is less than or equal to total floors
            {
            if (stFlr==13)
                stFlr++;
            cout<<"How many rooms are there on the #"<<stFlr<<"? ";
            cin >>numRms;//rooms on each floor
            if (numRms<10)
                {cout<<"There must be at least 10 or more rooms on each floor.\n";}
            cout<<"How many of those rooms are occupied? ";
            cin >>numOc; //rooms occupied on each floor
            totRms +=numRms; //total rooms counter
            totNumO +=numOc; //total rooms occupied counter
            stFlr++; //floor counter
            }
        prcntOc = (totNumO/totRms)*100;
        //Output values
        cout<<"The total number of floors is "<<numFlrs<<".\n"; //Display totals
        cout<<"There is a total of "<<totRms<<" rooms in the hotel.\n";
        cout<<"Of those rooms "<<totNumO<<" of them are occupied.\n";
        cout<<"And "<<(totRms-totNumO)<<" of them are unoccupied.\n";
        cout<<"That means "<<prcntOc<<"%"<<" of the rooms are occupied";
        break;   
        }
        case '9':
        {
            cout<<"This program calculates the average rainfall over a period"
                <<" of time\n\n";
                //Declare Variables
        float numYrs, startYr = 1.0, startMt = 1.0, inRain, totRain;
        float avgRain;
        //Input values 
        cout<<"I calculate the average rainfall over a number of years...\n";
        cout<<"For how many years did the rain fall? "; //Get years from user
        cin >>numYrs;
        if (numYrs<1){cout<<"\nRain must have fell for at least 1 year\n";}

        //Process the first loop
        while (startYr<=numYrs)
            {
            cout<<"For year #"<<startYr<<"\n";
                for (startMt=1; startMt<=12 ; startMt++)
                    {
                    cout<<"How much rain fell (in) in month #"<<startMt<<"? ";
                    cin>>inRain;
                    if (inRain<0){cout<<"\nAmount of rain must be a positive "
                           <<"number"
                            <<"\n";}
                    totRain +=inRain;
                    }  
            startYr++;
            }
        avgRain = totRain/(12*numYrs);
        //Output values
        cout<<setprecision(2)<<fixed;
        cout<<"The total amount of rain that fell in "<<numYrs*12<<" months\n"
            <<"was "<<totRain<<" inches.\n";
        cout<<"The average amount of rain (in) that fell per month was "
            <<avgRain;
        break;   
        }
    }

    //Output values

    //Exit stage right!
    return 0;
}
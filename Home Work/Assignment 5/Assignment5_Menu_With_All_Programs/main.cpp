/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on February 8nd, 2017, 11:30 AM
  Purpose: This program serves as a menu for all the work for Assignment 5
 */

//System Libraries
#include <iostream> //Input output stream
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float calculateRetail(float WhlSl, float markUp);
float getLength(float); //function that gets length
float getWidth(float); //function that gets width
float getArea(float, float);  //function that calculates area
void displayData(float, float, float); //displays data
float getSls(float); //function that gets sales from name
void findHgh(float ,float ,float ,float, string ); //Function that finds high score
int getNumAcc(string); //function that gets # of crashes
void findlow (int, int, int, int, int, string);
float fallDis(float); //Function that calculates the distance fallen
float KinEn(float, float); //Function that calculates kinetic energy
float celsius(float); //Function that converts degrees of temperature
int coinToss(); //Coin toss function
float presVal(float, float, int); //function that calculates the present value
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int choice; //Choice of program
    bool cont = true; //Continue menu
    //Input values
    do{
    cout<<"\n\nWhich problem would you like to go to:"
        <<"1. Markup\n"
        <<"2. Rectangle Area\n"
        <<"3. Winning Division Sales\n"
        <<"4. Safest Driving Area\n"
        <<"5. Falling Distance\n"
        <<"6. Kinetic Energy\n"
        <<"7. Celsius Temperature\n"
        <<"8. Coin Toss\n"
        <<"9. Present Value Investment\n"
        <<"10. To Exit the Program\n";
    cout<<"Please input the problem number you'd like to go to: ";
    cin >>choice;
    
    //Process by mapping inputs to outputs
    if (choice == 1)
    {
        //Declare Variables (Wholesale cost and the markup percentage)
      float WhlSl, markUp, Retail; //Whole sale cost, markup percentage, retail

      //Input values the mark up, and the Whole-sale cost
      cout<<"I am a business program that calculates the retail cost of an\n"
          <<"item. What was the whole sale cost of the item? $";
      cin >>WhlSl; //Get the whole sale cost
      if(WhlSl<0) 
      {
          cout<<"Sorry the wholesale cost can't be less than $0.00\n";
          cout<<"What was the Whole sale cost for the item? ";
          cin >>WhlSl; //Get the whole sale cost if it is negative
      }
      cout<<"What is the mark up percentage? ";
      cin>>markUp; //Get the mark up percentage
      if(markUp<0) 
      {
          cout<<"Sorry the mark up percentage can't be less than 0.\n";
          cout<<"What is the mark up percentage for the item? ";
          cin >>markUp; //Get the whole sale cost if it is negative
      }
      //Call calculateRetail to calculate the retail cost for the item
      Retail = calculateRetail(WhlSl, markUp); //Call function
      //Output values
      cout<<setprecision(2)<<showpoint<<fixed;
      cout<<"The retail cost of the item is $"<<Retail; //Display retail cost
      //End of Program 1
    }
    else if (choice == 2)
    {
        //Declare Variables
        float length, width, area; //Information about rectangle

        //Input values
        length = getLength(length); //Call getLength
        width  = getWidth(width); //Call getWidth

        //Process by mapping inputs to outputs
        area = getArea(length, width); //Call getArea

        //Output values
        displayData(length, width, area); //call displayData
    }
    else if (choice == 3)
    {
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
    }
    else if (choice == 4)
    {
        //Declare Variables
    string reg1, reg2, reg3, reg4, reg5, safReg; //Five different regions
    int tot1, tot2, tot3, tot4, tot5; //Five crash totals
    
    //Input values
    cout<<"What is the name of the first region? "; //prompt user
    cin >>reg1; //get name of first region
    tot1 = getNumAcc(reg1); //call function to get crash totals in region
    safReg = reg1; //get region with lowest crashes
    cout<<"What is the name of the second region? "; //prompt user
    cin >>reg2; //get name of first region
    tot2 = getNumAcc(reg2); //call function to get crash totals in region
    if (tot2<tot1)
        safReg = reg2; //get region with lowest crashes
    cout<<"What is the name of the third region? "; //prompt user
    cin >>reg3; //get name of first region
    tot3 = getNumAcc(reg3); //call function to get crash totals in region
    if (tot3<tot2 && tot3<tot1)
        safReg = reg3; //get region with lowest crashes
    cout<<"What is the name of the fourth region? "; //prompt user
    cin >>reg4; //get name of first region
    tot4 = getNumAcc(reg4); //call function to get crash totals in region
    if (tot4<tot3 && tot4<tot2 && tot4<tot1)
        safReg = reg4; //get region with lowest crashes
    cout<<"What is the name of the  fifth region? "; //prompt user
    cin >>reg5; //get name of first region
    tot5 = getNumAcc(reg5); //call function to get crash totals in region
    if (tot5<tot4 && tot5<tot3 && tot5<tot2 && tot5<tot1)
        safReg = reg5; //get region with lowest crashes
    
    //Process by mapping inputs to outputs and output safest region
    findlow(tot1, tot2, tot3, tot4, tot5, safReg); //call get low function
    }
    else if (choice == 5)
    {
        //Declare Variables
    float dist; //distance
    float g =9.8; //gravity
    float t; //time
    //Prompt user
    cout<<"This program calculates the distance an object will fall over a\n"
        <<"period of time.\n"; //Tell user what the program does
    for(float t=1, dist; t<=10; t++)
    {
        dist = fallDis(t); 
        cout<<"If the object falls for "<<t<<" seconds it will fall for\n"
            <<dist<<" meters."; //Display the time and distance fallen
    }
    }
    else if (choice == 6)
    {
        //Declare Variables
    float mass, vel, KinEnG; ///Mass and velocity variables
    //Input values
    cout<<"What is the mass in kilograms of the object? ";
    cin >>mass; //Get the mass of the object
    cout<<"What is the object's velocity in (m/s)? ";
    cin >>vel; //Get the velocity of the object
    
    //Process by mapping inputs to outputs
    KinEnG = KinEn(mass,vel); //Call function to get kinetic energy
    //Output values
    cout<<"The kinetic energy of the object is "<<KinEnG<<" kilogram meters^2\n"
        <<"per second^2.";
    }
    else if (choice == 7)
    {
        //Declare Variables
    float F, C; //fahrenheit and celsius
    cout<<"Fahrenheit                  Celsius\n";
    //Loop and call function to display table
    for (F=0, C; F<=20; F++)
    {
        C = celsius(F); //Call celsius function
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<" "<<F<<"                       "<<C<<"\n";
    }
    }
    else if (choice == 8)
    {
        int numToss, dec; //Number of tosses
    
    //Input values
    cout<<"I will simulate a coin toss. How many times should the coin be\n"
        <<"tossed? ";
    cin >>numToss; //Get the number of tosses
    
    //Process by mapping inputs to outputs by calling function
    for (int stToss=1; stToss<=numToss; stToss++)
    {
        dec = coinToss(); //Call function
        if (dec==1) cout<<"heads\n";
        else cout<<"tails\n";
    }
    }
    else if (choice == 9)
    {
        //Declare Variables
    float futVal, intRate, presV; //Present value, Future value, interest rate
    int numYear;           //number of years
    
    //Input values
    cout<<"What is the future amount you want in your savings account?\n"
        <<"$";
    cin >>futVal; //Get the future value the user wants to reach
    cout<<"What is the annual interest rate? ";
    cin >>intRate; //Get the annual interest rate
    cout<<"How many years do you plan to let the money sit in the account? ";
    cin >>numYear; //Get number of years from the user
    
    //Process by mapping inputs to outputs
    presV = presVal(futVal, intRate, numYear); //call the presVal function
    
    //Output values
    cout<<setprecision(2)<<fixed<<showpoint; //manipulate dollar amount
    cout<<"The amount that you would have to invest this year would be $";
    cout<<presV; //Display the present value amount
    }
    else if (choice == 10)
        cont = false; //Exit program
    }while(cont);
    //Exit stage right!
    return 0;
}
//*****************************************************************************
// Definition of function calculateRetail                                    **
// This function calculates the retail value given wholesale cost and the    **
// markup percentage.                                                        **
//*****************************************************************************

float calculateRetail(float WhlSl, float markUp)
{
    return WhlSl + (WhlSl*(markUp/100)); //Define the body of the function
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

//******************************************************************************
// Definition of the getNumAcc function. This function gets the number of     **
// crashes for each region inputted by the user.                              **
//******************************************************************************
int getNumAcc(string reg)
{
    int numAcc; //Number of accidents variable to be outputted
    cout<<"How many accidents were there in the "<<reg<<" region last year? ";
    cin >>numAcc; //Have user input number of accidents
    while(numAcc<0) //make sure to validate number of accidents
    {
        cout<<"Error: the number of crashes cannot be less than 0";
        cout<<"How many accidents were there in the "<<reg<<" region last year? ";
        cin >>numAcc; //Have user input number of accidents
        
    }
    return numAcc; //return the number of accidents        
}
//******************************************************************************
// Definition of the findlow function. This function gets the lowest number of**
// crashes for all the crashes and displays the region and number of crashes  **
//******************************************************************************
void findlow(int tot1, int tot2, int tot3, int tot4, int tot5, string safReg)
{
    if(tot5<tot4 && tot5<tot3 && tot5<tot2 && tot5<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot5<<"\n"
        <<"crashes.";
    else if(tot4<tot5 && tot4<tot3 && tot4<tot2 && tot4<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot4<<"\n"
        <<"crashes.";
    else if(tot3<tot5 && tot3<tot4 && tot3<tot2 && tot3<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot3<<"\n"
        <<"crashes.";
    else if(tot2<tot5 && tot2<tot3 && tot2<tot4 && tot2<tot1)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot2<<"\n"
        <<"crashes.";
    else if(tot1<tot5 && tot1<tot3 && tot1<tot2 && tot1<tot4)
    cout<<"The safest region in the city to drive in is the "<<safReg<<"\n"
        <<"region because it had the fewest crashes last year with "<<tot1<<"\n"
        <<"crashes.";
}

//******************************************************************************
// Definition of the fallDis function. This function calculates the distance  **
// that the object has fallen given time                                      **
//******************************************************************************
float fallDis(float time)
{
    float dist, g = 9.8;
    
    dist = (.5)*(g)*((time*time )); //calculate ditance fallen
    return dist;
}

//******************************************************************************
// Definition of KinEn function. This function calculates the kinetic energy of*
// an object given the objects mass and velocity.                              *
//******************************************************************************
float KinEn(float m, float v)
{
    float Kin;
    Kin = (.5)*m*(v*v); //calculate the kinetic energy
    return Kin; //Return the kinetic energy to main
}

//******************************************************************************
// Definition of function celsius. This program calculate celsius from        **
// fahrenheit.                                                                **
//******************************************************************************
float celsius(float F)
{
    //Calculate celsius from fahrenheit
   return ((5.0/9)*(F-32)); // return c to main
}

//******************************************************************************
// Definition of the coin toss function.  This function simulates a coin toss **
// and returns a 1 or 2 value at random                                       **
//******************************************************************************
int coinToss()
{
    //Generate random number 1 or 2
    return ((rand() % 2) + 1);//Return the decision of the toss
}

//******************************************************************************
// Definition of the presVal function. This function calculates the present   **
// value needed to invest in order to reach to intended savings amount.       **
//******************************************************************************
float presVal(float futVal, float intRate, int numYear)
{
    return (futVal/(pow((1+intRate),numYear)));
}
/* 
  File:   main.cpp
  Author: Victor Cuchilla
  Created on January 28, 2017, 11:30 PM
  Purpose: Simple "pig" dice game. This game plays a dice game from 1-3 players.
 */

//System Libraries
#include <iostream> //Input output stream
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the Seed
#include <string>  //Read strings
#include <cmath>   //Needed for certain math functions like pow
#include <iomanip> //Manipulate output and calculation display
#include <fstream> //To read data in from files and output data to files
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables an Initialize nPlayers and their scores
    
    short nPlyrs; //Number of players
    unsigned short nTurns = 0; //Number of turns each player has 
    long int plyr1, plyr2, plyr3; // win score and each players score
    float winScr, hghscr=10000; //Set the win score to constant number and high
    const int maxscr=2e9; //Constant max score
    bool keeplay=true; //Variable to keep playing
    plyr1 = 0;
    plyr2 = 0; //Initialize scores to 0
    plyr3 = 0;
    string winr; //Name of winner string
    
    //Instantiate and Open files
    ifstream inputFile;
    ofstream outputFile;
    inputFile.open("C:\\Users\\Victor\\Desktop\\HighScore.txt");
    inputFile>>hghscr; //Read input high score from file
    outputFile.open("C:\\Users\\Victor\\Desktop\\HighScore.txt");
    
    cout<<"This software plays a \"Pig\" dice game. The game is called \"pig\""
        <<"\nbecause the players \"hog\" the dice in an effort to win the\n"
        <<"game. The score to win is decided by the players if it is within\n"
        <<"the bounds or by which ever player has the highest score at the\n"
        <<"end of the game. The first player rolls the die and adds up the\n"
        <<"numbers after each roll. The player's turn will end if a 1 is\n"
        <<"rolled.\n";
    cout<<"Here are some other rules about rolling:\n"
        <<"If you roll a 6 your score adds 6 and is doubled\n"
        <<"If you roll a 3 your score will decrement 1 point\n"
        <<"If you roll a 2 your score adds 2 and is squared\n"
        <<"If you roll a 4 your score adds 4 and is square rooted\n";
    //Explain the rules of the game
   
    do
    {
    cout<<"The previous high score was "<<hghscr<<"\n";
    cout<<"What will be the score to win in this game? ";
    cin >>winScr; //Get the score to win from players
    if(winScr>maxscr)//Make sure win score is less than 2 million
    {
        cout<<"The score to win can't be greater than 2,000,000.\n";
        cout<<"What will be the score to win? ";
        cin >>winScr; //Get the score to win from players
    }
    else if(winScr<1)//Make sure win score is less than 2 million
    {
        cout<<"The score to win can't be less than 1.\n";
        cout<<"What will be the score to win? ";
        cin >>winScr; //Get the score to win from players
    }
    else {  //Format score to show will decimal point
        cout<<setprecision(2)<<showpoint<<fixed; 
        cout<<"That win score will work.\n";
        cout<<"The goal will be to reach "<<winScr<<" points.\n";
    }
    cout<<"How many players are there in the game? ";
    cin >>nPlyrs; //Get the number of players of the game

    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Play the game by -> Looping and take Dice statistics
    switch(nPlyrs){
        case 1:{
            cout<<"I guess you can play by yourself...\n"; //lonely
            cout<<"Press any key and Enter to roll the dice..."; 
            char key; // declare character  to roll and Prompt user to roll
            cin.get(key); //Get the key and start 
            cin.ignore(); //ignore enter in buffer key
            //Call random number generator for the dice
            int die=rand()%6+1;//Value from 1 to 6
            for(plyr1, die, nTurns, nPlyrs; die!=1 && plyr1<winScr;nTurns++)
            {
              if (die==2) plyr1=pow(plyr1+2, 2); //Score squared if die=2
              else if (die==3) plyr1>0?plyr1--:plyr1==0; //Ternary Operator
                                            //score decrements if 3 is rolled
              else if (die==4) plyr1=sqrt(plyr1+4); //add 4 and sqrt if die=4
              else if (die==6) plyr1=2*(plyr1+6); //add 6 and double if die=6
              else plyr1+=die; //add the players score if they don't roll a 1
              cout<<"You rolled a "<<die<<" your score is "
                  <<plyr1<<"\n";
                //Display the current # rolled and show current score
              cout<<"Press any key and Enter to roll the dice or continue..."; 
                //Prompt use to roll again
              cin>>key; //Get the key and roll again
              cin.ignore(); //ignore enter in buffer key
              //Call random number generator for the dice
              die=rand()%6+1;//Value from 1 to 6
            }
            if(die==1 && plyr1<winScr) //If player rolls a 1 declare loss
                cout<<"Sorry you rolled a "<<die<<" your turn is over.\n"
                    <<"Your score of "<<plyr1<<" did not \n"
                    <<"beat the score to win which was "<<winScr<<".\n";
            cout<<"Do you wish to play again? Y or N\n";
            cin.get(key); //Decide if player wants to play again
            cin.ignore();
            if (key=='Y' || key=='y')
                    keeplay=true;
                else if (key=='N' || key=='n')
                    keeplay=false;
            else if (plyr1>=winScr)
            {      //If player wins then declare win
                cout<<"Congratulations you have won!\nWhat is your name? ";
                getline(cin,winr);//get the name of the winner
                cout<<winr<<" your score of "<<plyr1<<" beat the score to\n"
                    <<"win which was "<<winScr<<".\n";
                hghscr = plyr1; //Set High Score
                outputFile<<hghscr; //Write high score to file
                cout<<"Your score was written to a file.\n";
                cout<<"Do you wish to play again? Y or N\n";
                char key; //Decide if player wants to play again
                cin.get(key); 
                cin.ignore();
                if (key=='Y' || key=='y')
                    keeplay=true;
                else if (key=='N' || key=='n')
                    keeplay=false;
                else 
                {
                    cout<<"You have entered something other than Y or N.\n";
                    cout<<"Do you wish to play again? Y or N\n";
                    char key; //Decide if player wants to play again
                    cin.get(key); 
                    cin.ignore();
                }
            }
        }   break; //End the 1 player game
        case 2:{
            cout<<"Player 1 will go first...\n"; //two player game
            cout<<"Press any key and Enter to roll the dice..."; 
            char key; // declare character  to roll and Prompt use to roll
            cin>>key; //Get the key and start
            cin.ignore(); //ignore enter in buffer key
            //Call random number generator for the dice
            int die=rand()%6+1;//Value from 1 to 6
            for(plyr1, die, nTurns, nPlyrs; die!=1; nTurns++)
            {
              if (die==2) plyr1=pow(plyr1+2, 2); //Score squared if die=2
              else if (die==3) plyr1>0?plyr1--:plyr1==0; 
                                            //score decrements if 3 is rolled
              else if (die==4) plyr1=sqrt(plyr1+4); //add 4 and sqrt if die=4
              else if (die==6) plyr1=2*(plyr1+6); //add 6 and double if die=6
              else plyr1+=die; //add the players score if they don't roll a 1
              cout<<"You rolled a "<<die<<" your score is "<<plyr1
                  <<"\n";
                //Display the current # rolled and show current score
              cout<<"Press any key and Enter to roll the dice or continue..."; 
                //Prompt use to roll again
              cin>>key; //Get the key and roll again 
              cin.ignore(); //ignore enter in buffer key
              //Call random number generator for the dice
              die=rand()%6+1;//Value from 1 to 6
            }
            if(die==1) //If player 1 rolls a 1 declare loss and player 2 go
                cout<<"Sorry you rolled a "<<die<<" your turn is over.\n"
                    <<"Your score is "<<plyr1<<". Player 2 will now go.\n";
            cout<<"Player 2 it is now your turn...\n"; //two player game
            cout<<"Press any key and Enter to roll the dice..."; 
            cin>>key; //Get the key and start
            cin.ignore(); //ignore enter in buffer key
            //Call random number generator for the dice
            die=rand()%6+1;//Value from 1 to 6
            while(die!=1)
            {
              if (die==2) plyr2=pow(plyr2+2, 2); //Score squared if die=2
              else if (die==3) plyr2>0?plyr2--:plyr2==0; 
                                            //score decrements if 3 is rolled
              else if (die==4) plyr2=sqrt(plyr2+4); //add 4 and sqrt if die=4
              else if (die==6) plyr2=2*(plyr2+6); //add 6 and double if die=6
              else plyr2+=die; //add the players score if they don't roll a 1
              cout<<"You rolled a "<<die<<" your score is "<<plyr2
                  <<"\n";
                //Display the current # rolled and show current score
              cout<<"Press any key and Enter to roll the dice or continue..."; 
                //Prompt use to roll again
              cin>>key; //Get the key and roll again 
              cin.ignore(); //ignore enter in buffer key
              //Call random number generator for the dice
              die=rand()%6+1;//Value from 1 to 6
              nTurns++; //Increment number of turns
            }
            if(die==1) //If player 1 rolls a 1 declare loss and player 2 go
                cout<<"Sorry you rolled a "<<die<<" your turn is over.\n"
                    <<"Your score is "<<plyr2<<".\n"; //Display player 2 score
            if(plyr1<plyr2)
            {
                cout<<"Congratulations Player 2 you have won! What is your \n"
                    <<"name? "; //Take the name of winner
                getline(cin,winr); //get the name of the winner
                cout<<winr<<" your score of "<<plyr2<<" beat player 1's\n"
                    <<"score of "<<plyr1<<".\n"; //Display player 2 as winner
                hghscr = plyr2; //Set High Score
                outputFile<<hghscr; //Write high score to file
                cout<<"Your score was written to a file.\n";
                cout<<"Do you wish to play again? Y or N\n";
                char key; //Decide if player wants to play again
                cin.get(key); 
                cin.ignore();
                if (key=='Y' || key=='y')
                    keeplay=true;
                else if (key=='N' || key=='n')
                    keeplay=false;
                else 
                {
                    cout<<"You have entered something other than Y or N.\n";
                    cout<<"Do you wish to play again? Y or N\n";
                    char key; //Decide if player wants to play again
                    cin.get(key); 
                    cin.ignore();
                }
            }
            else if(plyr1>plyr2)
            {
                cout<<"Congratulations Player 1 you have won! What is your \n"
                    <<"name? "; //Take the name of winner
            getline(cin,winr);//get the name of the winner
                cout<<winr<<" your score of "<<plyr1<<" beat player 2's\n"
                    <<"score of "<<plyr2<<".\n"; //Display player 1 as winner
                hghscr = plyr1; //Set High Score
                outputFile<<hghscr; //Write high score to file
                cout<<"Your score was written to a file.\n";
                cout<<"Do you wish to play again? Y or N\n";
                char key; //Decide if player wants to play again
                cin.get(key); 
                cin.ignore();
                if (key=='Y' || key=='y')
                    keeplay=true;
                else if (key=='N' || key=='n')
                    keeplay=false;
                else 
                {
                    cout<<"You have entered something other than Y or N.\n";
                    cout<<"Do you wish to play again? Y or N\n";
                    char key; //Decide if player wants to play again
                    cin.get(key); 
                    cin.ignore();
                }
            }
        }   break;
        case 3:{
            cout<<"Player 1 will go first...\n"; //three player game
            cout<<"Press any key and Enter to roll the dice..."; 
            char key; // declare character  to roll and Prompt use to roll
            cin>>key; //Get the key and start
            cin.ignore(); //ignore enter in buffer key
            //Call random number generator for the dice
            int die=rand()%6+1;//Value from 1 to 6
            for(plyr1, die, nTurns, nPlyrs; die!=1; nTurns++)
            {
              if (die==2) plyr1=pow(plyr1+2, 2); //Score squared if die=2
              else if (die==3) plyr1>0?plyr1--:plyr1==0; 
                                            //score decrements if 3 is rolled
              else if (die==4) plyr1=sqrt(plyr1+4); //add 4 and sqrt if die=4
              else if (die==6) plyr1=2*(plyr1+6); //add 6 and double if die=6
              else plyr1+=die; //add the players score if they don't roll a 1
              cout<<"You rolled a "<<die<<" your score is "<<plyr1
                  <<"\n";
                //Display the current # rolled and show current score
              cout<<"Press any key and Enter to roll the dice or continue..."; 
                //Prompt use to roll again
              cin>>key; //Get the key and roll again
              cin.ignore(); //ignore enter in buffer key
              //Call random number generator for the dice
              die=rand()%6+1;//Value from 1 to 6
            }
            if(die==1) //If player 1 rolls a 1 declare loss and player 2 go
                cout<<"Sorry you rolled a "<<die<<" your turn is over.\n"
                    <<"Your score is "<<plyr1<<". Player 2 will now go.\n";
            cout<<"Player 2 it is now your turn...\n"; //two player game
            cout<<"Press any key and Enter to roll the dice..."; 
            cin>>key; //Get the key and start 
            cin.ignore(); //ignore enter in buffer key
            //Call random number generator for the dice
            die=rand()%6+1;//Value from 1 to 6
            while(die!=1)
            {
              if (die==2) plyr2=pow(plyr2+2, 2); //Score squared if die=2
              else if (die==3) plyr2>0?plyr2--:plyr2==0; 
                                            //score decrements if 3 is rolled
              else if (die==4) plyr2=sqrt(plyr2+4); //add 4 and sqrt if die=4
              else if (die==6) plyr2=2*(plyr2+6); //add 6 and double if die=6
              else plyr2+=die; //add the players score if they don't roll a 1
              cout<<"You rolled a "<<die<<" your score is "<<plyr2
                  <<"\n";
                //Display the current # rolled and show current score
              cout<<"Press any key and Enter to roll the dice or continue..."; 
                //Prompt use to roll again
              cin>>key; //Get the key and roll again
              cin.ignore(); //ignore enter in buffer key
              //Call random number generator for the dice
              die=rand()%6+1;//Value from 1 to 6
              nTurns++; //Increment number of turns
            }
            if(die==1) //If player 1 rolls a 1 declare loss and player 2 go
                cout<<"Sorry you rolled a "<<die<<" your turn is over.\n"
                    <<"Your score is "<<plyr2<<".\n"; //Display player 2 score
            cout<<"Player 3 it is now your turn...\n"; //two player game
            cout<<"Press any key and Enter to roll the dice..."; 
            cin>>key; //Get the key and start
            cin.ignore(); //ignore enter in buffer key
            //Call random number generator for the dice
            die=rand()%6+1;//Value from 1 to 6
            for(plyr3, die, nTurns, nPlyrs; die!=1; nTurns++)
            {
              if (die==2) plyr3=pow(plyr3+2, 2); //Score squared if die=2
              else if (die==3) plyr3>0?plyr3--:plyr3==0; 
                                            //score decrements if 3 is rolled
              else if (die==4) plyr3=sqrt(plyr3+4); //add 4 and sqrt if die=4
              else if (die==6) plyr3=2*(plyr3+6); //add 6 and double if die=6
              else plyr3+=die; //add the players score if they don't roll a 1
              cout<<"You rolled a "<<die<<" your score is "<<plyr3
                  <<"\n";
                //Display the current # rolled and show current score
              cout<<"Press any key and Enter to roll the dice or continue..."; 
                //Prompt use to roll again
              cin>>key; //Get the key and roll again
              cin.ignore(); //ignore enter in buffer key
              //Call random number generator for the dice
              die=rand()%6+1;//Value from 1 to 6
            }
            if(die==1) //If player 1 rolls a 1 declare loss and player 2 go
                cout<<"Sorry you rolled a "<<die<<" your turn is over.\n"
                    <<"Your score is "<<plyr3<<".\n"; //Display player 2 score
            if(plyr1<plyr2 && plyr2>plyr3)
            {
                cout<<"Congratulations Player 2 you have won! What is your \n"
                    <<"name? "; //Take the name of winner
                getline(cin,winr);//get the name of the winner
                cout<<winr<<" your score of "<<plyr2<<" beat player 1's\n"
                    <<"score of "<<plyr1<<" and player 3's score of\n"
                    <<plyr3<<".\n"; //Display player 2 as winner
                hghscr = plyr2; //Set High Score
                outputFile<<hghscr; //Write high score to file
                cout<<"Your score was written to a file.\n";
                cout<<"Do you wish to play again? Y or N\n";
                char key; //Decide if player wants to play again
                cin.get(key); 
                cin.ignore();
                if (key=='Y' || key=='y')
                    keeplay=true;
                else if (key=='N' || key=='n')
                    keeplay=false;
                else 
                {
                    cout<<"You have entered something other than Y or N.\n";
                    cout<<"Do you wish to play again? Y or N\n";
                    char key; //Decide if player wants to play again
                    cin.get(key); 
                    cin.ignore();
                }
            }
            else if(plyr1>plyr2 && plyr3<plyr1)
            {
                cout<<"Congratulations Player 1 you have won! What is your \n"
                    <<"name? "; //Take the name of winner
                getline(cin,winr);//get the name of the winner
                cout<<winr<<" your score of "<<plyr1<<" beat player 2's\n"
                    <<"score of "<<plyr2<<" and player 3's score of\n"
                    <<plyr3<<".\n"; //Display player 1 as winner
                hghscr = plyr1; //Set High Score
                outputFile<<hghscr; //Write high score to file
                cout<<"Your score was written to a file.\n";
                cout<<"Do you wish to play again? Y or N\n";
                char key; //Decide if player wants to play again
                cin.get(key); 
                cin.ignore();
                if (key=='Y' || key=='y')
                    keeplay=true;
                else if (key=='N' || key=='n')
                    keeplay=false;
                else 
                {
                    cout<<"You have entered something other than Y or N.\n";
                    cout<<"Do you wish to play again? Y or N\n";
                    char key; //Decide if player wants to play again
                    cin.get(key); 
                    cin.ignore();
                }
            }
            else if (plyr3>plyr2 && plyr3>plyr1)
            {
                cout<<"Congratulations Player 3 you have won! What is your\n"
                    <<"name? "; //Take the name of winner
                getline(cin,winr); //get the name of the winner
                cout<<winr<<" your score of "<<plyr3<<" beat player 2's\n"
                    <<"score of "<<plyr2<<" and player 1's score of\n"
                    <<static_cast<int>(plyr1)<<".\n"; //Display player 1 as winner
                hghscr = plyr3; //Set High Score
                outputFile<<hghscr; //Write high score to file
                cout<<"Your score was written to a file.\n";
                cout<<"Do you wish to play again? Y or N\n";
                char key; //Decide if player wants to play again
                cin.get(key); 
                cin.ignore();
                if (key=='Y' || key=='y')
                keeplay=true;
            else if (key=='N' || key=='n')
                keeplay=false;
                else 
                {
                    cout<<"You have entered something other than Y or N.\n";
                    cout<<"Do you wish to play again? Y or N\n";
                    char key; //Decide if player wants to play again
                    cin.get(key); 
                    cin.ignore();
                }
            }
        }   break;    
        default: 
        {
            cout<<"You have entered something other than a number.\n"
                <<"Please start the game over and try again...\n";
            cout<<"Do you wish to play again? Y or N\n";
            char key; //Decide if player wants to play again
            cin.get(key); 
            cin.ignore();
            if (key=='Y' || key=='y')
                keeplay=true;
            else if (key=='N' || key=='n')
                keeplay=false;
            else 
            {
                cout<<"You have entered something other than Y or N.\n";
                cout<<"Do you wish to play again? Y or N\n";
                char key; //Decide if player wants to play again
                cin.get(key); 
                cin.ignore();
            }
                //If number of players is not a number end program or start over
        }
        
    }
    }while(keeplay==true); //Keep playing if player want
    
    //Close files
    inputFile.close(); //Close input file
    outputFile.close(); //close output file

    //Exit stage right!
    return 0;
}
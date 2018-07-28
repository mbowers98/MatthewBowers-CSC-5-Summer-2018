/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 29th, 2018, 11:20 AM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    string Name1;// This is the name of the player
    short Card2,Card3,Card4;// Card Values Drawn MAX DRAWN is 4 per player
    short p1total;
    p1total=Card2,Card3,Card4;
    char choice2;
   

    bool choice1; //The choice if the player wants to play a game of blackjack
   
    
    
    short  seed;           
    srand (time(NULL));
    short Dealer = rand() % 8 +15 ; 
    
    
    
    
    
    for(int draw=1; draw <= 2; draw ++)   
    {
    short  seed;
    
    short Card = rand() % 10 ;// Creates a random number from 0-9
    short House = rand() % 4 ;// creates a random number from 0-3
    srand (time(NULL));
  
    
    switch(Card) // switch statement to get the random card a physical adaptation 
    {
        case 9 : 
        {
            cout<< "Face Card of " ;
        }
        break;
        case 8 : 
        {
            cout<< "Nine of " ;
        }
        break;
        case 7 :
        {
            cout << "Eight of " ;
        }
        break;
        case 6 :
        {
            cout << "Seven of " ;
        }
        break;
        case 5: 
        {
            cout << "Six of " ;
        }
        break;
        case 4 :
        {
            cout << "Five of " ;
        }
        break;
        case 3:
        {
            cout<< "Four of " ;
        }
        break;
        case 2 :
        {
            cout << "Three of " ;
        }
        break;
        case 1 :
        {
            cout << "Two of " ;
        }
        break;
        case 0 :
        {
            cout <<"Ace of " ;
        }
        break;
    }
  
    
    if(House<=4)
    {
     switch(House)// Gets a random house to add on to the card.
     {
         case 3: {
             cout << "Hearts" << endl;
         }
         break;
         case 2: {
             cout << "Diamonds" << endl;
         }
         break;
         case 1: {
             cout << "Spades" << endl;
         }
         break;
         case 0: {
             cout << "Clubs" << endl;
         }
         break;
     }
     
     
    }
    else // else error if house didnt equal to or greater then 4 an error would appear 
    {
        cout << "Program Error" << endl;
    }
    
    }
    cout <<"Enter Values of each card Drawn(Ace can have a value of 11,10 or 1)\n"
            "Card 1: " ;
    cin >> Card2;
    cout <<"Card 2:";
            cin >> Card3;
    int p1total= Card2+Card3; // this is the total of the two cards so far 
    if(p1total<21) // if its nota a blackjack the user may chose to go again
    {
        cout << p1total << endl;
     cout << "Would You May Draw one more time, Would you want to? Y/yes N/no" << endl;
     cin >> choice2;
       
     if(choice2=='y' || choice2 =='Y' )// by choseing 'y' they are drawing another card to add to there hand. 
     {
   
         
    short  seed;
    srand (time(NULL));
    
    short RanCard = rand() % 10 ;
    
    short House4 = rand() % 4 ;
    
   
    
    switch(RanCard) // This switch statement choses another random card. 
    {
        case 9 : 
        {
            cout<< "Face Card of " ;
        }
        break;
        case 8 : 
        {
            cout<< "Nine of " ;
        }
        break;
        case 7 :
        {
            cout << "Eight of " ;
        }
        break;
        case 6 :
        {
            cout << "Seven of " ;
        }
        break;
        case 5: 
        {
            cout << "Six of " ;
        }
        break;
        case 4 :
        {
            cout << "Five of " ;
        }
        break;
        case 3:
        {
            cout<< "Four of " ;
        }
        break;
        case 2 :
        {
            cout << "Three of " ;
        }
        break;
        case 1 :
        {
            cout << "Two of " ;
        }
        break;
        case 0 :
        {
            cout <<"Ace of " ;
        }
        break;
    }
  
    
    if(House4<=4)
    {
     switch(House4)
     {
         case 3: {
             cout << "Hearts" << endl;
         }
         break;
         case 2: {
             cout << "Diamonds" << endl;
         }
         break;
         case 1: {
             cout << "Spades" << endl;
         }
         break;
         case 0: {
             cout << "Clubs" << endl;
         }
         break;
     }
  
    }
     }
     

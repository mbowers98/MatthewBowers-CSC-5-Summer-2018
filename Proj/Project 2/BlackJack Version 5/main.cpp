/* 
 * File:   main.cpp
 * Author: Matthew Bowers 
 * Created on May 29th, 2018, 11:20 AM
 * Purpose: BlackJack Final Project 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cmath>
#include <fstream>
#include <cstdlib> // Exit Function
#include <ctime>
#include <vector>
#include <numeric>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void function();
int betting(int &refVar);
float betting(float &refVar);
bool isValid(float number);
void WinBet(float = 40);
void bubbleSort(int Cards[], int n);
void printArray(int [], int size);
void swap(int *xp, int *yp);
int search(int arr[], int n, int x);
void Points1(vector<float> Points);
//Execution Begins Here!
int main(int argc, char** argv) {
  
    string Name1;// This is the name of the player
    const int MAX_CARD = 3;
    int Cards[MAX_CARD];// Card Values Drawn MAX DRAWN is 3 per player
    short p1total;
    p1total= Cards[0]+Cards[1]+Cards[2];
    char choice2,choice3;
    float bet[2];
    int n = sizeof(Cards)/sizeof(Cards[0]);
    void selectionSort(int arr[], int n);
    vector<float> Points= {bet[0],bet[1]};
    bool choice1; //The choice if the player wants to play a game of blackjack
    float point = 8.32; // Number of points before power equation
    int TotalP = (pow((2),point)); // The amount of points that the person can get if they win
    ofstream outputFile; //Creating the file for the thank you message 
    ifstream inputfile; // Getting and reading it
    string names;
    
    outputFile.open("ThankYou.txt");
    {
    outputFile << "Thank you For Playing BlackJack\n"
            " Created by Matthew Bowers Summer 2018" << endl;
     
    outputFile.close();
    }
    cout<< "\tWelcome To BlackJack!\n"
            "\tYou are trying to get '21' or as close to it as you can without going over\n"
            
            "\tYou can win " << TotalP << " points ,if you win!\n" << 
            "\tWould You like to play? '1' for yes or '0' for no" << endl;
    
    cin >> choice1;
  
    if(choice1== true)   // if the user selects '1' it runs the program
    {    
        
           cout << "Enter Player One's Name!" << endl;
           cin >> Name1;
    
    cout << "Welcome " << Name1 << "!" << endl;
    cout << "\n" ;
    
    cout<< "Now you can place bets when playing" << endl; 
    cout<< "You have 100$ and can bet any amount you want 1-100$ "
          "if you win you double the amount you bet" << endl;
   
   
    
    cout << "Does your bet include change? (ex. $4.64)"
            "if so press Y/ For Yes or N/ for no" << endl;
    cin >> choice3;
   if(choice3=='Y' || choice3=='y') 
   {
     cout << "Enter amount that you want to bet ( 1 - 100.00 )" << endl;
    cin >> bet[1];
    betting(bet[1]);
    if(isValid(bet[1]))
    {
        "Thank you for your bet"
                ""
                ""
                ""
                "\n";
    }
    else 
    {
        cout << "this value is out of range!" << endl;
    }
   } 
   else 
   {
       cout << "Enter amount that you want to bet ( 1 - 100 )" << endl;
       cin >> bet[0];
       betting(bet[0]);
       
       if(isValid(bet[0]))
    {
        "Thank you for your bet"
                ""
                ""
                ""
                "\n";
    }
    else 
    {
        cout << "this value is out of range!" << endl;
    }
   }
    cout << ""
            ""
            ""
            ""
            "\n" ;
    cout << Name1 << " Goes First!" << endl;
    
    Points= {bet[0],bet[1]};
    cout << "You drew a" << endl; 
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
    cout <<"Enter Values of each card Drawn(Ace can have a value of 11,10 or 1)\n";
    for(int i=0; i < 2; i++)
    {
        cout << "Card " << (i+1) << ":";
        cin >> Cards[i];
    }
    int p1total= Cards[0]+Cards[1];// this is the total of the two cards so far 
    if(p1total==21)
    {
        cout << "CONGRATS BLACKJACK!!" << endl;
        Points1(Points);
    }
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
    
    cout << "Enter The Value Of Your New Card" << endl;
    cin >> Cards[2]; // this is the value of the new card they have drawn
    
    p1total=Cards[0]+Cards[1]+Cards[2]; // This is the new total of the cards drawn
    cout<< "You are now at " << p1total << endl;
    
    if(p1total<=21 && Dealer <=21) // if function determins a winner for the game, it can lead to a tie. 
    {
        if(p1total>Dealer)
        {
            cout << "Congrats " << Name1 << " you beat the dealer! " << endl;
            bubbleSort(Cards,n);
            Points1(Points);
            cout << "Cards you won with from least to greatest " << endl;
            printArray(Cards,n);
                    
                    
        inputfile.open("ThankYou.txt")  ;// this prompt reads a message to thank the user for playing the game, only read by beating the dealer after drawing an extra card 
        inputfile >> names; 
        cout << names << " you!" << endl;
        inputfile.close();
        }
        
        
        else if(p1total==Dealer)
        {
            cout << "What are the odds its a TIE between you and the dealer!";
            cout <<"\n You didn't lose any money on this run" << endl;
        }
        else
        {
            cout << "The dealer won!";
            cout << "\n You lost all the money you bet D:" << endl;
        }
    }
    else if(p1total>21)
    {
        {
            cout << Name1 << "you went over 21! Dealer wins!" ;
                cout << "\n You lost all the money you bet D:" << endl;
        }
    }
    else if (Dealer>21)
    {
        cout << Name1 << " You Win the dealer went over!";
        cout << "\n You lost all the money you bet D:" << endl;
         
    }
         
     }
     else if(choice2=='n' || choice2=='N')
     {
     if(p1total<=21 && Dealer<=21)
            {
            if(p1total>Dealer)
            {
                cout << "Congrats You Beat The Dealer!" << endl;
                Points1(Points);
                
            }
            else
            {
                cout << "Sorry The Dealer Beat you!" << endl;
                cout << "\n You lost all the money you bet D:" << endl;
            }
            }
    else if (p1total==21)
    {
        cout << "Congrats Blackjack !!" << endl;
    cout << Name1 << " Won !" << endl;
    Points1(Points);
    }
    else if(Dealer>21)
    {
       cout<< "The Dealer went over you win!!" << endl;
       cout<< "Recap on your cards:" ;
       selectionSort(Cards,n);
       printArray(Cards, n);
       Points1(Points);
    }
    
    else 
    {
       
        cout << "You went over 21" << endl;
        cout << "Dealer Won !" << endl;  
        cout << "\n You lost all the money you bet D:" << endl;
        cout << "\n The last card you drew was";
        search(Cards,n,2);
    }
    }
    }
    
   
   
    
    }
    else
    {
       function(); // if the user does not chose 1 it ends the program right after. 
    }
    return 0;
    }
    
void function()
{
    
    cout << "The Program is now terminated." << endl; 
}

int betting(int &refVar)
{
    
    int total= 100- refVar;
    
    
    cout << "You Bet " << refVar << " $ dollars!\n"; 
    cout << "Balance:" << total << "$" << endl ;
            
            return 100-refVar;
}
float betting(float &refVar)
{
    
    float total= 100- refVar;
   
    
    cout << "You Bet " << refVar << " $ dollars!\n"; 
    cout << "Balance:" << total << "$" << endl ;
            
            return 100-refVar;
}


bool isValid(float number)
 {
 bool status;
 if (number >= 1 && number <= 100)
 status = true;
 else
 status = false;
 
 return status;
 } 

int WinCards(int Cards[3])
{
    cout<< "your winning cards were" << endl;
    for(int i=0; i < 2; i++)
    {
        cout << "Card" << (i+1) << ":" << Cards[i] << endl;
    }
}
void WinBet(int WinBet[])
{
   int sum ;
    for(int i=0; i < 2; i++)
    {
        sum += WinBet[i];
    }
   cout << sum << endl;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int Cards[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (Cards[j] > Cards[j+1])
              swap(&Cards[j], &Cards[j+1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);


}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n-1; i++)
    {
  
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}

void Points1(vector<float> Points)
{
    
    int sum = std::accumulate(Points.begin(), Points.end(), 0);
    cout << "You won " << sum*2 << " amount of cash" << endl;
    
}
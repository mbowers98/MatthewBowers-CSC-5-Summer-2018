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
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables

    //Initial Variables
     // declare variables
    short Guess; // this is going to be the Users guess: Values = 1-100 
    short  seed; //This is for the random number variable  
    seed = time (0);
    srand(seed);
    short Random = rand() % 100 + 1; // This is the variable for producing a random number: Values = 1- 100
    
    do {
        cout << "Guess a number between 1 - 100"
                "\n";
        cin >> Guess;
        
        if (Guess> Random)
            cout << "Your Guess Is To High!\n";
        else if (Guess < Random)
            cout << "Your Guess is to low!\n";
    }
    while (Random != Guess);
    cout << "Thats the correct guess!";
                    
                   
                
      
   
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
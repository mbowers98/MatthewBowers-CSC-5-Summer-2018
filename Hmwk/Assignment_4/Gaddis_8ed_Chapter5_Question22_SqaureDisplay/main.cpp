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
#include <math.h>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables

    //Initial Variables
    int X; // This Variable is used to set the amount of stars in each box  
    int Y; // This Variable is used to set the amount of stars in each box 
    int number; // this is the number that the user picks: Values 1 - 15
    
    cout << "Enter A Number\n"
            "And A Box Will Show\n";
    cin >> number;
    
    if (number > 15)
    {
        cout << "Please enter a number less than 15\n";
    cin >> number ;
    }
    
            else if (number <=0)
            {
            cout << "Please enter a number greater than 0\n";
    cin >> number ;
            }
    else 
        for (Y=1;(Y<=number); ++Y)
        {
            for (X=1;(X<=number); ++X)
            cout << "x";
            cout << "\n";
          
        }
                
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
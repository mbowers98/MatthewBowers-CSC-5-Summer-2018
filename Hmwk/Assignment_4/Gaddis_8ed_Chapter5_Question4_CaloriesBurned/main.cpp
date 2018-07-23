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
 const float Burnt = 3.6; //Burnt calories per minute is always 3.6
    short min; // This is the variables for the amount of minutes ran: Values 1-30
    short Cal = 0; // This is the Variable for the amount of the calories burnt
    
    cout << "The Amount of Calories burnt\n"
            "at 3.6 calories burnt a minute\n";
cout << "Minutes Ran\t\tCalories Burnt" <<endl;


for(min=5; min <= 30; min += 5 )
{
    Cal= min * Burnt; 
cout << min << "\t\t\t" << Cal << endl;
}
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
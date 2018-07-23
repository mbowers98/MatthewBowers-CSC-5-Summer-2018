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
    const short Member= 2500; // This Variable is the starting base price for the membership Value= 2500
    float tax= .04; // This is the amount that is increases by each year starting with the first year: Value = .04
    short Rate; // This is the cost with the increased rate for each year values 1 - 4000
    short year; // This is the amount of years that are passed by : Values 1-6 years 
    
    
    cout << "The country club membership is increasing at 4% for the next 6 years\n"
            "-------------------------------------------------\n";
    
    for(year = 1; year <=6; year++)
    {
        Rate = Member *(1+year*tax);
        cout << "Year " << year << "\t\t Cost  " << Rate << "$" << endl;
    }
    
            
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
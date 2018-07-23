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
    double Seconds;
    double Min;
    double Hour;
    double Day;
    
    cout<< "Time Calculator: Enter the amount of seconds \n";
    cin >> Seconds; 
    Min = Seconds/60;
    Hour = Seconds/3600;
    Day = Seconds/ 86400;
    
    if (Seconds >= 86400)
        cout << "The amount of day(s) is " << Day << endl;
    else if (Seconds >= 3600)
        cout << "The amount of hour(s) is " << Hour << endl;
    else if (Seconds >= 86400)
        cout << "The amount of day(s) is" << Day << endl;

    else if (Seconds >= 60)
        cout << "The amount of of minute(s) is " << Min << endl;
    else if (Seconds <= 59)
        cout << "The amount of seconds is " << Seconds << endl;
    
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
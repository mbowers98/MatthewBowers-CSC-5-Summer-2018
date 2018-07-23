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
   short year= 1; // This the the years that pass by , that the ocean levels rise yearly by values= 1-25
    float Ocean = 1.5; // This is the variable for the amount that the ocean rises each year Values = 1.5
    
    cout << "Year       Increase In Ocean Level\n";
    
    for (short year= 1; year <=25; year++, Ocean++)
        cout << year << "                     " << Ocean << endl;
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
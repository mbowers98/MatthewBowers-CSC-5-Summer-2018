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
    double ReplacementCost;
    double cost;
    
    
    cout << "What is the replacement cost of the building" << endl;
    cin >> ReplacementCost;
   cost=(ReplacementCost) * .8;
            
    cout << "The minimum amount needed to be insured is: $" << cost << endl;
    //Initial Variables
    
    
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
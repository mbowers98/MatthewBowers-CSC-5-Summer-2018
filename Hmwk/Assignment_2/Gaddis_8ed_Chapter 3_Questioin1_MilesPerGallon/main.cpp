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
    double Gas ;
    double FullTank;
    
    
    cout << "How many miles do you get on a full tank?" << endl;
    cin >> FullTank;
    cout << "How many gallons of gas does your car hold?" << endl;
    cin >> Gas;
   
    double MPG = FullTank /Gas;
   
   
    cout <<"Your car gets " << MPG << " miles per a gallon" << endl; 
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
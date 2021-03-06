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
    
    //Map/Process Inputs to Outputs
    double purchase = 92;
    double statetax = .04 * purchase; 
    double countytax = .02 * purchase;
    double totaltax = statetax + countytax;
    
    cout << "the total amount of sales tax on the purchase is " << totaltax << endl;
    //Exit program!
    return 0;
}
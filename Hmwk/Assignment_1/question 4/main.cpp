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
double foodcost = 88.67 ;
double foodtax = foodcost * .0675;
double totaltip = (foodcost + foodtax) * .2 ;
double totalcost = (foodcost + totaltip + foodtax);

    cout << "The cost of the meal is = $" << foodcost << endl;
    cout << "The cost of the tax is = $" << foodtax << endl;
    cout << "The cost of the tip was = $" << totaltip << endl;
    cout << "The cost of the total meal is = $" << totalcost << endl;
    //Exit program!
    return 0;
}
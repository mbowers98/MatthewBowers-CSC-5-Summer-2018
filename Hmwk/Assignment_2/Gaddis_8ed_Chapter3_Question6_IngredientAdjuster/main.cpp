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
    double sugar = 1.5/48;
    double butter = 1.0/48;
    double flour = 2.75/48;
    double cookie;
    //Initial Variables
    cout << "How many cookies are you making?" << endl;
    cin >> cookie;
  double SugarNeeded= sugar * cookie;
  double ButterNeeded= butter * cookie;
double FlourNeeded= flour * cookie;   
  cout << "You will need " << SugarNeeded << " cup(s) of sugar." << endl;
  cout << "You will need " << ButterNeeded << " cup(s) of butter." << endl;
  cout << "You will need " << FlourNeeded << " cup(s) of flour." << endl; 
    
    //Map/Process Inputs to Outputs


    //Exit program!
    return 0;
}
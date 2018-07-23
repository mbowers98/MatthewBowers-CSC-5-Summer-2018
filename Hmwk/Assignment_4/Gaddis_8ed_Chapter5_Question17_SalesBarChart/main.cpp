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
  string star = ""; // for the stars for each store Value 1-100
    short sale; // The amount sold for each store 1- 10000, cant be a negative number
    short store; // The Variable for the amount of stars Value: 1- 5
    
    for (int store = 1; store <= 5; store++)
    {
        cout << "Enter today's sales for Store " << store << ":" << endl;
        cin >> sale;
        star += "Store " + to_string(store) + string(":");
  
        
        for(int x= 0; x<sale/100; x++) {
            star += "*";
        }    
        star += "\n";
    }
    
    cout<<star;
   return 0;

}
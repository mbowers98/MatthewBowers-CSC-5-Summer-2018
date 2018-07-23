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
    int Books;
    
    cout << "How Many Books Did You Purchase This Month? \n";
    cin >> Books;
    
    if (Books >= 4)
        cout << "You Have Earned 60 Points!";
    else if (Books==3 )
        cout << "You Have Earned 30 Points!";
    else if (Books ==2)
        cout << "You Have Earned 15 Points!";
    else if (Books==1)
        cout << "You Have Earned 5 Points!";
    else 
        cout << "You Have Earned 0 Points.";
                
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
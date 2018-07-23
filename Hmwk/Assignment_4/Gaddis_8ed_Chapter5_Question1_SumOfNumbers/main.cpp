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
    // Use an integer instead
    unsigned short number; //The Number the User is going to enter 0 - 1000
    unsigned short sum=0; // The Sum of the numbers added can be anything greater than 0
    cout << "Please Enter A Number Greater Than 0\n";
    cin >> number; //The Variable they are entering 
    
    while ( number <= 0) // Number Has to be greater than 0
    {
cout << "Invalid, Enter a number greater than 0\n";
        cin >> number;// Allows the user to enter another number 
}
    for (int counter =0; counter <= number; counter++)
    {
        sum = sum + number;
        counter++;
    }
    
    cout << "The sum of numbers from 1 to " << number << " is " << sum << endl;
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
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
   short C ; // This is the variable for Celsius Values range from 1-100 
  
   short F; // This is the variable for Fahrenheit values range from 1-100
   
   cout << "Table for Celsius 0 - 20\n"
           "--------------------------------\n"
"Celsius \t\t Fahrenheit\n"
           ;
   
   for(C = 0; C <= 20; C++)
	{

		F =(C*1.8)+32;
		cout << C;
		cout << "\t\t\t \t"<< F << endl;
	}
    //Exit program!
    return 0;
}
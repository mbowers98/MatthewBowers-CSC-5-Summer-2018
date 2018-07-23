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
    int number_1;
    int number_2;
    int sum;
    int answer;
    unsigned seed=time(0);
    srand(seed);
    number_1= 10 + rand()%99;
    number_2= 10+ rand()%99;
    sum= number_1+number_2;
    
    cout<< setw(3) << number_1<< endl;
    cout<< setw(3) << number_2 << " + " << endl;
    cout<< setw(3) << "-------\n" << endl;
    cout << "Enter your Answer\n";
    cin >> answer;
    if (sum == answer)
        cout << "Congrats your are correct!";
    else 
        cout << "You were incorrect.";
 
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
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
    double TestScore1;
    double TestScore2;
    double TestScore3;
    double TestScore4;
    double TestScore5;

    cout << "Enter first test score" << endl;
    cin >> TestScore1;
    cout << "Enter second test score" << endl;
    cin >> TestScore2;
  cout << "Enter third test score" << endl;
    cin >> TestScore3;
 cout << "Enter fourth test score" << endl;
    cin >> TestScore4;
 cout << "Enter fifth test score" << endl;
    cin >> TestScore5;
    double TestAverage= (TestScore1 + TestScore2 + TestScore3 + TestScore4 + TestScore5)/5;
    cout << "The average test score is " << TestAverage << endl;
            

    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
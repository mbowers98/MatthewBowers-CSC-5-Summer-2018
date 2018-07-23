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
    double RecLength_1;
    double RecWidth_1;
    double RecLength_2;
    double RecWidth_2;
    double RecArea_1;
    double RecArea_2;
    
    cout << "Enter The Length of the First Rectangle" << endl;
    cin >> RecLength_1;
    cout << "Enter The Width of the First Rectangle" << endl; 
    cin >> RecWidth_1;
    RecArea_1 = (RecLength_1)*(RecWidth_1);
    cout << "Enter The Length of the Second Rectangle"<< endl;
    cin >> RecLength_2;
    cout << "Enter The Width of the Second Rectangle" << endl;
    cin >> RecWidth_2;
   RecArea_2 = (RecLength_2)*(RecWidth_2);
    
    if (RecArea_1 > RecArea_2)
    cout << "Rectangle 1 has a larger area" << endl;
    else if (RecArea_1 < RecArea_2) 
    cout << "Rectangle 2 has a larger area" << endl;
    else if (RecArea_1 == RecArea_2)
    cout << "Rectangle 1 and Rectangle 2 have the same area" << endl;
    
           
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
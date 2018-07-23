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
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
float kineticEnergy(int, int);
int main(int argc, char** argv) 
{
	int Mass,Velo;	
	cout << "\nThis program calculates the amount\n"
	     "of kinetic energy an object has." << endl;
	    cout << "Enter the object’s mass (KILOGRAM): ;
	cin  >> Mass;
	cout << "Enter the object’s velocity (METERS): ";
	cin  >> Velo;
	cout << "This object has is "
	 << kineticEnergy(Mass, Velo) << " joules." << endl;
	return 0;
}
float kineticEnergy(int Mass, int Velo)
{   
	return .5 * Mass * pow(Velo, 2);
}
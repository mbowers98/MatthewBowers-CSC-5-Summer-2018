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
double calculateRetail();
int main(int argc, char** argv) 

{
	double RetalPrice;
	cout << "This program calculates and displays the retail price of an item.\n";
	RetalPrice = calculateRetail();
	cout << fixed << showpoint << setprecision(2);
	cout << "The retail price of the item is $" << RetalPrice <<endl;
	return 0;
}
double calculateRetail()
{
	float Cost,Markup;
	do
        {
		cout << "What is the item's wholesale cost? ";
		cin  >> Cost;
		if (Cost < 0)
		{
			cout << "INVALID INPUT" << endl; cout << "Wholesale cost must be a positive number.\n";
		}
	} while (!(Cost > 0));
	do
	{
		cout << "What is the item's markup percentage? ";
		cin  >> Markup;
		if (Markup < 0)
		{
			cout << "INVALID INPUT!"
				 << "must be a postive number!";	
		}
	} while (!(Markup > 0));
	Markup /= 100;
	return Cost * (1 + Markup);
}
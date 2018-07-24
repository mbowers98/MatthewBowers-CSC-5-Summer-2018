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
int main(int argc, char** argv) 
{
	int jars = 5;
	string salsa[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int sales[jars];


	cout << "Enter the number of jars sold for each type of salsa.\n";
	for (int i = 0; i < jars; i++)
	{
		int num;
		do
		{
			cout << salsa[i] << ": "; 
			cin  >> num;

			if (num < 0)
				cout << "Error! Jars sold must be greater then 0.\n";

		} while (num < 0);
		sales[i] = num; 
	}

	int high, low, tot = 0;
	high = low = sales[0];

	cout << "\n     Salsa Sales Report\n"
	     << "---------------------------\n"
	     << fixed << showpoint << setprecision(2);

	for (int i = 0; i < jars; i++)
	{
		cout << salsa[i] << ": " << sales[i] << " jars" << endl;
		tot += sales[i];

		if(sales[i] > high)
		{
			high = sales[i];
		}
		else if (sales[i] < low)
		{
			low = sales[i]; 
		}
	}

	cout << "Total sales: " << tot << " jars" << endl;
	cout << "Highest selling products: ";

	for (int i = 0; i < jars; i++)
	{
		if (sales[i] == high)
			cout << salsa[i] << " ";
	}

	cout << endl;
	cout << "Lowest selling products:  ";

	for (int i = 0; i < jars; i++)
	{
		if (sales[i] == low)
			cout << salsa[i] << " ";
	}

	cout << endl;

	return 0;
}
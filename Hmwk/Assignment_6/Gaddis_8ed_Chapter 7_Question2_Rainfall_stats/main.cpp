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
int main(int argc, char** argv){
    const int MONTHS = 12;
	int count = 0;
	string name[MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	double rain[MONTHS], avg, year = 0, highest, lowest;
	string highMonth, lowMonth;

	for (count = 0; count < MONTHS; count++) 
	{
		cout << "How many inches of rain does " << name[count] << " have? \n";
		cin >> rain[count];
		while (rain[count] < 0)
		{
			cout << "Please enter a number greater than 0." << endl;
			cin >> rain[count];
		}
	}

	highest = rain[0]; 
	lowest = rain[0]; 
	for (count = 1; count < MONTHS; count++)
	{
		if (rain[count] > highest)
		{
			highMonth = name[count];
			highest = rain[count];
		}
		else if (rain[count] < lowest)
		{
			lowMonth = name[count];
			lowest = rain[count];
		}
	}

	avg = year / MONTHS;

	for (count = 0; count < MONTHS; count++)
	{
		year += rain[count];
		cout << name[count] << "has " << rain[count] << " inches of rainfall.\n";
	}

	cout << endl << setprecision(2) << fixed;
	cout << "Total Rainfall throughout the year is " << year << " inches" << endl;
	cout << "The average monthly rainfall is " << avg << " inches" << endl;
	cout << "The month with the highest amount of rainfall is " << highMonth << " with " << highest << " inches." << endl;
	cout << "The month with the lowest amount of rainfall is " << lowMonth << " with " << lowest << " inches." << endl;
        
        return 0;
        }
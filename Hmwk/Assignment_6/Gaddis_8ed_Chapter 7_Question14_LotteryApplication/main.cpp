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
	int winningDigits[5];
	int player[5];
	int digit, match = 0;
	srand(time(NULL));			
	for (int i = 0; i < 5; i++)
	{
	 	winningDigits[i] = 0 + rand() % 9;
	} 
	cout << "Enter your 5 lottery picks in the range of 0 to 9,\n"
		 << "one number at a time.\n";
	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Number " << (i + 1) << ": ";
			cin  >> digit;
			if (digit < 0 || digit > 9)
			{
				cout << "Invaild number!\n"
					 << "Pick a number in the range of 0 to 9.\n";
			}
		} while (digit < 0 || digit > 9);
		player[i] = digit;
	}
	for (int i = 0; i < 5; i++)
	{
		if (winningDigits[i] == player[i])
			match++;
	}
	cout << "Winning digits : ";
	for (int i = 0; i < 5; i++)
	{
		cout << winningDigits[i] << " ";
	}
	cout << endl;
	cout << "player digits  : ";
	for (int i = 0; i < 5; i++)
	{
		cout << player[i] << " ";
	}
	cout << endl;
	cout << "Matching digits: " << match << endl;
	return 0;
}
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

int searchList(int [], int, int);

int main(int argc, char** argv)
{
	const int NUMS = 10;
	int Picks[NUMS] = { 13579, 26791, 26792, 33445, 55555,
						62483, 77777, 79422, 85647, 93121 };

	int WinNums,		// Holds winning numbers
		Search;			// Holds search results

	// Ask user to enter a five-digit number
	cout << "Enter this week’s winning five-digit number: ";
	cin  >> WinNums;

	// Search the array for WinNums
	Search = searchList(Picks, NUMS, WinNums);

	// Report whether or not one of the tickets is a winner this week.
	if (Search == -1)
		cout << "Sorry, no winning ticket this week.\n";
	else
	{
		cout << "Congratulations!\nYou have the winning five-digit number: " 
			 << Picks[Search] << endl;
	}

	return 0;
}
int searchList(int list[], int size, int value)
{
	int index = 0;			
	int position = -1;		
	bool found = false;		

	while (index < size && !found)
	{
		if (list[index] == value)	
		{
			position = index;		
			found = true;			
		}
		index++;					
	}
	return position;				
}
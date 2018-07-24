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
int Search( const int[], int, int);
const int size = 10;

//Execution Begins Here!
int main(int argc, char** argv) {
 
	
	int winNums[size] = {13579, 26791, 26792, 33445, 55555,
						 62483, 77777, 79422, 85647, 93121};
					    
	int lottery;
	int entnum;
	
	cout << "Enter the charge account number:\n";
	cin >> entnum;
	
	
	lottery = Search(winNums, size, entnum);
	
	
	if (lottery == -1)
		cout << "Sorry better luck next time.";
		
	
	else
	{
		cout << "You're a winner!!!\n\n";
		
		
	}

	return 0;
}

int Search(const int array[], int SIZE, int value)
{
	int first = 0,			
		last = SIZE - 1,    
		middle,				
		position = -1;		
	bool found = false;    
 
	while(!found && first <= last)
	{
		middle = (first + last) / 2; 	
		if (array[middle] == value)		
		{
			found = true;
			position = middle;
		}
		
		else if (array[middle] > value)  
		{
			last = middle - 1;
		}
		
		else 								
		{
			first = middle + 1;
		}
	}
	return position;                      
}
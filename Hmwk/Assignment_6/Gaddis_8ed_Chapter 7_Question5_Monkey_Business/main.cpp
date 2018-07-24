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

	const int mkys = 3;
	const int days = 7;
	int food[mkys][days];
	double pounds, least, most, sum = 0;
	


	cout << "Input how many pounds of food each monkey ate each day.\n";
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			do
			{

				cout << "Monkey #" << (row + 1) << " on day #" << (col + 1)
					 << " ate: ";
				cin  >> pounds;

				if (pounds < 0)
				{
					cout << "Error! Number of pounds must be greater than 0.\n";
				}

			} while (pounds < 0);

			food[row][col] = pounds;


			// Get total food eaten per day by the whole family of monkeys.
			sum += pounds;
		}
		cout << endl;							// make blank space
	}

	
	least = most = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			
			if (food[row][col] < least)
			{ 
				least = food[row][col];
			}
			if (food[row][col] > most)
			{ 
				most = food[row][col];
			}
		}
	}

	cout << "\n             Monkey Weekly Food Report\n"
		 << "             by the whole family of monkeys\n"
		 << "----------------------------------------------------\n";
	cout << fixed << showpoint << setprecision(1);
	cout << "Average amount of food eaten per day : "
		 << sum / 21.0 << " pounds.\n";
	cout << "Least amount of food eaten: " << least << " pounds.\n";
	cout << "Greatest amount of food eaten: " << most << " pounds.\n";

	return 0;
}
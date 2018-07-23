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
double calcData(int, double, double, double);
double calcData(double, double);

int main(int argc, char** argv) {
	char   InOut;
	int    NumOfDays;
	float DailyRate,
		   ServChges,
		   MedChges,
		   TotChges;
	     cout << "Enter (I) for in-patient\nEnter (O) for out-patient\n";
	cin  >> InOut; 
	switch(InOut)
	{
		case 'i' :
		case 'I' :  do
					{
						cout << "How many days were spent in the hospital? ";
				   		cin  >> NumOfDays;

				   		if (NumOfDays < 0)
				   		{
				   			cout << "Number of days must be greater than 0.\n";
				   		}

				   	} while(NumOfDays < 0);

				   	do
				   	{
				   		cout << "What was the daily rate? ";
				   		cin  >> DailyRate;

				   		if (DailyRate < 0)
				   		{
				   			cout << "Daily rate must be greater than 0.\n";
				   		}

				   	} while(DailyRate < 0);
		case 'o' :
		case 'O' :  do
				    {
						cout << "Enter the charges for hospital services "
					    	 << "(lab tests, etc.): ";
				   		cin  >> ServChges;

				   		if (ServChges < 0)
				   		{
				   			cout << "Charges for hospital services must be "
				   					"greater than 0.\n";
				   		}
				    } while (ServChges < 0);
				    do
				    {
				    	cout << "Enter the hospital medication charges: ";
				    	cin  >> MedChges;

				    	if (MedChges < 0)
				    	{
				    		cout << "Hospital medication charges must be greater"
				    			 << " than 0.\n";
				    	}
				    } while(MedChges < 0);
	}
	cout << "\n        Patient hospital stay report\n"
		 << "----------------------------------------------------\n";
	cout << right << fixed << showpoint << setprecision(2);
	switch(InOut)
	{
		case 'i' :
		case 'I' : TotChges = calcData(NumOfDays, DailyRate, ServChges, MedChges);
				   cout << "Number of days spent in the hospital : " 
				        << setw(11) << NumOfDays << endl;
				   cout << "Daily rate                           : $"
				        << setw(10) << DailyRate << endl;
				   break;
		case 'o' :
		case 'O' : TotChges = calcData(ServChges, MedChges);
	}
	cout << "Charges for hospital services        : $" 
	     << setw(10) << ServChges << endl;
	cout << "Hospital medication charges          : $" 
	     << setw(10) << MedChges << endl;
	cout << "Total charges                        : $" 
	     << setw(10) << TotChges << endl;
	
}
double calcData(int NumOfDays, double DailyRate, double ServChges,
				double MedChges)
{
	return (NumOfDays * DailyRate) + calcData(ServChges, MedChges);
}
double calcData(double ServChges, double MedChges)
{
	return ServChges + MedChges;
}
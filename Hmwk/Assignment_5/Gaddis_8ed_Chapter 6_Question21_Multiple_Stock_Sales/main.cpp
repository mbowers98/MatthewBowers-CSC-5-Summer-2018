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
void getData(int &, double &, double &, double &, double &, int);
double stockProfitLoss(int, double, double, double, double);
double totalProfitLoss(int);

int main(int argc, char** argv) 	
{
	int NumOfSales;
	double   Total;
	cout << "\nCaculate the total profit (or loss) from  sales of stock.\n";
	cout << "What is the number of stock sales? ";
	cin  >> NumOfSales;
	Total = totalProfitLoss(NumOfSales);
	cout << "Total profit or loss from sales of stock: $";
	cout << fixed << showpoint << setprecision(2);
	cout << Total << endl << endl;
	return 0;
}
double totalProfitLoss(int NumOfSales)
{
	int    NumOfShares;
	double PurchPrice,PurchComm,SalePrice,SaleComm,ProfitLoss,Total = 0;
	for (int Sale = 1; Sale <= NumOfSales; Sale++)
	{
		getData(NumOfShares, PurchPrice, PurchComm, SalePrice, SaleComm, Sale);
		ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm,SalePrice,SaleComm);
		Total += ProfitLoss;
		cout << endl;
	}
	return Total;
}
void getData(int &NumOfShares, double &PurchPrice,
	         double &PurchComm, double &SalePrice, double &SaleComm, int Sale)
{
	cout << "\nPlease enter the follow data for stock sale #"
		 << Sale << ":\n";
	cout << "What is the number of shares? ";
	cin  >> NumOfShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;
}
double stockProfitLoss(int NumOfShares, double PurchPrice, double PurchComm,
	                   double SalePrice, double SaleComm)
{
	return ((NumOfShares * SalePrice) - SaleComm) - ((NumOfShares * PurchPrice)
		    + PurchComm);
}
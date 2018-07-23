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

float stockProfitLoss(int,float,float, float,float);

int main(int argc, char** argv)
{
	int   NumofShares;
	float ProfitLoss,PurchPrice, PurchComm,SalePrice,SaleComm;
	cout << "To calculate the profit and or loss , from the sale of stock." << endl;
		 << "What is the number of shares? ";
	cin  >> NumofShares;
	cout << "What is the purchase price per share? "; 
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;
	ProfitLoss = stockProfitLoss(NumofShares, PurchPrice, PurchComm, SalePrice,SaleComm);
	cout << "The profit / loss from the sale of stock is $";
	cout << fixed << showpoint << setprecision(2);
	cout << ProfitLoss << endl << endl;
	return 0;
}
double stockProfitLoss(int NumOfShares, float PurchPrice, float PurchComm,
	                   float SalePrice, float SaleCom)
{
	return ((NumOfShares * SalePrice) - SaleCom) - ((NumOfShares * PurchPrice)
		    + PurchComm);
}
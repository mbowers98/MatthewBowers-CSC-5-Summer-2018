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
    //Declare Variables

    //Initial Variables
    double PumpPrice=4; // The amount payed at the pump 
    double FedTax = .184; 
    double StateTax = .417;
    double SalesTax = .0225;

   

    

    double BasePrice = PumpPrice-FedTax-StateTax; // BasePrice without state sales tax 
    double Tax = BasePrice* SalesTax; 
    double NewBasePrice= PumpPrice - FedTax- StateTax - Tax; // New BasePrice Variable solved for State Sales Tax
    double TotalTax= FedTax+ StateTax + Tax; // Total Tax on a gallon of gas 
    double PercentageTax = (TotalTax/ PumpPrice) * 100; // percentage of the total PumpPrice was tax
    double MinProfit= .007/PumpPrice * 100; // The lowest percentage of profit
    double MaxProfit = .065/PumpPrice * 100; // The max amount of profit that can be made
    
    cout <<"The Pump Price was 4$\n" << endl;
  
    
    cout << "The base price for a gallon of gas: $" << setprecision(3) << NewBasePrice << endl;
    cout << "The total tax on a gallon of gas: $" << setprecision(3) << TotalTax << endl;
    cout << "Percentage price due to gas tax: %" << setprecision(3) << PercentageTax << endl;
    cout << "Oil Company profit range %" << MinProfit << " to %" << MaxProfit << endl;
    
    
    
           
    //Map/Process Inputs to Outputs

    //Exit program!
    return 0;
}
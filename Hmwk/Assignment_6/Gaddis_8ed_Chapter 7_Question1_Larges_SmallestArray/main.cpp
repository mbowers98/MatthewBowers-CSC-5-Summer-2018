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
int mn,mx;
const int Numb = 10;
int a[Numb]; //10 elements
cout<<"Enter 10 values:"; //prompts user for 10 values.
for(int x=0;x<10;x++)
{
cout<< "Enter value: ";
cin>> a[x]; // puts values in array
}

mn=a[0];
mx=a[0];
for(int x=1;x<10;x++)
	{
		if(mn>a[x])
		{
			mn=a[x];
		}
		else if(mx<a[x])
		{
			mx = a[x];
		}
	}

cout<<"Maximum number is: "<< mx << endl;
cout<<"Minimum number is: "<< mn << endl;

return 0;
}

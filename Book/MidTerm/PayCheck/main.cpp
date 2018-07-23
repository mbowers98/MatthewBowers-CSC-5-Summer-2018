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
    int number;
    int n;
    char a,b,c,d;
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >>a>>b>>c>>d ;
    
    switch (d)
    {
        case '9' :
        {
            cout << "9 *********" << endl;
        }
        break;
        case '8' :
        {
            cout << "8 ********" << endl;
        }
        break;
        case '7' : 
        {
         cout << "7 *******" << endl;
        }
        break;
        case '6' :
        {
         cout << "6 ******" << endl;
        }
        break;
        case '5' :
            
            {
                cout << "5 *****" << endl;
            }
        break;
        case'4' : 
        {
            cout << "4 ****" <<endl;
        }
        break;
        case'3' :
        {
            cout <<"3 ***" << endl;
        }
        break;
        case '2' :
        {
            cout << "2 **" << endl;
        }
        break;
        case '1' :
        {
            cout << "1 *" << endl;
        }
        
        break;
        case '0':
        {
            
        }
        break;
        default:
        {
            cout << d << " ?" << endl;
        }
        break;
    }
    switch (c)
    {
        case '9' :
        {
            cout << "9 *********" << endl;
        }
        break;
        case '8' :
        {
            cout << "8 ********" << endl;
        }
        break;
        case '7' : 
        {
         cout << "7 *******" << endl;
        }
        break;
        case '6' :
        {
         cout << "6 ******" << endl;
        }
        break;
        case '5' :
            
            {
                cout << "5 *****" << endl;
            }
        break;
        case'4' : 
        {
            cout << "4 ****" <<endl;
        }
        break;
        case'3' :
        {
            cout <<"3 ***" << endl;
        }
        break;
        case '2' :
        {
            cout << "2 **" << endl;
        }
        break;
        case '1' :
        {
            cout << "1 *" << endl;
        }
        break;
        case '0':
        {
            
        }
        break;
        default:
        {
            cout << c << " ?" << endl;
        }
        break;
    }
    switch (b)
    {
        case '9' :
        {
            cout << "9 *********" << endl;
        }
        break;
        case '8' :
        {
            cout << "8 ********" << endl;
        }
        break;
        case '7' : 
        {
         cout << "7 *******" << endl;
        }
        break;
        case '6' :
        {
         cout << "6 ******" << endl;
        }
        break;
        case '5' :
            
            {
                cout << "5 *****" << endl;
            }
        break;
        case'4' : 
        {
            cout << "4 ****" <<endl;
        }
        break;
        case'3' :
        {
            cout <<"3 ***" << endl;
        }
        break;
        case '2' :
        {
            cout << "2 **" << endl;
        }
        break;
        case '1' :
        {
            cout << "1 *" << endl;
        }
        break;
        case '0':
        {
            
        }
        break;
        default:
        {
            cout << b << " ?" << endl;
        }
        break;
    }
    switch (a)
    {
        case '9' :
        {
            cout << "9 *********" << endl;
        }
        break;
        case '8' :
        {
            cout << "8 ********" << endl;
        }
        break;
        case '7' : 
        {
         cout << "7 *******" << endl;
        }
        break;
        case '6' :
        {
         cout << "6 ******" << endl;
        }
        break;
        case '5' :
            
            {
                cout << "5 *****" << endl;
            }
        break;
        case'4' : 
        {
            cout << "4 ****" <<endl;
        }
        break;
        case'3' :
        {
            cout <<"3 ***" << endl;
        }
        break;
        case '2' :
        {
            cout << "2 **" << endl;
        }
        break;
        case '1' :
        {
            cout << "1 *" << endl;
        }
        break;
        case '0':
        {
            
        }
        break;
        default:
        {
            cout << a << " ?" << endl;
        }
        break;
    }
    
            
    

    //Exit program!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    const int THOUSAND= 1000;
    const int HUNDRED= 100;
    const int TEN= 10;
    //Input or initialize values Here
    char n1000s,n100s,n10s,n1s,n13s;
    unsigned short x;
    string num ="";
      do{
        cout << "Input an integer [1-3000] convert to an English Check value." << endl;
        cin>>x;
    }while(x<1||x>3000);
    
    //Calculate Number of 1000's, 100's, 10's, 1's
    n1000s=x/THOUSAND;
    x-=n1000s*THOUSAND;
    n100s=x/HUNDRED;
    x-=n100s*HUNDRED;
    
    n10s=x/TEN;
    
    x-=n10s*TEN;
    n13s= 
    n1s=x;
    
    
    switch (n1000s){
        case 3: num += "Three thousand "; break;
        case 2: num += "Two Thousand ";break;
        case 1: num += "One Thousand ";break;
    }
    
    switch (n100s) {
        case 9: num += "Nine Hundred "; break;
        case 8: num += "Eight Hundred "; break;
        case 7: num += "Seven Hundred "; break;
        case 6: num += "Six Hundred "; break;
        case 5: num += "Five Hundred "; break;
        case 4: num += "Four Hundred "; break;
        case 3: num += "Three Hundred "; break;
        case 2: num += "Two Hundred "; break;
        case 1: num += "One Hundred "; break;
        
    }

        switch(n10s) {
        case 9: num += "Ninety "; break;
        case 8: num += "Eighty "; break;
        case 7: num += "Seventy "; break;
        case 6: num += "Sixty "; break;
        case 5: num += "Fifty "; break; 
        case 4: num += "Forty "; break;
        case 3: num += "Thirty "; break;
        case 2: num += "Twenty "; break;
        
        
    }
        if (n10s==1) 
        {
            if(n1s>=1)
            {
            
        switch(n1s){
        case 9: num += "Nineteen "; break;
        case 8: num += "Eighteen "; break;
        case 7: num += "Seventeen "; break;
        case 6: num += "Sixteen "; break;
        case 5: num += "Fifteen "; break; 
        case 4: num += "Fourteen "; break;
        case 3: num += "Thirteen "; break;
        case 2: num += "Twelve "; break;
       case 1: num += "Eleven "; break;
        
        }
            }
        }
   else {
    switch (n1s){
        case 9: num += "Nine "; break;
        case 8: num += "Eight "; break;
        case 7: num += "Seven "; break;
        case 6: num += "Six "; break;
        case 5: num += "Five "; break;
        case 4: num += "Four " ; break;
        case 3: num += "Three "; break;
        case 2: num += "Two "; break;
        case 1: num += "One "; break;
    }
       
        }
    //Calculate the 1000's, 100's, 10's and 1's
    
    //Output the check value
    
     cout <<num << "and no/100's Dollars" <<endl;
    //Exit
    return 0;
}
/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int number;
    int n;
    string star4= " ";
    string star3= " ";
    string star2= " ";
    string star1= " ";
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> n; 
    
    while (n>0) {
       
        number = number * 10 + n % 10 ;
        
                                     
        n = n / 10;
        
    }
   
        int thousand= number/1000;
    
        
    
    for
    (int x= 0; x<thousand; x++) {
            star4 += "*";
        }    
        star4 += "";
    
    
        
    
   cout << thousand << star4 << endl;
   
    int hundred= number / 100-(thousand*10);
    
    for(int y= 0; y<hundred; y++) {
            star3 += "*";
        }    
        star3 += "";
    
    cout << hundred << star3 <<  endl; 
    
    
    
    int tens= number/ 10- (thousand*100)-(hundred*10);
    for(int z= 0; z<tens; z++) {
            star2 += "*";
        }    
        star2 += "";
    
    cout << tens << star2<< endl;
    
    int one= number/1-(thousand*1000)-(hundred*100)-(tens*10);
    for(int l= 0; l<one; l++) {
            star1 += "*";
        }    
        star1 += "";
    
    cout << one << star1 << endl;
    
  
    //Histogram Here

    
    //Exit
    return 0;
}
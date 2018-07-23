/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on January DATE AND TIME HERE
 * Purpose:  Cross one-side or the other
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
    unsigned short n;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>n>>shape;
    
    switch(shape)
    {
        case 'b': {
            int x;
        
            x = n;
        for(int i = 1; i <= n; i++){
            cout<<setw(i)<<x<<endl;
            x--;
        }
        }
        break;
        case 'f': {
            int x;
        
            x = n;
        for(int i = 1; i <= n; i++){
             cout<< setw(x)<<(x)<<endl;
            x--;
        }
        }
        break;
        case 'x': {
            int x;
        
            x = n;
        for(int i = 1; i <= n; i++){
             cout<<setw(i)<<x;
            x--;
            
            
            
        }
            for(int i = 1; i <= n; i++){
             cout<<setw(i)<<x<<endl;
            x--; 
        }
        } 
          

    //Draw the shape
        } 
    //Exit
    
    return 0;
}
  

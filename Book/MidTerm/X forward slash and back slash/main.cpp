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
    float payRate;
    short hours;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hours;
    float Total,Total2,Total3;
            float grospay;
   
   
    //Calculate Paycheck
    
    if(hours<=20)
    {    
        Total3= (hours*payRate);
    }
    else if (hours <=40)
    {
        int OverPay= hours-20;
        Total3=(hours-OverPay)*payRate;   
        Total2 = (OverPay*payRate)*1.5;
                
    }
    else 
    {
        int OverTime= hours-40;  
        int OverPay= hours-OverTime-20; 
        
        Total3=(hours-OverTime-OverPay)*payRate;
        Total2=(OverPay)*payRate*1.50;
        Total= (OverTime*payRate)*2.00;
    }
    
   
    grospay = Total+Total2+Total3;
    
    
    cout << fixed << setprecision(2) << grospay << endl;
    
    
    //Output the check
    
    
    //Exit
    return 0;
}
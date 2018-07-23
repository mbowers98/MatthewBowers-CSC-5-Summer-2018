/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
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
    char package;
    unsigned short hours;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout <<"Input package A,B,C then hours used for the month" << endl;
    cin>>package>>hours;
   float const PackA= 16.99;
   float const PackB =26.99;
   float const Packc = 36.99;
  
    switch (package)
    {
        case 'a' : {
        
        if(hours<=10)
        {
            cout <<"$"<< PackA;
            cout<< " A $0.00" << endl;
        }
        else if(hours<=24)
        {
           float TotalA = PackA+((hours-10)*.95);
            cout << TotalA << " A $0.00" << endl;
        }
        else if (hours<=25 || hours<=34) 
        {
            
            float TotalC = PackA+((hours-10-(hours-20))*.95);
            float TotalB = (hours-20)*.85;
            float TotalA= TotalB + TotalC;
            
            
                if(hours>=25)
                {
                    float TotalD = PackB+((hours-20)*.74);
                    float TotalE= TotalA- TotalD;
                cout << "$" << TotalA << " B $" << fixed << showpoint << setprecision(2) << TotalE <<endl;
                }
                else if(hours<=34)
                {
                    float TotalD = PackB+((hours-20-(hours-30))*.74);
                float TotalE = (hours-30)*.64;
                float TotalF = TotalE+TotalD;
                float TotalG = TotalF-TotalD;
                cout << "$" << TotalA << " B $" << TotalG << endl;
                break;
                }
                    
        }
            else if (hours >= 35)
                {  
           float TotalC = PackA+((hours-10-(hours-20))*.95);
            float TotalB = (hours-20)*.85;
            float TotalA= TotalB + TotalC;
                    float Saving = TotalA-Packc;
                 cout<<"$" << TotalA << " C $" << showpoint << fixed << setprecision(2) << Saving << endl;
                } 
           
        
        
        }
        break;
        case 'b': {
            if(hours <= 10)
            {
                float TotalA= PackB-PackA;
                
                cout << "$" << PackB << " A $" << fixed << showpoint << setprecision(2) << TotalA <<endl;
            
                       
            }
            else if (hours<= 20)
            {
                 float TotalA = PackA+((hours-10)*.95);
                 float TotalC=PackB-TotalA;
                  cout << "$" << PackB << " A $" << fixed << showpoint << setprecision(2) << TotalC <<endl;
            }
            else if (hours <=30)
            {
                float TotalA = PackB+((hours-20)*.74);
                cout << "$" << TotalA << " B $0.00" << endl;    
            }
            else 
            {
                float TotalC = PackB+((hours-20-(hours-30))*.74);
                float TotalB = (hours-30)*.64;
                float TotalA = TotalB+TotalC;
                cout << "$" << TotalA ;
                
                if(TotalA<Packc)
                    cout<< " B $0.00" << endl;
                else if (TotalA > Packc)
                {  float Saving = TotalA-Packc;
                 cout<< " C $" << showpoint << fixed << setprecision(2) << Saving << endl;
                } 
                    
                
                   
            }
           
        } 
        break;
        
        case 'c': {  
             if(hours <= 10)
            {
                float TotalA= Packc-PackA;
                
                cout << "$" << Packc << " A $" << fixed << showpoint << setprecision(2) << TotalA <<endl;
            
                       
            }
            else if (hours<= 20)
            {
                 float TotalA = PackA+((hours-10)*.95);
                 float TotalC=Packc-TotalA;
                  cout << "$" << Packc << " A $" << fixed << showpoint << setprecision(2) << TotalC <<endl;
            }
            else if (hours<= 30)
            {
                float TotalA = PackB+((hours-20)*.74);
                float TotalC= Packc-TotalA;
                
                cout << "$" << Packc <<" B $" <<TotalC << endl;   
            }
            else if (hours <= 34)
            {
                float TotalC = PackB+((hours-20-(hours-30))*.74);
                float TotalB = (hours-30)*.64;
                float TotalA = TotalB+TotalC;
                float TotalD= Packc-TotalA;
                cout<< "$" << Packc << " B $" << TotalD << endl;
                
            }
            else 
            {
                cout << "$" << Packc << " C $0.00" << endl;
            }
             
        break;
    }
    
    
    
    }
    return 0;

}
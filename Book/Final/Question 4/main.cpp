/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);



//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn; 
    for(int i=0; i< sizeIn ; i++)
    {
        cin >> array[i];
    }
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    return 0;
}

void read(int array[],int sizeIn)
{
    int total=0;
    
    for(int i =0; i < sizeIn; i++)
    {
        cout << "a[" << i << "] = ";
        cout << array[i] << endl; 
        total += array[i];
    }
    int max= array[0];
    int min= array[0];
   
    for(int i=1;i<sizeIn;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
        else if(max<array[i])
        {
            max = array[i];
        }
    }
    
    cout <<"Min  = " << min << endl;
    cout <<"Max  = " << max << endl;
    cout <<"Sum  = " << total << endl;
}

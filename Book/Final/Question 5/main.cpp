/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on May 31st, 2018, 11:45 AM
 * Purpose:  Dynamic 1 and 2 D Vectors
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
const int COLMAX=2;
//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void fillAry(vector<int> &,int);
void prntAry(vector<int> &,int);
void fillAry(vector< vector<int> > &,int,int);
void prntAry(vector< vector<int> > &);

//Execution Begins Here
 int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0);
    vector<int> odd(0);
    //Declare even,odd vectors
 
    
    //Declare Variables
    int size=10;
    int rows=2;
    int cols=10;
  
    //Initialize Variables
    fillAry(even,size);
    fillAry(odd,rows,cols);
    
    //Print the Array
    prntAry(even,10);
    prntAry(odd);
    
    //Exit stage right!
    return 0;
}

void prntAry(vector< vector<int> > &a){
    cout<<endl;
    for(int row=0;row<();row++){
        for(int col=0;col<a[row].size();col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void fillAry(vector< vector<int> > &a,int rows,int cols){
    //Fill the array
    for(int row=0;row<rows;row++){
        a.push_back(vector<int>());
        for(int col=0;col<cols;col++){
            a[row].push_back(rand()%90+10);
        }
    }
}

void prntAry(vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(vector<int> &a,int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a.push_back(rand()%90+10);//[10,99]
    }
}
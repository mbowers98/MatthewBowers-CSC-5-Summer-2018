/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int);//Sort by row
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    string array[ROW]   ;   //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    
    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
   
        if(rowIn<=ROW){
            for(int row=0;row<rowIn;row++){
            cin>> array[row];
            }
            if(sizeof(array)>colIn)
            {
                if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
                     
            }     
            else
            {
            cout << "Now input the array." << endl;
            cout << "The Sorted Array" << endl;
            if ( array[0] > array [1] && array[1] > array[2])
            {
            cout << array[2] << endl;
            cout  << array[1] << endl;
             cout  << array[0] << endl;
            }
            else if(array[1]>array[0] && array[0] > array[2])
            {
             cout<< array[2] << endl; 
            cout  << array[0] << endl;
          
            cout  << array[1] << endl;
            }
            else if ( array[2] > array [1] && array[1] > array[0])
           {
           cout << array[0] << endl;
            cout << array[1] << endl;
            
            cout  << array[2] << endl;  
           }
           else if ( array[0] > array [2] && array[2] > array[1])
           {
           cout  << array[1] << endl;
            
            cout << array[1] << endl;
             cout  << array[0] << endl;
           }
           else if(array[1]>array[2] && array[2] > array[0])
           {
          cout  << array[0] << endl;
            cout  << array[2] << endl;
            
            cout << array[1] << endl;
           }
           else if ( array[2] > array [0] && array[0] > array[1])
           {
            cout  << array[1] << endl;
          
            cout << array[0] << endl;
            cout  << array[2] << endl;  
           }     
    //Now read in the array of characters and determine it's size
    
 
   
            }
    //Exit
    return 0;

}
}


/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 13, 2018, 11:27 AM
 * Purpose:  Your first program,
 *           Hello World as explained in the
 *           Kerninghan & Ritchie Programming in C
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    

    
    //Exit program!
    return 0;
}

void sortArray(int array[], int size)
 {
 bool swap;
 int temp;
 do
 {
 swap = false;
 for (int count = 0; count < (size − 1); count++)
 {
 if (array[count] > array[count + 1])
 {
 temp = array[count];
 array[count] = array[count + 1];
 array[count + 1] = temp;
 swap = true; 
 }
 }
 } while (swap);
 } 
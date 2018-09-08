#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80; //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int *,int *);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed
void function();
//Program Execution Begins Here
int main(int argc, char** argv) {
    
//Declare all Variables Here
const int ROW=80; //Max Rows much larger than needed
int array[ROW][COLMAX]={}; //Declare original array
int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1


int row,col;

// augAry[ROW]

//Input the original table

read(array, &row, &col);

  // if(!reverse(unShort,snShort)){
   // cout<<"No Conversion Possible"<<endl;
   //  return 0;
//  }
    
    //Now subtract if the result is not negative else don't subtract
  //  snShort=subtrct(snShort,999);
    
    //Output the result
   // cout<<snShort<<endl;

sum(array,row,col,augAry);

//Output the original array
cout<<endl<<"The Original Array"<<endl;
print(array,row,col,10);
//setw(10)

//Output the augmented array
cout<<endl<<"The Augmented Array"<<endl;
print(augAry,row+1,col+1,10);
//setw(10)

//Exit
return 0;
}

void read(int arr[][COLMAX], int *row, int *col){
cout << "Input a table and output the Augment row,col and total sums." << endl;
cout << "First input the number of rows and cols. <20 for each" << endl;
cout << "Now input the table." << endl;
cin >> *row, *col;

if(*row>80)
{
    //Cant be greater then 80 because thats the row limit. 
    function();
}
else{
for(int k = 0; k < *row; k++)
{
    for(int i = 0; i < *col; i++)
    {
         cin >> arr[k][i];
    }
}

}
}
void sum(const int arr1[][COLMAX],int row,int col,int arr2[][COLMAX])

{
for(int i = 0; i < col; i++){

    arr2[row][i] = 0;

}
for(int i = 0; i < row; i++)

{
arr2[i][col] = 0;
for(int j = 0; j < col; j++)


    {
    arr2[i][j] = arr1[i][j];
    arr2[i][col] +=arr1[i][j];
    arr2[row][j] += arr1[i][j];
    arr2[row][col] += arr1[i][j];
    }
}
}
  void function()
{
    
    cout << "The Program is now terminated." << endl; 
}

void print(const int arr[][COLMAX], int row, int col, int width)
{
for(int i = 0; i < row; i++){
for(int j = 0; j < col; j++)
{
cout << setw(10)<< arr[i][j] << endl;
}
}
}
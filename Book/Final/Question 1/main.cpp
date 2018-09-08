/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, conversions, or the columns for 2-D arrays

//Function Prototypes Here
bool  inRange(const char [],unsigned short &);//Output true,unsigned or false
bool  reverses(int x);//Output true,short or false
short subtrct(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    for(int i=0; i < strlen(digits); i++)
    {
    if (digits[i] <= '9' && digits[i] >= '0')
    {
        
    }
    else
    {
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    }
    if(!inRange(digits,unShort)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Test if it is in the Range of an unsigned short
   
    
    //Reverse and see if it falls in the range of an signed short
   if(strlen(digits)==5)
   {
       for(int i=0; i < 1 ; i++){
      int x=(digits[0]-48)*10000 + (digits[1]-48)*1000 + 
          (digits[2]-48)*100   + (digits[3]-48)*10 +  (digits[4]-48);
    int reverse=0; 
    int remainder;
       while(x != 0)
    {
        remainder = x%10;
        reverse = reverse*10 + remainder;
        x /= 10;
       }
    
    if(!reverses(reverse)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    snShort=subtrct(reverse);
   
   
   
     
   }
   }
   else if (strlen(digits)==4)
   {
    int x=((digits[0]-48)*10000 + (digits[1]-48)*1000 + 
          (digits[2]-48)*100   + (digits[3]-48)*10);
    
    int reverse=0; 
    int remainder;
       while(x != 0)
    {
        remainder = x%10;
        reverse = reverse*10 + remainder;
        x /= 10;
        
    }
     
     
    if(!reverses(reverse*10)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    snShort=subtrct(reverse*10);
   }
    else if (strlen(digits)==3)
   {
    int x=((digits[0]-48)*10000 + (digits[1]-48)*1000 + 
          (digits[2]-48)*100);
    
    int reverse=0; 
    int remainder;
    while(x != 0)
    {
        remainder = x%10;
        reverse = reverse*10 + remainder;
        x /= 10;
    }
    if(!reverses(reverse*100)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    snShort=subtrct(reverse*100);
   }
    else if (strlen(digits)==2)
   {
    int x=((digits[0]-48)*10000 + (digits[1]-48)*1000);
    
    int reverse=0; 
    int remainder;
       while(x != 0)
    {
        remainder = x%10;
        reverse = reverse*10 + remainder;
        x /= 10;
        
    }
     if(!reverses(reverse*1000)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    snShort=subtrct(reverse*1000);
   }
    else if (strlen(digits)==1)
   {
    int x=((digits[0]-48)*10000);
    
    int reverse=0; 
    int remainder;
       while(x != 0)
    {
        remainder = x%10;
        reverse = reverse*10 + remainder;
        x /= 10;
        int unShort=reverse*10000;
    }
     if(!reverses(reverse*10000)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    snShort=subtrct(reverse*10000);
   }
    
    
   // if(!reverse(unShort,snShort)){
   // cout<<"No Conversion Possible"<<endl;
   //  return 0;
//  }
    
    //Now subtract if the result is not negative else don't subtract
  //  snShort=subtrct(snShort,999);
    
    //Output the result
   // cout<<snShort<<endl;
   
    //Exit
    return 0;
}

bool  inRange(const char digits[],unsigned short &)
{
  bool status;
  
  int x=(digits[0]-48)*10000 + (digits[1]-48)*1000 + 
          (digits[2]-48)*100   + (digits[3]-48)*10   +  (digits[4]-48);
  for(int i=0;i < strlen(digits); i++)
  if (digits[i] <= '9' && digits[i] >= '0')
  {
  if(x>0 && x< 65513)
  {
      return true;
  }

}
  else 
  {
      return false;
  }
}
bool  reverses(int x)
{
if(x>0 && x<65513)
  {
      return true;
  }
  else
  {
      return false;
  }

}
short subtrct(int x)
{
    int sum=x;
    int total= sum-999;
    
    if(total>0)
    {
        cout << total;
    }
    else
    {
      cout << sum; 
    }
    return 0;
}


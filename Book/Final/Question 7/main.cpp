/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

int srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int[]);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(int []); //Print the array of indexes where the pattern found

int main(int argc, char** argv)
{
//Declare all Variables Here
const int LINE=81; //Size of sentence or pattern to find
char sntnce[LINE],pattern[LINE]; //80 + null terminator

int i,j,firstPos=-1;
//Input a sentence and a pattern to match
cout<<"Match a pattern in a sentence."<<endl;
cout<<"Input a sentence"<<endl;
cin.getline(sntnce,LINE);
cout<<"Input a pattern."<<endl;
cin.getline(pattern,LINE);
int match[LINE];

firstPos = srch1(sntnce,pattern,firstPos);

//Display the inputs and the Outputs
cout<<endl<<"The sentence and the pattern"<<endl;
print(sntnce);
print(pattern);
cout<<"The positions where the pattern matched"<<endl;
srchAll(sntnce,pattern,match);

return 0;
}

int srch1(const char sntnce[],const char pattern[],int firstPosition){
for(int i=0;sntnce[i]!='\0';i++)
{
int j=0;
if(sntnce[i]==pattern[j])
{
firstPosition = i;
while(sntnce[i]==pattern[j])
{
i++;
j++;
}

if(pattern[j]=='\0')
{
cout<<"First Occurance of the pattern occured in the position "<<firstPosition<<"\n";
break;
}
else
{
i=firstPosition;
firstPosition=0;
}
}
}

if(firstPosition==-1)
cout<<"The pattern is not occured in given string\n";
return firstPosition;
}

void srchAll(const char sntnce[],const char pattern[],int* match){
int count = 0;
int K = strlen(pattern);
int L = strlen(sntnce);

for (int i = 0; i <= L - K; i++) {
int j;

for (j = 0; j < K; j++)
if (sntnce[i + j] != pattern[j])
break;

if (j == K)
cout<<i<<endl;
}
}

void print(const char str[81]){

cout<<str<<endl;
}
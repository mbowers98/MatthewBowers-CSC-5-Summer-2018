/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on March 15th, 2018, 10:40 AM
 * Purpose:  Menu with construct examples
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Display menu
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Number sum example"<<endl;
    cout<<"Type 2 for Celsius Chart example"<<endl;
    cout<<"Type 3 for store sales in stars example"<<endl;   
    cout<<"Type 4 for Pick A number 1-100 example"<<endl;
    cout <<"Type 5 for Box of stars example " << endl;
    cout << "Type 6 for pattern A and B example" << endl;
    cout << "Type 7 ocean level increasing example" << endl;
    cout << "Type 8 Calories Burnt work out example" << endl;
    cout << "Type 9 Price Increase for example" << endl;
    cout << "Type 10 Number guesser Enhancement example" << endl;
    
    cin>>choice;
  
    //Process/Map inputs to outputs
    if(choice>='1'&&choice<='9'){
        switch(choice){
            case '1':{
                   //Declare Variables

    //Initial Variables
    // Use an integer instead
    unsigned short number; //The Number the User is going to enter 0 - 1000
    unsigned short sum=0; // The Sum of the numbers added can be anything greater than 0
    cout << "Please Enter A Number Greater Than 0\n";
    cin >> number; //The Variable they are entering 
    
    while ( number <= 0) // Number Has to be greater than 0
    {
cout << "Invalid, Enter a number greater than 0\n";
        cin >> number;// Allows the user to enter another number 
}
    for (int counter =0; counter <= number; counter++)
    {
        sum = sum + number;
        counter++;
    }
    
    cout << "The sum of numbers from 1 to " << number << " is " << sum << endl;
                break;
            }
            case '2':{
                short C ; // This is the variable for Celsius Values range from 1-100 
  
   short F; // This is the variable for Fahrenheit values range from 1-100
   
   cout << "Table for Celsius 0 - 20\n"
           "--------------------------------\n"
"Celsius \t\t Fahrenheit\n"
           ;
   
   for(C = 0; C <= 20; C++)
	{

		F =(C*1.8)+32;
		cout << C;
		cout << "\t\t\t \t"<< F << endl;
	}
                break;
            }
            case '3':{
               string star = ""; // for the stars for each store Value 1-100
    short sale; // The amount sold for each store 1- 10000, cant be a negative number
    short store; // The Variable for the amount of stars Value: 1- 5
    
    for (int store = 1; store <= 5; store++)
    {
        cout << "Enter today's sales for Store " << store << ":" << endl;
        cin >> sale;
        star += "Store " + to_string(store) + string(":");
  
        
        for(int x= 0; x<sale/100; x++) {
            star += "*";
        }    
        star += "\n";
    }
    
    cout<<star;
                break;
            }
            case '4':{
                short Guess; // this is going to be the Users guess: Values = 1-100 
    short  seed; //This is for the random number variable  
    seed = time (0);
    srand(seed);
    short Random = rand() % 100 + 1; // This is the variable for producing a random number: Values = 1- 100
    
    do {
        cout << "Guess a number between 1 - 100"
                "\n";
        cin >> Guess;
        
        if (Guess> Random)
            cout << "Your Guess Is To High!\n";
        else if (Guess < Random)
            cout << "Your Guess is to low!\n";
    }
    while (Random != Guess);
    cout << "Thats the correct guess!";
                        break;
                    }
            case '5'  :{
            
    //Declare Variables

    //Initial Variables
    int X; // This Variable is used to set the amount of stars in each box  
    int Y; // This Variable is used to set the amount of stars in each box 
    int number; // this is the number that the user picks: Values 1 - 15
    
    cout << "Enter A Number\n"
            "And A Box Will Show\n";
    cin >> number;
    
    if (number > 15)
    {
        cout << "Please enter a number less than 15\n";
    cin >> number ;
    }
    
            else if (number <=0)
            {
            cout << "Please enter a number greater than 0\n";
    cin >> number ;
            }
    else 
        for (Y=1;(Y<=number); ++Y)
        {
            for (X=1;(X<=number); ++X)
            cout << "x";
            cout << "\n";
            break;
        }
    case '6' :{
        short Y=10; //This is the variable used to determined how many "+" are used for each line: Values 1-7
   short X=10; //This is the variable used to determined how many "+" are used for each line: Values 1-7
    cout << "Pattern A\n"
            "=======================";
    for (int X=0; X<10; X++)
    {
        for(int Y=0; Y<X;Y++)
        cout<< "+" ;
        cout<<endl;
    }
    cout <<"Pattern B\n"
    "=======================\n";
    for(int X=10; X>=1; X--)
    {
        for(int Y=1; Y<X;Y++)
        cout<< "+" ;
        cout<<endl;
    }
    
    break;
       
                    
             
           
    }
     
    }    
            case '7':{
                short year= 1; // This the the years that pass by , that the ocean levels rise yearly by values= 1-25
    float Ocean = 1.5; // This is the variable for the amount that the ocean rises each year Values = 1.5
    
    cout << "Year       Increase In Ocean Level\n";
    
    for (short year= 1; year <=25; year++, Ocean++)
        cout << year << "                     " << Ocean << endl;
    break;
            }
            case '8':{
                const float Burnt = 3.6; //Burnt calories per minute is always 3.6
    short min; // This is the variables for the amount of minutes ran: Values 1-30
    short Cal = 0; // This is the Variable for the amount of the calories burnt
    
    cout << "The Amount of Calories burnt\n"
            "at 3.6 calories burnt a minute\n";
cout << "Minutes Ran\t\tCalories Burnt" <<endl;


for(min=5; min <= 30; min += 5 )
{
    Cal= min * Burnt; 
cout << min << "\t\t\t" << Cal << endl;
break;
}
            }
            case '9' :{
                const short Member= 2500; // This Variable is the starting base price for the membership Value= 2500
    float tax= .04; // This is the amount that is increases by each year starting with the first year: Value = .04
    short Rate; // This is the cost with the increased rate for each year values 1 - 4000
    short year; // This is the amount of years that are passed by : Values 1-6 years 
    
    
    cout << "The country club membership is increasing at 4% for the next 6 years\n"
            "-------------------------------------------------\n";
    
    for(year = 1; year <=6; year++)
    {
        Rate = Member *(1+year*tax);
        cout << "Year " << year << "\t\t Cost  " << Rate << "$" << endl;
       
            }
    break;
    } 
            case '10' :{
                int Guess; // this is going to be the Users guess: Values = 1-100 
    short seed;//This is for the random number variable  
    seed = time (0);
    srand(seed);
    short Random = rand() % 100 + 1;// This is the variable for producing a random number: Values = 1- 100
    short NumGues; // This is the variable for the amount of guesses it takes the user Values range from 1 - around 100 max?
     cout << "Guess a number between 1 - 100\n";
    do {
       
                
        cin >> Guess;
        NumGues++;
        
        if (Guess> Random)
            cout << "Your Guess Is To High!\n";
        else if (Guess < Random)
            cout << "Your Guess is to low!\n";
    }
    while (Random != Guess);
    cout << "Thats the correct guess!\n";
    cout << "It Took You " << NumGues << " Attempt(s) To Get it Correct!\n";
    break;
            }
    }
    }    else(choice>10);
        {
        cout<<"Exiting Menu"<<endl;
        }
    
    
    //Exit stage right!
    return 0;
}
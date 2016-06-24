/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 23, 2016, 5:16 PM
 * Purpose:  Restaurant Bill 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Library 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cstMeal=44.50;   //Cost of Meal
    float txMeal=.0675; //Tax on the Meal
    float txPrct=.15;   //Percentage of tip after tax
    float amtTax;       //Amount of tax on the meal 
    float txtipAf;      //Amount of tip in dollars
    float totBill;      //Total amount of bill
    
    //Input Data
    
    //Process the Data
    amtTax=cstMeal*txMeal;
    txtipAf=(cstMeal+amtTax)*txPrct;
    totBill=amtTax+txtipAf+cstMeal;
 
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"The meal cost is $ "<<cstMeal<<endl;
   cout<<"The tax amount is $ "<<amtTax<<endl;
   cout<<"The tip amount is $"<<txtipAf<<endl;
   cout<<"The total bill is $"<<totBill<<endl;
    //Exit Stage Right!
    return 0;
}

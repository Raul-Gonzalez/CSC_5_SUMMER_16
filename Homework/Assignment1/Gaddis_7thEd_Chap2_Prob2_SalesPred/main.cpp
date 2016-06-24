/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 23, 2016, 1:37 PM
 * Purpose:  Percentage East Cost 
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
    float saleyr=4.6e6;  //Predicted sales for the company
    float percEast=.62;  //Percentage the East Coast sales division generates
    float amtEstGn;      //Amount the East Coast division will generate
    
    //Input Data
    
    //Process the Data
    amtEstGn=saleyr*percEast;
    
    //Output the processed Data
   cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"Prediction of how much the East Coast division will generate = $"<<amtEstGn<<endl;
    //Exit Stage Right!
    return 0;
}

/*
* File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 28, 2016, 5:21 PM
 * Purpose:  Stadium Seating
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library 
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    int secA, secB, secC;
    float totA, totB, totC, total;
    
    //Input Data
    cout<<"Enter the number of tickets sold in area A"<<endl;
    cin>>secA;
    cout<<"Enter the number of tickets sold in area B"<<endl;
    cin>>secB;
    cout<<"Enter the number of tickets sold in area C"<<endl;
    cin>>secC;
    
    
    //Process the Data
    totA=secA*15;
    totB=secB*12;
    totC=secC*9;
    
    total=totA+totB+totC;
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The total revenue from tickets sales = $"<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 29, 2016, 6:51 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float metTon=35273.92;//Number of Ounces in a Metric Ton
    float cerPkg;         //Weight of a Cereal Package
    float metCer;         //Cereal Weight in Metric Tons
    float numPkg;         //Number of Cereal Packages to make a Metric Ton
    
    //Input Data
    //Prompt user for the weight of the package
    cout<<"Input the Weight of the Cereal Package in Ounces "<<endl;
    cin>>cerPkg;
    
    //Process the Data
    metCer=(cerPkg/metTon);//Convert ounces to metric tons
    numPkg=(1.0f/metCer);//Calculate the number of packages in one metric ton
    
    //Output the processed Data
    cout<<"The Weight of the cereal package in metric tons = "<<metCer<<endl; 
    cout<<"Number of Cereal Packages to make a Metric Ton = "<<numPkg<<endl;
    
    
    //Exit Stage Right!
    return 0;
}
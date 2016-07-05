/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 1, 2016, 7:52 PM
 * Purpose:  Assessment Tax
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate
using namespace std; //Namespace of the System Libraries

//User Libraries


//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float asmntVal;//The assessment value of the property
    float actVal; //The actual value of the property
    float propTax;//The tax on the property
    
    //Input Data
    cout<<"This program calculates the assessment value";
    cout<<" and property tax on the assessment"<<endl;
    cout<<"Enter the actual value of the property"<<endl;
    cin>>actVal;
    
    //Process the Data
    asmntVal=actVal*0.60;//Calculation of assessment value
    propTax=asmntVal*0.0064;//The property tax on the assessment value
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<endl;//Set the output to two decimals
    cout<<"The assessment value of the property is $ "<<asmntVal<<endl;
    cout<<"The propeerty tax is $ "<<propTax;
    
    //Exit Stage Right!
    return 0;
}
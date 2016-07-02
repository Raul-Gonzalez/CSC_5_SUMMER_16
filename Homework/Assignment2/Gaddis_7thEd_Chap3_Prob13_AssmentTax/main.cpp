/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 27, 2016, 9:03 PM
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
    float asmntVal, actVal, propTax;
    
    //Input Data
    cout<<"This program calculates the assessment value";
    cout<<" and property tax on the assessment"<<endl;
    cout<<"Enter the actual value of the property"<<endl;
    cin>>actVal;
    
    //Process the Data
    asmntVal=actVal*0.60;
    propTax=asmntVal*0.0064;
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The assessment value of the property is $ "<<asmntVal<<endl;
    cout<<"The propeerty tax is $ "<<propTax;
    
    //Exit Stage Right!
    return 0;
}
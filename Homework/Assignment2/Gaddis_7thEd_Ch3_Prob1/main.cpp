/*
* File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 28, 2016, 3:30 PM
 * Purpose:  Calculating Gas Millage
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int gasMil;//Gas Millage
    int gasGal;//Number of gallons the car can hold
    int nMiles;//Number of miles the car can be driven on a full tank
    
    //Input Data
    cout<<"Input the number of gallons the car can hold"<<endl;
    cin>>gasGal;
    cout<<"Input the number of miles the car can be driven on a full tank"<<endl;
    cin>>nMiles;
    
    //Process the Data
    gasMil=nMiles/gasGal;
    
    //Output the processed Data
    cout<<gasMil<<" is the number of miles that may be driven per gallon "<<endl;
    
    //Exit Stage Right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 5, 2016, 4:30 PM
 * Purpose:  Savings with a for loop
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,fv,iRate;
    int nYears;

    
    //Input Data
    cout<<"Input the present value in $'s, interest rate in %, number of ";
    cout<<"years in (yrs)"<<endl;
    cin>>pv>>iRate>>nYears;
    
    //Process the Data
    iRate/=100.0f;//Convert to decimal
    fv=pv;//Initialize the future value with the present
    
    //Loop to display the yearly result
    
    
    //Output the processed Data
    cout<<fixed;
    cout<<"Table produced with "<<setprecision(2)<<iRate*100<<"% interest"<<endl;
    cout<<"Year  Date  Savings $"<<endl;
    for(int year=0,dateYr=2016;year<=nYears;year++,dateYr++){
        cout<<setw(4)<<year<<setw(7)<<dateYr<<setw(12)<<setprecision(2)<<fv<<endl;
        fv*=(1+iRate);//Pay yourself 
        int ifv=fv*100;
        fv=ifv/100.0f;//Truncating to the nearest penny
    }
    //Exit Stage Right!
    return 0;
}
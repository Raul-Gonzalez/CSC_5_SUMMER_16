/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 *
 * Created on June 27, 2016, 1:35 PM
 * Car Payment
 */
//System Libraries
#include <iostream>  //Input /Output Stream Library
#include <iomanip>   //Format Library
#include <cmath>      //Math Library
using namespace std;// Namespace of the system Libraries

//User Libraries

// Global Constants

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables here, no doubles
    float loanAmt,intRate,nPymnts;//Inputs to the problem
    float mPymnt,totPaid,intPaid;//Outputs to the problem
   
// Input Data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan Amt $'s, Interest Rate %/month, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;

// Process Data
    //float temp = pow((1+intRate),nPymnts);
    float temp=exp(nPymnts*log(1+intRate));
    mPymnt=intRate*temp*loanAmt/(temp-1);//Intermediate value
    totPaid=nPymnts*mPymnt;
    intPaid=totPaid-loanAmt;
  
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payment = $"<<setw(10)<<mPymnt<<endl;
    cout<<"Totoal Paid     = $"<<setw(10)<<totPaid<<endl;
    cout<<"Interest Paid   = &"<<setw(10)<<intPaid<<endl;
//Exit stage Right!
    
    return 0;
}


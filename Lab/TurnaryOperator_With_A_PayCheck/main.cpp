/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 23, 2016, 1:37 PM
 * Purpose:  Paycheck Calculation with Turnary Operator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd=50;//HOurs Worked
    float payRate=10;//$s/hr
    char ovrTime=40;//Overtime starts at 40 hours
    float payChck;//Paycheck in dllrs
    
    //Input Data
    
    //Process the Data
    payChck=hrsWrkd<ovrTime? //Test
            hrsWrkd*payRate: //True
            ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*1.5;//False
    
    //Output the processed Data
   cout<<"Hours worked = "<<hrsWrkd<<"(hrs)"<<endl;
   cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
   cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<" hrs"<<endl;
   cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"Paycheck = $"<<payChck<<endl;
    //Exit Stage Right!
    return 0;
}

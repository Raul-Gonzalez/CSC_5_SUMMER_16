/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 23, 2016, 11:05 PM
 * Purpose: Calculate the price of five items and hold values
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
    float itm1=12.95, itm2=24.95, itm3=6.95, itm4=14.95,itm5=3.95;//Items the customer is purchasing
    float subtot;
    float amtStx;
    float salesTx=.06;
    float totPrce;
    
    
    //Input Data
    
    //Process the Data
    subtot=itm1+itm2+itm3+itm4+itm5;
    amtStx=subtot*salesTx;
    totPrce=subtot+amtStx;
    
    //Output the processed Data
    cout<<"Price of items are $"<<itm1<<" $"<<itm2<<" $"<<itm3<<" $"<<itm4<<" $"<<itm5<<endl;
   cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"The subtotal of the sale is $"<<subtot<<endl;
   cout<<"The sales tax is $"<<amtStx<<endl;
   cout<<"The total amount due is $"<<totPrce<<endl;
    
    //Exit Stage Right!
    return 0;
}

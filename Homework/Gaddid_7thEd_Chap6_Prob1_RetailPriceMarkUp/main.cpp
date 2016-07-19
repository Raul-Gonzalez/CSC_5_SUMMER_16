/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float calRMark(float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float price =0,
          markup=0;
    
    //Input Data
    cout<<"Enter the price of the item"<<endl;
    cin>>price;
    cout<<endl;
    cout<<"Enter the percentage markup of the item"<<endl;
    cin>>markup;
    cout<<endl;
    
    //Process The Data
    if(price<=0||markup<=0){
        cout<<"The price and the percentage need to be a positive number"<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The markup price is $ "<<calRMark(price,markup)<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

float calRMark(float price, float markup){
    return price+(price/100*markup);
}
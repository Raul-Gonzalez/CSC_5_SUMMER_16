/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 23, 2016, 4:33 PM
 * Purpose:  Percentage East Cost 
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
    float cstItm=52;  //Cost of Purchase
    float statStx=.04; //State Sales Tax
    float cntyStx=.02; //County Sales tax
    float totStx;     //Total Sales Tax on the Purchase
    
    //Input Data
    
    //Process the Data
    totStx=cstItm*(statStx+cntyStx);
    
    //Output the processed Data
   cout<<"State tax = "<<statStx*100<<"%"<<endl;
   cout<<"County tax = "<<cntyStx*100<<"%"<<endl;
   cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"Total sales tax on a $52 purchase = $"<<totStx<<endl;
    //Exit Stage Right!
    return 0;
}

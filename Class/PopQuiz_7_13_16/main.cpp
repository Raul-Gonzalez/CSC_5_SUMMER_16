/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 8, 2016, 12:27 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int sum,num,intone,upto;
    
    
    //Input
    cout<<"Enter the number to sum "<<endl;
    cin>>upto;
    
    for(num; num <= upto; num++)
    {
       if(num % 2 != 0)
       {
             
             sum += num;
       }
    }
    //Output the data
    cout<<"The sum of odd numbers up to n is "<<sum<<endl;
   
    //Exit Stage Right!
    return 0;
}
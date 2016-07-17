/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void displayMessage()
{
    cout<<"Hello from the function displayMessage.\n";
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int n=0;
    
    //Input Data
    cout<<"How many time do you want to call the function"<<endl;
    cin>>n;
    //Process the Data
    for(int count=0;count<n;count++)
    displayMessage();//Call display message
    cout<<"Back in function main again.\n";
    cout<<"You have called the function "<<n<<" times"<<endl;
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}
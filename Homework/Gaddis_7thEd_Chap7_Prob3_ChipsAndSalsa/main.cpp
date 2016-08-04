/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Rectangle Area with Functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_SALSA = 5;//Number of Salsa Types
    string names[NUM_SALSA] = { "mild", "medium", "sweet", "hot", "zesty"};   //Holds names
    float numJars[NUM_SALSA];//Holds number of salsa
    
    //Input Data
    cout<<"Enter the number of jars sold by each type of salsa"<<endl;
    
    //Process the Data
    for(int index=0; index<NUM_SALSA; index++){
        cout<<"Number of jars sold by "<<names[index]<<endl;
        cin>>numJars[index];
    }

    //Output the number of Jars sold
    cout<<"Here is the total number of jars sold for each salsa"<<endl;
    for(names[NUM_SALSA];names[NUM_SALSA]<NUM_SALSA; names[NUM_SALSA]++){
        int numSold=numJars[index];
        cout<<"Jars of "<<names[index]<<" sold is "<<numJars[index]<<endl;
    }
    //Exit Stage Right!
    return 0;
}
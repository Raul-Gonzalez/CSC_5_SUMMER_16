/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 *
 * Created on June 24, 2016, 12:22 AM
 * Purpose: Energy Drink Consumption/citrus flavored
 */
//System Libraries
#include <iostream>//Input /Output Stream Library
#include <iomanip>//Library
using namespace std;// Iostream uses the standard namespace

//User Libraries

// Global Constants

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables here, no doubles
    int cstsrvd=12467;//Number of customers surveyed
    float twoDrnk=.14;//Percentage of customers who buy more than two drinks
    float citDrnk=.64;//Percentage of customers who prefer citrus drinks
    int ncstMor;//Approximate number of customers who purchase one or more drinks
    int ncstCit;//Approximate number of customers who prefer citrus flavor
    
// Input Data
  

// Process Data
    ncstMor=cstsrvd*twoDrnk;
    ncstCit=cstsrvd*citDrnk;
    
// Output Data
cout<<"The approximate number of customers who buy one or more drinks is "<<ncstMor<<endl;
cout<<"The approximate number of customers who prefer citrus flavor is "<<ncstCit<<endl;

//Exit stage Right!
    
    return 0;
}


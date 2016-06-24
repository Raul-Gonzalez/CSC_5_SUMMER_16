/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 *
 * Created on June 24, 2016, 11:18 AM
 * Calculate the distance a car with a full tank of gas can travel in town/highway
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
    int galTank=20;//Gallons in the Tank
    float mpgTown=21.5;//Miles per gallon in town
    float mpgHigh=26.8;//Miles per gallon on highway
    int disTown;//Distance car can travel on a tank in town
    int disHigh;//Distance car can travel on a tank on highway
    
// Input Data
  

// Process Data
    disTown=galTank*mpgTown;
    disHigh=galTank*mpgHigh;
    
// Output Data
cout<<"Distance a car can travel on one tank of gas in town is "<<disTown<<" miles"<<endl;
cout<<"Distance a car can travel on one tank of gas on highway is "<<disHigh<<" miles"<<endl;

//Exit stage Right!
    
    return 0;
}


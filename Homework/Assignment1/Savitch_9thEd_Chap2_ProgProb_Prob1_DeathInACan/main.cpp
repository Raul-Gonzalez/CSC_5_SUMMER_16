/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 23, 2016, 1:10 PM
 * Purpose:  
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
    float msMass=35;//35 grams is the mass of the mouse
    float msKill=5;//5 grams of sweetener kills the mouse
    float hmMass=45400;//Grams for about 100lb person
    float msSoda=350;//350 grams is the mass of soda can content
    float consin=1e-3;//1/10th of 1% concentration in soda sweetener
    int nCans;//Number of cans to kill dieter
    
    //Input Data
    
    //Process the Data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    
    //Output the processed Data
   cout<<"The number of cans that a dieter with mass = ";
   cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)";
   cout<<endl;
    
    //Exit Stage Right!
    return 0;
}

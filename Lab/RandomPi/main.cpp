/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 6, 2016, 12:27 PM
 * Purpose:  Random Approximation or Stochastic Calculus
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Lib
#include <ctime>     //Time Lib
#include <cstdlib>   //Random Num Lib
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initiliaze the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float approxPI;
    int nDarts, nCirc=0;
    float maxRnd=pow(2,31)-1;
    float max=-1,min=2;
    
    //Input Data
    cout<<"How many darts to throw to approxiamte PI"<<endl;
    cin>>nDarts;
    
    //Process the Data
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/maxRnd;//[0,1]
        float y=rand()/maxRnd;//[0,1]
        if(x*x+y*y<1)nCirc++;
        if(max<x)max=x;
        if(min>x)min=x;
        if(max<y)max=y;
        if(min>y)min=y;
    }
    approxPI=4.0f*nCirc/nDarts;
    
    //Output the processed Data
    cout<<"Max Random = "<<max<<" Min Random = "<<min<<endl;
    cout<<PI<<" approximated by "<<nDarts<<" dartrs = "<<approxPI<<endl;
    //Exit Stage Right!
    return 0;
}
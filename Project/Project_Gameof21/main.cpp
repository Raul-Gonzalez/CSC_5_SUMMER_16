/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 30, 2016, 1:45 PM
 * Purpose:  Coding Game
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + iGenerator%iRange);
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char play,caRow[80];
    int value=0,excess=0;
    int j=7,k=2,l=5,m=1;
    
    //Input Data
    cout<<"A WORM has infected the servers at COPKAM INC.";
    cout<<" It is up to you to save the day."<<endl;
    
    
    //Evaluate the first card
    do{
    //Input the Data
        cout<<"Are you the One?"<<endl;
        cout<<"Enter Y to play"<<endl;
        cin>>play;
        cout<<"You are entering the matrix"<<endl;
        while(true){
            int i=0;
            //Output a random row of characters
            while(i<80){
                if(caRow[i]!=' '){
                    caRow[i]= GetChar(j + i*i, 33, 30);
                }
                std::cout<<caRow[i];
                ++i;
            }
            j=(j+31);
            k=(k+17);
            l=(l+47);
            m=(m+67);
            caRow[j%80]='-';
            caRow[k%80]=' ';
            caRow[l%80]='-';
            caRow[m%80]=' ';
            //Delay
            i=0;
            while(i<30){
                GetChar(1,1,1);
                ++i;
            }
        }
    
    //Process The Data
        
   
 
    //Output the value
   
    
    //Input Data for the second card
    
    //Evaluate the second card
    
 
    //Output the value
  
    
    //Input Data for the second card
   
    //Evaluate the second card
   
    //Output the value
   }while(play!='Y');
   cout<<"You are exiting the game"<<endl;
    //Exit Stage Right!
    return 0;
}
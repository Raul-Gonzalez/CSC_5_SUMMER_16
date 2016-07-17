/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random 
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast);
    //Declare Variables
    char player, compter;
    int win=0,loss=0,tie=0;//
    
    
    //Play until user wants to stop
    do{
    //Input Data
        cout<<"RPS Game, what is your move R or P or S"<<endl;
        cin>>player;
    
    //Process the Data
        do{
            compter=rand()%4+80;//[P,Q,R,S]
        }while(compter=='Q');
        cout<<"Player = "<<player<<" :Computer = "<<compter<<endl;
        switch(compter){
            case 'P':{
                if(player=='P')cout<<"Ties so far = "<<++tie<<endl;
                else if(player=='R')cout<<"Loss so far= "<<++loss<<endl;
                else cout<<"Wins so far = "<<++win<<endl;
                break;
            }
            case 'R':{
                if(player=='P')win++;
                else if(player=='R')cout<<"Ties so far = "<<++tie;<<endl;
                else cout<<"Loss so far= "<<++loss<<endl;
                break;
            }
            case 'S':{
                if(player=='P')loss++;
                else if(player=='R')win++;
                else cout<<"Ties so far = "<<++tie;<<endl;
            }
            default:cout<<"Your are quiting "<<player<<endl;
            break;
    }    
    //Output the processed Data
    }while(player=='P'||player=='R'||player=='S');
    cout<<"Total wins = "<<win<<endl;
    cout<<"Total loss = "<<loss<<endl;
    cout<<"Total ties = "<<tie<<endl;
    //Exit Stage Right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 30, 2016, 1:45 PM
 * Purpose:  Coding Game
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>     //Time for random seed
#include <cstdlib>   //Random number seed
#include <iomanip>   //Formatting
#include <cmath>     //Math Library
#include <fstream>   //File I/O
#include <string>    //String Object
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int SIZE=12;

//Function Prototypes
float winRatio(float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int num1=0,num2=0,num3=0,//Random numbers used to call each word
        nLoss=0,nWins=0;//Counters used for number of wins|losses
    int count1=0,count2=0,count3=0;
    const int ROWS=10;
    string word,guess1,guess2,guess3,//Strings Declared for each guess
            fName;//String used for the file
    ifstream inFile1,inFile2,inFile3;//Files where words will be obtained from
    char lName[SIZE],
            play;//Prompts user for input to initialize the game
    ofstream out;//Used to send Data to a file
    
    //Open files and Input Data
    inFile1.open("input.dat");
    inFile2.open("word2.txt");
    inFile3.open("word3.txt");
    out.open("stats.dat");
    
    cout<<"A WORM has infected the servers in the Nebuchandnezzar.";
    cout<<" It is up to you to save the day."<<endl;
    cout<<"You must guess a series of the most commonly used words in";
    cout<<" the English language."<<endl;
    
    //Prompt User to Play
    cout<<"Are you the One?"<<endl;
    cout<<"Enter Y to play"<<endl;
    cin>>play;
    cout<<endl;
    
    if(play=='Y'){
    //Prompt user for Name
    cout<<"What is your first Name"<<endl;
    cin>>fName;
    cout<<"What is your last Name"<<endl;
    cin>>lName;
    
    //Input the Data for the first test
    while (count1<1){
        num1 = rand()%10+1;
        count1++;
    }
    for (count1 =0;count1<num1; ++count1)
    {
        getline(inFile1, word);//Get the word
    }
    cout<<"Guess a three character word from the list"<<endl;
    
    
    //Loop used for the first guess
    while(guess1!=word){
        cin>>setw(3)>>guess1;
        cout<<endl;
        if(guess1!=word){
        cout<<"You have not entered the correct word"<<endl;
        cout<<endl;
        cout<<"Try to guess the three character word again"<<endl;
          nLoss++;  
        }
        if(guess1==word)nWins++;
    }
    cout<<"You have passed the first test."<<endl;
        
    //Input Data for the Second Test
    while (count2<1){
        num2 = rand()%10+1;
        count2++;
        cout<<num2<<endl;
    }
    for (count2=0;count2<num2;++count2)
    {
        getline(inFile2, word);//Get the word
    }
    //Loop used for the second guess
        while(guess2!=word){
        cout<<"Guess a four character word"<<endl;
        cin>>setw(4)>>guess2;
        cout<<endl;
        if(guess2!=word){
        cout<<"You have not entered the correct word"<<endl;
        cout<<endl;
        cout<<"Try to guess the four character word again"<<endl;
        cout<<endl;
          nLoss++;  
        }
        if(guess2==word)nWins++;
    }
    cout<<"You have passed the second test."<<endl;
    
    //Input the data for the third test
    while (count3<1){
        num3 = rand()%10+1;
        count3++;
        cout<<num3<<endl;
    }
    for (count3 =0;count3<num3; ++count3)
    {
        getline(inFile3, word);//Get the word
    }
    //Loop for the third guess
    while(guess3!=word){
        cout<<"Guess a five character word"<<endl;
        cin>>setw(5)>>guess3;
        cout<<endl;
        if(guess3!=word){
        cout<<"You have not entered the correct word"<<endl;
        cout<<endl;
        cout<<"Try to guess the five character word again"<<endl;
          nLoss++;  
        }
        if(guess3==word)nWins++;
    }
    cout<<"You have passed the third test."<<endl;
    cout<<endl;
    
    //Output the processed Data to the screen
    cout<<"The Nebuchandnezzar has been saved"<<endl;
    cout<<endl;
    cout<<"Total wins are "<<nWins<<endl;
    cout<<endl;
    cout<<"Total losses are "<<nLoss<<endl;
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<" = "<<winRatio(nWins,nLoss)<<"%"<<endl;
    if(nWins>=nLoss){
        cout<<"You are doing better than most"<<endl;
    }
 
    //Output the processed Data to a file
    out<<endl<<fName<<" "<<lName<<" Game Stats "<<endl;
    out<<" Number of Wins   = "<<nWins<<endl;
    out<<" Number of Losses = "<<nLoss<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<" = "<<winRatio(nWins,nLoss)<<"%"<<endl;
    if(nWins>=nLoss){
        out<<"You are doing better than most"<<endl;
    }
    }else{
        cout<<"You have quite the game with "<<play<<endl;
    }
    
    //Exit Stage Right!
    inFile1.close();
    inFile2.close();
    inFile3.close();
    out.close();
    return 0;
}

float winRatio(float nWins,float nLoss){
    cout<<"The percentage of Wins "<<endl;
    return (nWins/(nWins+nLoss))*100;
}

void word1()
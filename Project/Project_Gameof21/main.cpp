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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int num1=0,num2=0,num3=0, nLoss=0,nWins=0;
    int count=0,tries=5;
    string word,guess1,guess2,guess3;
    ifstream inFile1,inFile2,inFile3;//Files where words will be obtained from
    char play;
    
    //Open files and Input Data
    inFile1.open("word1.txt");
    inFile2.open("word2.txt");
    inFile3.open("word3.txt");
    
    cout<<"A WORM has infected the servers in the Nebuchandnezzar.";
    cout<<" It is up to you to save the day."<<endl;
    cout<<"You must guess a series of the most commonly used words in";
    cout<<" the English language."<<endl;
    
    //Input the Data
    cout<<"Are you the One?"<<endl;
    cout<<"Enter Y to play"<<endl;
    cin>>play;

    //Input the Data for the first test
    while (count<1){
        num1 = rand()%10+1;
        count++;
        cout<<num1<<endl;
    }
    for (count =0;count<num1; ++count)
    {
        getline(inFile1, word);//Get the word
    }
    //Loop used for the first guess
    while(guess1!=word){
        cout<<"Guess a three character word"<<endl;
        cin>>guess1;
        if(guess1!=word){
        cout<<"You have not entered the correct word"<<endl;
        cout<<endl;
        cout<<"Try to guess the three character word again"<<endl;
          nLoss++;  
        }
        if(guess1==word)nWins++;
    }
    cout<<"You have passed the first test."<<endl;
    cout<<"Number of losses "<<nLoss<<endl;
    cout<<"Number of wins "<<nWins<<endl;
        
    //Input Data for the Second Test
    while (count<1){
        num2 = rand()%10+1;
        count++;
        cout<<num2<<endl;
    }
    for (count=0;count<num2;++count)
    {
        getline(inFile2, word);//Get the word
    }
    //Loop used for the second guess
        while(guess2!=word){
        cout<<"Guess a four character word"<<endl;
        cin>>guess2;
        if(guess2!=word){
        cout<<"You have not entered the correct word"<<endl;
        cout<<endl;
        cout<<"Try to guess the four character word again"<<endl;
        cout<<endl;
          nLoss++;  
        }
        if(guess2==word)nWins++;
        cout<<"You have passed the second test."<<endl;
    }
    cout<<"Number of losses "<<nLoss<<endl;
    cout<<"Number of wins "<<nWins<<endl;
    
    //Input the data for the third test
    while (count<1){
        num3 = rand()%10+1;
        count++;
        cout<<num3<<endl;
    }
    for (count =0;count<num3; ++count)
    {
        getline(inFile3, word);//Get the word
    }
    //Loop for the third guess
    while(guess3!=word){
        cout<<"Guess a five character word"<<endl;
        cin>>guess3;
        if(guess3!=word){
        cout<<"You have not entered the correct word"<<endl;
        cout<<endl;
        cout<<"Try to guess the five character word again"<<endl;
          nLoss++;  
        }
        if(guess3==word)nWins++;
    }
    cout<<"You have passed the third test."<<endl;
    cout<<"Total wins are "<<nWins<<endl;
    cout<<"Total losses are "<<nLoss<<endl;
 
    //Output the value
  
    
    //Input Data for the second card
   
    //Evaluate the second card
   
    //Output the value
   /*else
   cout<<"You are exiting the game"<<endl;*/

   
    //Exit Stage Right!
    return 0;
}
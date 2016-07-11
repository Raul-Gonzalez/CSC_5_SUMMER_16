/*
* File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 28, 2016, 1:26 PM
 * Purpose: Midterm Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants PI, Gravity, Conversions

//Function Prototypes
void prob(1);
void prob(2);
void prob(3);
void prob(4);
void prob(5);
void prob(6);
void menu();


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
       
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data and display results
        switch(choice){
            case '1':prob 1();break;
            case '2':prob 2();break;
            case '3':prob 3();break;
            case '4':prob 4();break;
            case '5':prob 4();break;
            case '6':prob 5();break;
            default:cout<<"Not an option n the menu"<<endl;
        }
    }while(choice>=1&&choice<=6);
        

    
    //Exit Stage Right!
    return 0;
}

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            MENU
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Display Menu
//      Inputs  - None
//      Outputs - The Menu
void menu();
cout<<"Menu for the midterm"<<endl;
cout<<"Simple choose the number fo rthe problem to dispaly"<<endl;
cout<<"Type 1 for problem 1"<<endl;
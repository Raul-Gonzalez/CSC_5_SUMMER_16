/*
* File:   main.cpp
 * Author: Raul Gonzalez
 * Created on June 28, 2016, 1:26 PM
 * Purpose: Menu with four different techniques to determine grade 
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Manipualte Library
#include <cstdlib>  //Setting random number seed
#include <ctime>    //Time library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants PI, Gravity, Conversions
const int CNINFT=12;

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    do{
        menu();
        cin>>choice;
    
    //Process the Data
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:cout<<"Not an option in the Menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit Stage Right!
    return 0;
}

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Problem 1
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Conversion Problem
//      Inputs  - Argument list void
//      Internal Input
//          inches -> dimension inches
//      Outputs - Return void
//      Internal Output
//          feet   -> dimensions feet    
void prob1(){
        //Decalre variables
        float inches,feet;
        
        //Prompt for inputs
        cout<<"Conversion from inches to feet"<<endl;
        cout<<"Input the number of inches"<<endl;
        cin>>inches;
        
        //Process the data
        feet=inches/CNINFT;
        
        //Output the results
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<inches<<"(in) = "<<feet<<"(ft)"<<endl;
        
        //Retrun from conversion problem
        return;
    }

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Problem 2
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Tosses a pair of Dice
//      Inputs  - Argument list void
//      Internal Input
//          die1,die2 ->[1,6]
//  Internal Output
//           sum     ->[2,12]
void prob2(){
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Decalre variables 
    char die1,die2,sum;
    
    //Process
    die1=rand()%6+1;
    die2=rand()%6+1;
    sum=die1+die2;
    
    //Output the results
    cout<<"Random Dice Toss -> "<<static_cast<int>(sum)
            <<" = "<<static_cast<int>(die1)
            <<" + "<<static_cast<int>(die2)<<endl;
    
    //Return from tossing the dice
    return;
}

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Problem 3
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
// Display Menu
//      Inputs  - None
//      Output - Solution to Problem 3
void prob3(){
    cout<<"You are entering Problem 3"<<endl;
}

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Problem 4
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
// Display Menu
//      Inputs  - None
//      Output - Solution to Problem 4
void prob4(){
    cout<<"You are entering Problem 4"<<endl;
}

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Problem 5
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
// Display Menu
//      Inputs  - None
//      Output - Solution to Problem 5
void prob5(){
    cout<<"You are entering Problem 5"<<endl;
}

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Problem 
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
// Display Menu
//      Inputs  - None
//      Output - Solution to Problem 6
void prob6(){
    cout<<"You are entering Problem 6"<<endl;
}

//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                            Problem 
//00000000111111112222222233333333444444445555555566666666777777778888888899999999
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//
// Display Menu
//      Inputs  - None
//      Outputs - The Menu
void menu(){
cout<<endl;
cout<<"Menu Program for Midterm Example Test"<<endl;
cout<<"Simple choose the number for the problem to display"<<endl;
cout<<"Type 1 for problem 1 convert from inches to feet"<<endl;
cout<<"Type 2 for problem 2 "<<endl;
cout<<"Type 3 for problem 3"<<endl;
cout<<"Type 4 for problem 4"<<endl;
cout<<"Type 5 for problem 5"<<endl;
cout<<endl;
}
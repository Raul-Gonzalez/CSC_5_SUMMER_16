/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //Declare Variables
    unsigned int hrs;//The amount of hours used
    float chrgs1,chrgs2,chrgs3;//Charges for each subscription
    float savings;//The amount a customer can save

    //Input Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Enter the number of hours used"<<endl;
    cin>>hrs;

    //Process the Data
    //For Package 1
    if(hrs<=5)
        chrgs1=16.75;//Charges for subscription
    if(hrs>5&&hrs<=20)
        chrgs1=16.75+(hrs-5)*.75;//Charges for additional hours
    if(hrs>20)
        chrgs1=16.75+(0.75*15)+(hrs-20)*1.0;
    cout<<"Your total charges are $ "<<chrgs1<<endl;


    //For Package 2
    if(hrs<=15)
        chrgs2=23.75;//Charges for subscription
    if(hrs>15&&hrs<=25)
        chrgs2=23.75+(hrs-15)*.55;//Charges for additional hours
    if(hrs>25)
        chrgs2=23.75+(0.55*10)+(hrs-25)*.7;//Charges for double add hours
    cout<<"Your total charges are $ "<<chrgs2<<endl;


    //For Package 3
    chrgs3=29.95;
    cout<<"Your total charges are $ "<<chrgs3<<endl;

    /*Check for cheapest deal and output
    if(hrs>27){
        savings=chrgs1-chrgs3;
        cout<<"Switch to Package 3 to save"<<endl;
        cout<<"Your savings will be $ "<<savings<<endl;
    }else if(hrs<27&&chrgs2<chrgs1){
        savings=chrgs1-chrgs2;
        cout<<"Switch to Package 2 to save "<<endl;
        cout<<"Your savings will be $ "<<savings<<endl;
    }else{
        cout<<"Stay with Package 1 to save "<<endl;
    }
    */
     
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}
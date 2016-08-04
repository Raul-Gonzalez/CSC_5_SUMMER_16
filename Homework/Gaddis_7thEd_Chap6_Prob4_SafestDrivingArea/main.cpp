/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Rectangle Area with Functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int getNAcc();
void findLow(int,int,int,int,int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input Data
    cout<<"Enter the number of accidents in northern region"<<endl;
    int reg1=getNAcc();
    cout<<"Enter the number of accidents in southern region"<<endl;
    int reg2=getNAcc();
    cout<<"Enter the number of accidents in eastern region"<<endl;
    int reg3=getNAcc();
    cout<<"Enter the number of accidents in western region"<<endl;
    int reg4=getNAcc();
    cout<<"Enter the number of accidents in central region"<<endl;
    int reg5=getNAcc();
    
    //Process the Data
    
    //Output the processed Data
   findLow(reg1,reg2,reg3,reg4,reg5);
    
    //Exit Stage Right!
    return 0;
}

int getNAcc(){
    int crash;
    cin>>crash;
    return crash;
}

void findLow(int reg1,int reg2,int reg3,int reg4,int reg5){
    
    if(reg1<reg2&&reg1<reg3&&reg1<reg4&&reg1<reg5){
        cout<<"The northern is the safest driving area"<<endl;
    }
    else if(reg2<reg1&&reg2<reg3&&reg2<reg4&&reg2<reg5){
        cout<<"The southern is the safest driving area"<<endl;
    }
    else if(reg3<reg1&&reg3<reg2&&reg3<reg4&&reg3<reg5){
        cout<<"The eastern is the safest driving area"<<endl;
    }
    else if(reg4<reg1&&reg4<reg2&&reg4<reg4&&reg4<reg5){
        cout<<"The western is the safest driving area"<<endl;
    }
    else if(reg5<reg1&&reg5<reg2&&reg5<reg3&&reg5<reg4){
        cout<<"The central is the safest driving area"<<endl;
    }
        return;
}
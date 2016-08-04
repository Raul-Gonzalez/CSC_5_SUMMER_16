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
float getLen();
float getWid();
float calArea(float,float);
void dispData(float);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input Data
    float length=getLen();
    float width=getWid();
    
    //Process the Data
    float area=calArea(length,width);
    
    //Output the processed Data
    dispData(area);
    
    //Exit Stage Right!
    return 0;
}

float getWid(){
    int width;
    cout<<"Enter the width of the Rectangle"<<endl;
    cin>>width;
    return width;
}

float getLen(){
    int length;
    cout<<"Enter the length of the Rectangle"<<endl;
    cin>>length;
    return length;
}

float calArea(float length,float width){
    return width*length;
}

void dispData(float area){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The area of the triangle is = "<<area<<endl;
}
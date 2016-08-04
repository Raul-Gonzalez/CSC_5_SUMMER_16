/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */


//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random
#include <iomanip>   //Formatting
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries
#include "Array.h"

//Global Constants

//Function Prototypes
Array *filAray(int);//Ordered Random 4 digit numbers
void prntAry(Array *,int);
void swap(int &,int &);
void smlnlst(Array *,int);
void markSrt(Array *);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=1000;
    Array *array;
   
    //Input Data
    array=filAray(SIZE);
    cout<<"Original Array printed using the Indexed Array and Structure"<<endl;
    prntAry(array,1);
    
    //Process the Data
    markSrt(array);
    
    //Output the processed Data
    cout<<"Sorted Array printed using the Indexed Array and Structure"<<endl;
    prntAry(array,10);
    
    //Exit Stage Right!
    delete []array->data;
    delete []array->index;
    delete array;
    return 0;
}
void markSrt(Array *a){
    for(int i=0;i<a->size-1;i++){
        smlnlst(a,i);
    }
}

void smlnlst(Array *a,int pos){
    for(int i=pos+1;i<a->size;i++){
        if(a->data[a->index[pos]]>a->data[a->index[i]])
            swap(a->index[pos],a->index[i]);
    }
}

void swap(int &a,int &b){
    //Logical swap
    a=a^b;
    b=a^b;
    a=a^b;
}

void prntAry(Array *a, int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<setw(6)<<a->data[a->index[i]];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *filAray(int n){
    //Declare variables
    Array *a=new Array;
    a->size=n;
    a->data=new int [n];
    a->index=new int[n];
    for(int i=0;i<a->size;i++){
        a->data[i]=rand()%90+10;//[10,99]
        a->index[i]=i;
    }
    return a;
}
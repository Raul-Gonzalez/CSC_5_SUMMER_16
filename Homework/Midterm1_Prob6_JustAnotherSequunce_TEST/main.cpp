/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>    //Math Library
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int x,n;
    float answer, denom;
    unsigned int fact=1;
    
    
    //Input Data
    cout<<"This program calculates a sequence: ";
    cout<<"sum = x - x^3/3! + x^5/5! - x^7/7! + ........."<<endl;
    cout<<"Input x and the number of terms n, which will then be calculated"<<endl;
    //cin>>x>>n;
    
    //Process the Data
    //First calculate the factorial
    cin>>n;
    //denom=n-1;
    for(int i=1;n<=33;i++,n++){
        fact*=i;
        cout<<n<<"!="<<fact<<endl;
        
    }
    
    //Output the processed Data
    
    
    //Exit Stage Right!
    return 0;
}
    
/*
int fact(int x){
    if(x>1){
        return x * fact(x-1);
    }
    else {
        return 1 ;
    }
}

int main () {
    int x , i=1 , sign=1;
    float result, rad;
    scanf("%d",&x);
    rad = x/180.0*3.1415;
    while((pow(x,i)/fact(i))>0.001){
        result += sign*(pow(rad,i)/fact(i));
        i+=2;
        sign *= -1 ;
    }
    printf("result= %f\n",result);
    return 0 ;
}*/
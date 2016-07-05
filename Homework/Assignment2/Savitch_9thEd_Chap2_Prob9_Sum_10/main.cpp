/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 *
 * Created on June 27, 2016, 12:55 PM
 * Numbers Test
 */
//System Libraries
#include <iostream>//Input Output Stream Library
#include <iomanip>//
using namespace std;// Iostream uses the standard namespace

//User Libraries

// Global Constants

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables here, no doubles
    int x;//Number to input 10 times 
    int sumAll=0,sumEven=0,sumOdd=0,sumPos=0,sumNeg=0;
    
// Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
  
  // Input Data
  cout<<"Input an integer"<<endl;
  cin>>x;
  

// Process Data
  sumAll+=x;
  if(x%2==0)sumEven+=x;//BLock of code with else statement, Dependent if
  else sumOdd+=x;//Block of code with previous if statement
  sumPos += x>0? x:0;//Ternary Operator
  if (x<0) sumNeg +=x;//Independent if statement
    
// Output Data
  cout<<"Sum All      = "<<setw(5)<<sumAll<<endl;
  cout<<"Sum Even     = "<<setw(5)<<sumEven<<endl;
  cout<<"Sum Odd      = "<<setw(5)<<sumOdd<<endl;
  cout<<"Sum Positive = "<<setw(5)<<sumPos<<endl;
  cout<<"Sum Negative = "<<setw(5)<<sumNeg<<endl;
  
//Exit stage Right!
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 *
 * Created on June 27, 2016, 12:32 PM
 * Calculate the distance a car with a full tank of gas can travel in town/highway
 */
//System Libraries
#include <iostream>//Input /Output Stream Library
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
  bool x,y;  
    
// Input Data
  

// Process Data
  
    
// Output Data
  cout<<"The Truth Table"<<endl;
  cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y ";
  cout<<" !(X&&Y) !X||!Y"<<endl;
  
//First Row
  x=true;y=true;
  cout<<(x?'T':'F')<<" ";
  cout<<(y?'T':'F')<<"  ";
  cout<<(!x?'T':'F')<<"  ";
  cout<<(!y?'T':'F')<<" ";
  cout<<(x||y?'T':'F')<<"     ";
  cout<<(x&&y? 'T':'F')<<"   ";
  cout<<(x^y? 'T':'F')<<"   ";
  cout<<(x^y^y? 'T':'F')<<"     ";
  cout<<(x^y^x? 'T':'F')<<"     ";
  cout<<(!(x||y)? 'T':'F')<<"       ";
  cout<<(!x&&!y? 'T':'F')<<"       ";
  cout<<(!(x&&y)? 'T':'F')<<"       ";
  cout<<(!x||!y? 'T':'F')<<"  ";
  cout<<endl;
  
  //Second Row
   x=true;y=false;
  cout<<(x?'T':'F')<<" ";
  cout<<(y?'T':'F')<<"  ";
  cout<<(!x?'T':'F')<<"  ";
  cout<<(!y?'T':'F')<<" ";
  cout<<(x||y?'T':'F')<<"     ";
  cout<<(x&&y? 'T':'F')<<"   ";
  cout<<(x^y? 'T':'F')<<"   ";
  cout<<(x^y^y? 'T':'F')<<"     ";
  cout<<(x^y^x? 'T':'F')<<"     ";
  cout<<(!(x||y)? 'T':'F')<<"       ";
  cout<<(!x&&!y? 'T':'F')<<"       ";
  cout<<(!(x&&y)? 'T':'F')<<"       ";
  cout<<(!x||!y? 'T':'F')<<"  ";
  cout<<endl;
  
  //Third Row
   x=false;y=true;
  cout<<(x?'T':'F')<<" ";
  cout<<(y?'T':'F')<<"  ";
  cout<<(!x?'T':'F')<<"  ";
  cout<<(!y?'T':'F')<<" ";
  cout<<(x||y?'T':'F')<<"     ";
  cout<<(x&&y? 'T':'F')<<"   ";
  cout<<(x^y? 'T':'F')<<"   ";
  cout<<(x^y^y? 'T':'F')<<"     ";
  cout<<(x^y^x? 'T':'F')<<"     ";
  cout<<(!(x||y)? 'T':'F')<<"       ";
  cout<<(!x&&!y? 'T':'F')<<"       ";
  cout<<(!(x&&y)? 'T':'F')<<"       ";
  cout<<(!x||!y? 'T':'F')<<"  ";
  cout<<endl;

  //Fourth Row
   x=false;y=false;
  cout<<(x?'T':'F')<<" ";
  cout<<(y?'T':'F')<<"  ";
  cout<<(!x?'T':'F')<<"  ";
  cout<<(!y?'T':'F')<<" ";
  cout<<(x||y?'T':'F')<<"     ";
  cout<<(x&&y? 'T':'F')<<"   ";
  cout<<(x^y? 'T':'F')<<"   ";
  cout<<(x^y^y? 'T':'F')<<"     ";
  cout<<(x^y^x? 'T':'F')<<"     ";
  cout<<(!(x||y)? 'T':'F')<<"       ";
  cout<<(!x&&!y? 'T':'F')<<"       ";
  cout<<(!(x&&y)? 'T':'F')<<"       ";
  cout<<(!x||!y? 'T':'F')<<"  ";
  cout<<endl;
//Exit stage Right!
    
    return 0;
}


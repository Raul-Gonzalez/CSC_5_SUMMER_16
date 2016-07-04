/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 3, 2016, 3:50PM
 * Purpose:  Stock Transaction Program
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manipulate Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float stckPrc1, stckPrc2, brkrPer, profit;
    float stckBgt,shrsEx,amtCom1,amtCom2,stckSld;
    
    //Input Data
    shrsEx=1000;    //Number of shares purchased by Joe
    stckPrc1=32.87; //Price Joe purchased the stock for
    brkrPer=0.02;   //Percent of commission broker makes
    
    stckPrc2=33.92;  //Price that Joe sold stocks for
    
    //Process the Data
    amtCom1=brkrPer*shrsEx*stckPrc1*1.0f;
    amtCom2=brkrPer*shrsEx*stckPrc2*1.0f;
    profit=((shrsEx*stckPrc2)-amtCom2)-((shrsEx*stckPrc1)-amtCom1);
    stckSld=stckPrc2*shrsEx;
    stckBgt=stckPrc1*shrsEx;
    
    //Output the processed Data
    cout<<"Stock Transaction Report"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Price paid for stocks                        $ "<<stckBgt<<endl;
    cout<<"Amount paid to broker when purchasing stocks $   "<<amtCom1<<endl;
    cout<<"Price stocks were sold for                   $ "<<stckSld<<endl;
    cout<<"Amount paid to broker when selling stocks    $   "<<amtCom2<<endl;
    cout<<"The profit made after selling the stock is   $  "<<profit<<endl;
    
    //Exit Stage Right!
    return 0;
}

/*
 * File:   main.cpp
 * Author: Raul Gonzalez
 *
 * Created on June 21, 2016, 1:10 PM
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std; //Namespace of the Syaytem Libraries

//User Libaries 

//Global Constants

//Funtioc prototypes

//Execution Begins Here !

int main(int argc, char** argv) {
    // Declare Variables 
    float profit=0.40f;   //40 perecent profit
    float cost=12.67f;    // Coast in Dllrs
    float selPrce;        //Selling price in Dllrs
    
    //Input Data

    //Process the data
    //sellPrce=cost*(1+profit);
    selPrce=cost*(1+profit);
    int pennies=selPrce*100+0.5;//Shift into pennies add half to round up
    selPrce=pennies/100.0f;
    
    //Output the processed data
    
    cout<<"Cost of circuit to the company = $"<<cost<<endl;
    cout<<"Profit desired on circuit board = "<<profit*100<<"%"<<endl;
    cout<<"Selling Price = $"<<selPrce<<endl;
    
    //Exit Stage Right!
    return 0;
}
    
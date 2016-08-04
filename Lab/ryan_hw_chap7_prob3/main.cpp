/* 
 * File:   main.cpp
 * Author: Ryan Peraza
 * Created on July 9, 2016, 11:30 AM
 * Purpose:  Salsa Sales
 */

//system libraries
# include <iostream>
# include <cstring>
using namespace std;

int main () {	
    float salsaSum = 0;
    
    int highestCount = 0; 
    int lowestCount = 0;
    int count = 0;

    float salsaTot[4];
    string salsaNms[] = {"mild","medium","hot","sweet","zesty"};
    
    cout << "Please enter the amount a jars sold for each salsa "<<endl;
    for (count = 0; count <= 4; count++)
    {
            cout<< salsaNms[count] << " : ";
            cin>> salsaTot[count];
            while (salsaTot[count] < 0)
            {
                    cout << "Please reenter a positive number for the month of " << salsaNms[count] << endl;
                    cin >> salsaTot[count];
            }
            // Add em all up to get the average later
            salsaSum = salsaSum + salsaTot[count];
            // Track the highest
            if (salsaTot[count] > salsaTot[highestCount]) {
                highestCount = count;
            }
            // Track the lowest
            if (salsaTot[count] < salsaTot[lowestCount]) {
                lowestCount = count;
            }
    
    }
    cout <<salsaSum<< " total salsa sales \n" <<endl;
    cout <<salsaNms[highestCount]<< " is the highest selling salsa" << endl;
    cout <<salsaNms[lowestCount]<< " is the lowest selling salsa" << endl;
    return 0;
}
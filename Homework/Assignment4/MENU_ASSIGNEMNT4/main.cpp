/* 
 * File:   main.cpp
 * Author: Raul Gonzalez
 * Created on July 7, 2016, 5:03 PM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Manip Linbrary
#include <ctime>     //Time library to set the random number seed
#include <cstdlib>   //Random number library
#include <cmath>     //Math Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Loop the process
    char answer;
    do{
        //Declare Variables
        char choice;//Character used for switch

        //Input Data
        //Ask the user what they would like to calculate
        cout<<"Assignment 4"<<endl;
        cout<<"Which problem would you like to play?"<<endl;
        cout<<"Type 1 for Gaddis 7thEd Chap 5 Problem 1 Sum All"<<endl;
        cout<<"Type 2 for Gaddis 7thEd Chap 5 Problem 3 Ocean Rise"<<endl;
        cout<<"Type 3 for Gaddis 7thEd Chap 5 Problem 4 Calories Burned"<<endl;
        cout<<"Type 4 for Gaddis 7thEd Chap 5 Problem 8 Math Menu"<<endl;
        cout<<"Type 5 for Gaddis 7thEd Chap 5 Problem 16 Saving Account"<<endl;
        cout<<"Type 6 for Gaddis 7thEd Chap 5 Problem 7 Double up on Penny"<<endl;
        cout<<"Type 7 for Gaddis 7thEd Chap 5 Problem 2 Ascii Codes"<<endl;
        cout<<"Type 8 for Savitch 8thEd Chap 4 Problem 1"<<endl;
        cout<<"Type 9 for Savitch 8thEd Chap 4 Problem 2"<<endl;
        cout<<"Type 0 for Savitch 8thEd Chap 4 Problem 4"<<endl;
         
        cin>>choice;
    
        //Process the Data
        switch(choice){
            case'1':{
                 //Declare Variables
                 int sum=0,num; //Number entered
 
                 //Loop the process
                 char answer;
                 do{
                    //Input Data
                    //Prompt user for the number
                    cout<<"Please enter a positive number"<<endl;
                    cin>>num;

                    if(num<0){
                        cout<<"Enter a positive integer"<<endl;
                    }else{
                        //Process the Data
                        //Loop used to add up all of the numbers
                        for(int i = 1; i <= num; i++){
                            sum+=i;//Accumulate the running total
                        }
                        //Output the processed Data
                        //Dispaly the total number
                        cout<<"The total is "<<sum<<endl;
                    }
                    cout<<endl<<"Would you like to run this again type Y for yes"<<endl;
                    cin>>answer;
                }while(answer=='Y'||answer=='y');
                //Exit Stage Right!
            //Exit the switch
            break;
            }
            case'2':{
                //Declare Variables
                float ocnRise,//The level at which the ocean is rising
                        time;//The years

                //Process the Data and output simultaneously
                cout<<"Ocean level rise in mm per year"<<endl;
                cout<<"Years      mm"<<endl;
                for(int year=1;year<=25;year++){
                    ocnRise=1.5*year;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<setw(3)<<year<<"\t"<<setw(5)<<ocnRise<<endl;
                }

                //Output the processed Data
                //Exit the switch
               break;
            }
            case '3':{
                //Declare Variables
                   float startMin = 0.0, //Starting time
                         endMin = 30.0,  //Ending time
                         incrmnt = 5;    //Increment time
                   float cnvfact = 3.9;  //Used to convert Calories Burned



                    //Variables 
                   float min;   //To hold calories per minute
                   float cal;   //To hold minutes  per calories     

                   //Set the numeric output formatting.
                    cout<<fixed<<setprecision(1.5)<<endl;


                   //Display the table headings
                   cout<<"min\tcal\n";
                   cout<<"_____________\n";

                   //Display the speeds.
                   for(min = startMin; min <= endMin; min += incrmnt)
                   {
                      //Calculate cal
                       cal=min*cnvfact;

                      //Display the calories in minutes.
                       cout<<setw(4)<< min<<"\t"<<setw(5)<<cal<<endl;
                   }

                    //Output the processed Data
                //Exit the switch
                break;

            }
            case '4':{
                //Declare Variables
                 //Loop the process
                char answer;
                do{
                    //Declare Variables
                    char choice;//Character used for switch

                    //Input Data
                    //Ask the user what they would like to calculate
                    cout<<"Math Game"<<endl;
                    cout<<"Which operation would you like to play?"<<endl;
                    cout<<"Type 1 for addition problem"<<endl;
                    cout<<"Type 2 for subtraction problem"<<endl;
                    cout<<"Type 3 for multiplication problem"<<endl;
                    cout<<"Type 4 for division problem"<<endl;
                    cout<<"Type 5 to quit the problem"<<endl;
                    cin>>choice;

                    //Process the Data
                    switch(choice){
                        case'1':{
                            //Declare Variables
                            srand(static_cast<unsigned int>(time(0)));
                            //Declare variables
                            float random1, random2, result;
                            float answer;

                            //Input data
                            random1=rand()%900+100;//Random 3 digit number
                            random2=rand()%900+100;//Random 3 digit number
                            result=random1+random2;

                            //Display the problem
                            cout<<"Calculate the result of the following problem!"<<endl;
                            cout<<"Line up and type the result"<<endl;
                            cout<<"   "<<random1<<endl;
                            cout<<" + "<<random2<<endl;
                            cout<<"-------"<<endl;
                            cin>>answer;
                            //Output and Process the Data
                            if(result-answer==0){
                                cout<<endl<<"Your answer is correct!"<<endl;
                            }else{
                                cout<<endl<<"Wrong the answer was "<<result<<endl;
                            }
                        //Exit the switch
                        break;
                        }
                        case'2':{
                            //Declare Variables
                            srand(static_cast<unsigned int>(time(0)));
                            //Declare variables
                            float random1, random2, result;
                            float answer;

                            //Input data
                            random1=rand()%900+100;//Random 3 digit number
                            random2=rand()%900+100;//Random 3 digit number
                            result=random1-random2;

                            //Display the problem
                            cout<<"Calculate the result of the following problem!"<<endl;
                            cout<<"Line up and type the result"<<endl;
                            cout<<"   "<<random1<<endl;
                            cout<<" - "<<random2<<endl;
                            cout<<"-------"<<endl;
                            cin>>answer;

                            //Output and Process the Data
                            if(result-answer==0){
                                cout<<endl<<"Your answer is correct!"<<endl;
                            }else{
                                cout<<endl<<"Wrong the answer was "<<result<<endl;
                            }
                            //Exit the switch
                           break;
                        }
                        case '3':{
                            //Declare Variables
                            srand(static_cast<unsigned int>(time(0)));
                            //Declare variables
                            float random1, random2, result;
                            float answer;

                            //Input data
                            random1=rand()%90+10;//Random 2 digit number
                            random2=rand()%9+1;//Random 1 digit number
                            result=random1*random2;

                            //Display the problem
                            cout<<"Calculate the result of the following problem!"<<endl;
                            cout<<"   "<<random1<<"*"<<random2<<endl;
                            cin>>answer;

                            //Output and Process the Data
                            if(result==answer){
                                cout<<endl<<"Your answer is correct!"<<endl;
                            }else{
                                cout<<endl<<"Wrong the answer was "<<result<<endl;
                            }
                            //Exit the switch
                            break;

                        }
                        case '4':{
                            //Declare Variables
                            srand(static_cast<unsigned int>(time(0)));
                            //Declare variables
                            float random1, random2, result;
                            float answer;

                            //Input data
                            random1=rand()%90+10;//Random 2 digit number
                            random2=rand()%9+1;//Random 1 digit number
                            cout<<fixed<<setprecision(2)<<endl;
                            result=random1/random2;

                            //Display the problem
                            cout<<"Calculate the result of the following problem!"<<endl;
                            cout<<"   "<<random1<<'/'<<random2<<endl;
                            cin>>answer;

                            //Output and Process the Data
                            if(result==answer){
                                cout<<endl<<"Your answer is correct!"<<endl;
                            }else{
                                cout<<endl<<"Wrong the answer was "<<result<<endl;
                            }
                            //Exit the switch
                            break;
                        }
                        case '5':{
                            cout<<"The program has quit"<<endl;
                            break;
                        }
                        default:cout<<"Not an option in the menu"<<endl;
            }
                    cout<<"Would you like to run the program again?"<<endl;
                    cout<<"Type Y to run"<<endl;
                    cin>>answer;

                }while(answer=='Y'||answer=='y');
                //Exit the switch
               break;
            } 
            case '5':{
                //Declare Variables
                    float annRate,//Annual interest rate
                          startBal,//Starting balance in savings account
                          mnthsPas,//Months that have passed since the account was established 
                          monIrate;//Monthly interest rate  
    
                    //Input Data
                    cout<<"Please enter the annual interest rate";
                    cout<<", starting balance, and the number of months"<<endl;
                    cin>>annRate>>startBal>>mnthsPas;

                    //Process the Data
                    annRate/=100.0f;//Convert percent to decimal
                    monIrate=annRate/12.0f;//

                    //Loop to display the result
                    float monyDep=0,//Moneys deposited
                          finBal=0,//Balance at the end of the period of time
                          intEarn=0,//Interest the money has earned
                          newBal=0,//New balance
                          totDep=0,//Total amount deposited 
                          totWit=0,//Total amount withdrawn
                          totIrate=0,//Total interest earned
                          monyWit=0;//Moneys withdrawn
                    int month=1,num=1;
                    do{

                        cout<<"Enter moneys deposited for month "<<num<<endl;
                        cin>>monyDep;//Money deposited into the account
                        while(monyDep<0){
                            cout<<"Enter a valid amount deposited for month "<<num<<endl;
                            cin>>monyDep;
                        }
                        cout<<"Enter moneys withdrawn for month "<<num<<endl;
                        cin>>monyWit;//Money taken out of the account
                        while(monyWit<0){
                            cout<<"Enter a valid amount withdrawn for month "<<num<<endl;
                            cin>>monyWit;
                        }
                        newBal=intEarn+startBal+monyDep+totDep-totWit-monyWit;//Balance after monthly transactions
                        intEarn=monIrate*newBal;//Interest earned at the end of the month
                        totIrate+=intEarn;//Total amount of interest earned
                        totDep+=monyDep;//Total amount deposited
                        totWit+=monyWit;//Total amount withdrawn
                        num++;
                        month++;

                    }while(month<=mnthsPas);
                    finBal=totIrate+startBal+totDep-totWit;
                    int pennies=finBal*100+0.5;//Round to the nearest penny
                    finBal=pennies/100.0f;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Final balance in the account is $ "<<setw(6)<<finBal<<endl;
                    cout<<"Total amount of withdrawals is  $ "<<setw(6)<<totWit<<endl;
                    cout<<"Total amount of deposits is     $ "<<setw(6)<<totDep<<endl;
                    cout<<"Total interest earned is        $ "<<setw(6)<<totIrate<<endl;
                //Exit the switch
                break;
            }
            case '6':{
                //Declare Variables
                srand(static_cast<unsigned int>(time(0)));
                //Declare variables
                int pennies=1;//Initial pay per day
                int payDay=0;//Pay at the end of the month

                //Input Data

                //Process the Data
                for(int day =1;day<=30;day++){
                    payDay+=pennies;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(10)<<pennies/100.0f;
                    cout<<" Pay earned $"<<setw(12)<<payDay/100.0f<<endl;
                    pennies*=2;
                }
                //Exit the switch
                break;
            }
            case '7':{
                //Declare Variables
                srand(static_cast<unsigned int>(time(0)));
                //Declare variables
                //Loop created for Ascii code
                for(unsigned char i=0;i<=127;i++){
                    cout<<"Ascii Code = "<<static_cast<int>(i)<<" = Character = "<<i<<endl;
                }
                for(unsigned char i=0;i<=127;i++){
                    cout<<i;
                    if(i%16==15)cout<<endl;
                }
                //Exit the switch
                break;
            }
            case '8':{
                //Declare Variables
                srand(static_cast<unsigned int>(time(0)));
                //Declare variables
                float liters=0,litGas=0.2464179;//Number of Liters of Gas consumed by the car
                float galGas=0;//liters converted into Gallons
                int nMiles=0;//Number Of Miles Car was driven
                int gasMil=0;//miles per Gallon


                //Input Data
                cout<<"Input the Number of Liters car consumed"<<endl;
                cin>>liters;
                cout<<"Input the Number of Miles car has been Driven"<<endl;
                cin>>nMiles;

                //Process the Data
                galGas=liters*litGas;
                gasMil=nMiles/galGas;

                //Output the processed Data
                cout<<gasMil<<" Miles Per Gallon "<<endl;
                //Exit the switch
                break;
            }
            case '9':{
                //Declare Variables
                float liters,litGas=0.246179;//Number of Liters of Gas consumed by the car
                float galGas;//liters converted into Gallons
                int nMiles;//Number Of Miles Car was driven
                float gasMil;//miles per Gallon
                float secLit;
                int secMil;
                float sgalGas;
                float sgasMil;

                //Input Data
                cout<<"Input the Amount of Liters First car Consumed"<<endl;
                cin>>liters;
                cout<<"Input the Number of Miles First car has been Driven"<<endl;
                cin>>nMiles;
                cout<<"Input the Amount of Liters the Second car Consumed"<<endl;
                cin>>secLit;
                cout<<"Input the Number of Miles the Second car has been Driven"<<endl;
                cin>>secMil;

                //Process the Data
                galGas=liters*litGas;
                sgalGas=secLit*litGas;
                gasMil=nMiles/galGas;
                sgasMil=secMil/sgalGas;

                if (gasMil>sgasMil)
                    cout<<"First car is the Most Fuel Efficient"<<endl;
                else{
                    cout<<"Second car is the Most Fuel Efficient"<<endl;
                }



                //Output the processed Data
                cout<<fixed<<setprecision(2)<<showpoint<<endl;
                cout<<gasMil<<" Miles Per Gallon : First Car"<<endl;
                cout<<sgasMil<<" Miles Per Gallon : Second Car"<<endl;
                //Exit the switch
                break;
            }
            case '0':{
                //Declare Variables
                //Input Data
    
                //Process the Data and output
                for (int bottles=99;bottles>=1;bottles--){
                    //Calculate tens and ones
                    int nTens=(bottles-bottles%10)/10;//Gives the number of tens
                    int nOnes=bottles-nTens*10;//Number of 1's
                    for(int times=1;times<=3;times++){
                        if(times==3){
                        int temp=bottles-1;
                        nTens=(temp-temp%10)/10;//Number of tens
                        nOnes=temp-nTens*10;//Number of 1's
                    }
                    switch(nTens){
                        case 9:cout<<"Ninety ";break;
                        case 8:cout<<"Eighty ";break;
                        case 7:cout<<"Seventy ";break;
                        case 6:cout<<"Sixty ";break;
                        case 5:cout<<"Fifty ";break;
                        case 4:cout<<"Forty ";break;
                        case 3:cout<<"Thirty ";break;
                        case 2:cout<<"Twenty ";break;
                        case 1:{
                            switch(nOnes){
                                case 0:cout<<"Ten ";break;
                                case 1:cout<<"Eleven ";break;
                                case 2:cout<<"Twelve ";break;
                                case 3:cout<<"Thirteen ";break;
                                case 4:cout<<"Fourteen ";break;
                                case 5:cout<<"Fifteen ";break;
                                case 6:cout<<"sixteen ";break;
                                case 7:cout<<"seventeen ";break;
                                case 8:cout<<"Eighteen ";break;
                                case 9:cout<<"Nineteen ";break;
                            }    
                        }
                    }
                    if(nTens!=1){
                        switch(nOnes){
                                case 0:if(nTens==0)cout<<"Zero ";break;
                                case 1:cout<<"One ";break;
                                case 2:cout<<"Two ";break;
                                case 3:cout<<"Three ";break;
                                case 4:cout<<"Four ";break;
                                case 5:cout<<"Five ";break;
                                case 6:cout<<"Six ";break;
                                case 7:cout<<"Seven ";break;
                                case 8:cout<<"Eight ";break;
                                case 9:cout<<"Nine ";break;
                            }    
                        }
                        if(times==1||times==3)cout<<" bottles of beer on the wall, "<<endl;
                        else if (times==2){
                            cout<<" bottles of beer."<<endl;
                            cout<<"You take one down and pass it around "<<endl;
                        }else{
                            cout<<" bottles of beer on the wall."<<endl;
                        }
                    }
                    cout<<endl;
                }
                //Exit the switch
                break;
            }
        
            default:cout<<"Not an option in the menu"<<endl;
            cout<<"Would you like to run the program again?"<<endl;
            cout<<"Type Y to run"<<endl;
            cin>>answer;
        }
    }while(answer=='Y'||answer=='y'); 
    //Exit Stage Right!
    return 0;
}
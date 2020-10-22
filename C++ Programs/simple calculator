#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    //-------defining variables and initializing them-------------
    double num1,num2;
    char operation,redo;
    //--------Printing my name on screen----------------
    cout<<"Welcome to the calculater program v.1.0 written by Your Name"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<endl<<endl<<endl;
    //--here do loop is used so that the program can be used more then one time
    //without exiting the run screen---------------------------
    do
    {
        //----receiving the variables from input--------------
        cout<<" Please enter an operation which you like to calculate (+,-,*,/,s)";
        cout<<"[s stands for swap]:";
        cin>>operation ;
        cout<<endl<<endl;
        cout<<" Please enter two numbers to apply your requested operation(";
        cout<<operation<<"):"<<endl<<"1st num:";
        cin>>num1;
        cout<<"2nd num:" ;
        cin>>num2;
        cout<<endl;
        //---used switch function so thet the operater can be decided------------
        switch (operation)
        {
        //------calculating the requested equation for inputs-------------
        //-------at the same time printing the results on screen-----------
        case'+':
            cout<<"The addition of two numbers ("<<num1<<","<<num2<<"):";
            cout<<num1+num2<<endl;
            break;
        case'-':
            cout<<"The substraction of two numbers ("<<num1<<","<<num2<<"):";
            cout<<num1-num2<<endl;
            break;
        case'*':
            cout<<"The multiplication of two numbers ("<<num1<<","<<num2<<"):";
            cout<<num1*num2<<endl;
            break;
        case'/':
            cout<<"The division of two numbers ("<<num1<<","<<num2<<"):";
            if(num2==0)
            {
                cout<<"not valid"<<endl;
            }
            cout<<(num1/num2)<<endl;
            break;
        case's':
            cout<<"The swap of two numbers ("<<num1<<","<<num2<<"):";
            swap(num1,num2);
            cout<<"1stnumber="<<num1<<"and 2nd number="<<num2<<endl<<endl;
            break;
        default:
            cout<<"unknown command"<<endl;
 
        }
        //----now once again the program will ask the user if want to continue or not
        cout<<"enter y or Y to continue:";
        cin>>redo;
        cout<<endl<<endl;
    }
    while(redo=='y'||redo=='Y');
 
    return 0;
 
}
 
 
/*
 * OutPut >>
Welcome to the calculater program v.1.0 written by Your Name
***************************************************************
 
 
 
 Please enter an operation which you like to calculate (+,-,*,/,s)[s stands for swap]:+
 
 
 Please enter two numbers to apply your requested operation(+):
1st num:66
2nd num:77
 
The addition of two numbers (66,77):143
enter y or Y to continue:
*/

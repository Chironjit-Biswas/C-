#include <iostream>
#include <conio.h>
using namespace std;

void sum(){
int num1,num2,result;

cout<<"Enter your 1st Number : ";
cin>>num1;

cout<<"Enter your 2nd Number : ";
cin>>num2;

result=num1+num2;
cout<<"Sum is : "<<result<<"\n"<<endl;
}

void sub(){
int num1,num2,result;

cout<<"Enter your 1st Number : ";
cin>>num1;

cout<<"Enter your 2nd Number : ";
cin>>num2;

result=num1-num2;
cout<<"Sub is : "<<result<<"\n"<<endl;
}

void mul(){
int num1,num2,result;

cout<<"Enter your 1st Number : ";
cin>>num1;

cout<<"Enter your 2nd Number : ";
cin>>num2;

result=num1*num2;
cout<<"Mul is : "<<result<<"\n"<<endl;
}

void div(){
int num1,num2,result;

cout<<"Enter your 1st Number : ";
cin>>num1;

cout<<"Enter your 2nd Number : ";
cin>>num2;

result=num1/num2;
cout<<"Div is : "<<result<<"\n"<<endl;
}


int main()
{

    sum();
    sub();
    mul();
    div();

    getch();
    return 0;
}

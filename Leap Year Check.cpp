#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int year;
    cout<<"Enter your Year : ";
    cin>>year;  // User Input 

    if(((year%4)==0) && ((year%100)!=0) || ((year%400)==0)){

        cout<<year<<" is a Leap Year. ";
    }

    else{

        cout<<year<<" is not a Leap Year. ";
    }


    getch();
    return 0;
}

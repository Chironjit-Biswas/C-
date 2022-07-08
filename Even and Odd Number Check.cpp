#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your Number : ";
    cin>>n; // User Input


    if(n%2==0){

        cout<<"This is a Even Number : "<<n;
    }
    else{

        cout<<"This is a Odd Number : "<<n;
    }

    getch();
    return 0;
}

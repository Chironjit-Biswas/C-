#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int sum,i,number;
    sum=0;

    cout<<"Enter your Number : ";
    cin>>number; // User Input 
    

    for(i=1; i<=number; i++){

        sum +=i; // sum = sum + i;

    }

    cout<<"Sum of all Total Number : "<<sum;



    getch();
    return 0;
}

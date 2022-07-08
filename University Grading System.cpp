#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int marks;
    cout<<"Enter your Marks : ";
    cin>>marks; // User Input 


    if((marks > 90) && (marks <= 100)){

        cout<<"Your Grade is : A+ ";
    }

    else if((marks >= 85) && (marks < 90)){

        cout<<"Your Grade is :A ";
    }

    else if((marks >= 80) && (marks < 85)){

        cout<<"Your Grade is :B+ ";
    }

    else if((marks >= 75) && (marks < 80 )){

        cout<<"Your Grade is :B ";
    }

    else if((marks >= 70) && (marks < 75 )){

        cout<<"Your Grade is :C+ ";
    }

    else if((marks >= 65) && (marks < 70 )){

        cout<<"Your Grade is :C ";
    }

    else if((marks >= 60) && (marks < 65 )){

        cout<<"Your Grade is :D+ ";
    }

    else if((marks >= 50) && (marks < 60 )){

        cout<<"Your Grade is :D ";
    }

    else if((marks < 50 )){

        cout<<"Your Grade is :F ";
    }





    getch();
    return 0;
}
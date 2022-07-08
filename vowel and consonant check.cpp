#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char ch;
    int i;


    for(i=1; i<=5; i++){

        cout<<"Enter your Character : ";
        cin>>ch; // user input

    if(ch=='A'|| ch=='a'|| ch=='E'|| ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'|| ch=='o'|| ch=='U'|| ch=='u'){

        cout<<"This is a Vowel Letter : "<<ch<<"\n"<<endl;
    }

    else{

        cout<<"This is a Consonant Letter : "<<ch<<"\n"<<endl;
    }

     }

    getch();
    return 0;
}

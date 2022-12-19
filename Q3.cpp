#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    void bio(char[]);
    char x[]="";
    cout<<"Enter your bio:"<<endl;
    gets(x);
    bio(x);
}
void bio(char y[])
{
    cout<<y;
}
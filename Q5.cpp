#include<iostream>
using namespace std;

int main()
{
    void abc(char[]);
    char c[] = "";
    cout<<"Enter any string"<<endl;
    cin>>c;
    abc(c);
}
void abc(char a[])
{
     int length=0;
   for(int i=0; a[i] != '\0'; i++)
   {
   
    length++;
   }
   cout<<"length of string is: "<<length;
}
#include<iostream>
using namespace std;

int main()
{
  char s1[100], s2[100], i;
  void cpy(char s1[], char s2[]);
  
  cout<<"Enter string s1: ";
  cin>>s1;
  cpy(s1,s2);

}
void cpy(char s1[], char s2[])
{
 char i;
 for(i=0; s1[i]!='\0'; ++i)
  {
    s2[i]=s1[i];
  }
  s2[i]='\0';
  cout<<"String s2: "<<s2;
}
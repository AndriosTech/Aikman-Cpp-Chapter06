#include<iostream>
using namespace std;

int main()
{
    string s1="Pakistan";
    string s2="India";
    void comb(string, string);
    comb(s1,s2);
}
void comb(string x, string y)
{
    int i;
    string result;
    for(i=0; i<x.size(); i++)
    {
        result = result + x[i];
    }
    for(i=0; i<y.size(); i++)
    {
        result = result + y[i];
    }
    cout<<result;
}
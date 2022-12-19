#include<iostream>
using namespace std;


struct dataa
{
    char name[15];
    int age;
};

int main()
{
    dataa d1;
    void rec(dataa);
    cout<<"Enter name:"<<endl;
    gets(d1.name);
    cout<<"Enter age: "<<endl;
    cin>>d1.age;

    rec(d1);

}
void rec(dataa d2)
{
    cout<<"Name="<<d2.name<<endl;
    cout<<"Age="<<d2.age<<endl;
}
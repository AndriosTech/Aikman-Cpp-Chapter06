#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x;
    void abc(float, float, float, float);
    abc(15.1,55.5,44.4,121.3);
    
}
void abc(float a, float b, float c, float d)
{
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout<<"Greater number is:"<<a;
            }
            else
            {
                cout<<"Greater is: "<<d;
            }
        }
    }

    else if(b>c)
    {
        if(b>d)
        {
            cout<<"greates is:"<<b;
        }
        else
        {
            cout<<"greates is:"<<d;
        }
    }
    else if(c<d)
    {
        cout<<"c is greates:"<<c;
    }
    else
    {
        cout<<"greatest is: "<<d;
    }
}


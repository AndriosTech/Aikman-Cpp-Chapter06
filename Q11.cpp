#include<iostream>
using namespace std;

int main()
{
    void array(int[]);
    int n,i;
    int arr[5];
    cout<<"Enter values into an array:"<<endl;
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    array(arr);

}
void array(int x[])
{
    int sum;
    for(int i=0; i<5; i++)
    {
        
        if(x[i]%2==1)
        {
            sum = sum+x[i];
        }
    } 
    cout<<"sum of odd values are:"<<sum<<endl;
    for(int i=0; i<5; i++)
    {
        int even;
        if(x[i]%2==0)
        {
            
            cout<<"the even values are:"<<x[i]<<endl;
        }
    }

}
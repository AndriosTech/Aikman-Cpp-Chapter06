#include<iostream>
using namespace std;

int main()
{
    void info(int);
    int n;
    n = 54321;
    info(n);
    
}
void info(int x)
{
    int reversed_number=0;
    int remainder;
    while(x != 0) {
    remainder = x % 10;
    reversed_number = reversed_number * 10 + remainder;
    x /= 10;
  }

  cout << "Reversed Number = " << reversed_number;
}
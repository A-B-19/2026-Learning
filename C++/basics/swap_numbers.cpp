#include <iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    cout<<"value of a: "<<a<<" value of b: "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nvalue of a: "<<a<<" value of b: "<<b;
}
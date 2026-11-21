#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout<<p<<"\n";
    cout<<a<<"\n";
    cout<<*p<<"\n";
    cout<<&a;
}
#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"enter first value: ";cin>>a;
    cout<<"\nenter second value: ";cin>>b;
    if (a>b){
        cout<<"\n"<<a<<" is greater than "<<b;
    }
    else if (b>a){
        cout<<"\n"<<b<<" is greater than "<<a;
    }
    else {
        cout<<" \nboth numbers are equal";
    }
}
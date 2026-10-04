#include <iostream>
using namespace std;
int main()
{
    float r,t,i,p,a;
    cout<<"enter principal amount: ";cin>>p;
    cout<<"\nenter rate of interest: ";cin>>r;
    cout<<"\nenter period of time: ";cin>>t;
    i=(p*r*t)/100;
    a=p+i;
    cout<<"\ninterest: "<<i;
    cout<<"\ntotal amount: "<<a;
}
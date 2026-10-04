#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a value: ";cin>>a;
    if (a%2==0){
        cout<<"\n"<<a<<" is an even number";
    }
    else if (a%2!=0){
        cout<<"\n"<<a<<" is an odd number";
    };
}
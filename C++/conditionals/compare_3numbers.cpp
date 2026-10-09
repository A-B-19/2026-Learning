#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"first number: ";
    cin>>a;
    cout<<"second number: ";
    cin>>b;
    cout<<"third number: ";
    cin>>c;
    if (a>=b && a>=c){cout<<a<<" is the greatest.";}
    else if (b>=c && b>=a){cout<<b<<" is the greatest.";}
    else if (c>=a && c>=b){cout<<c<<" is the greatest.";};
}
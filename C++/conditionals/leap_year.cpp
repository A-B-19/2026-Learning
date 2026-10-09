#include <iostream>
using namespace std;
int main()
{
    int y;
    cout<<"input any year: ";
    cin>>y;
    if (y%4==0){
        cout<<y<<" is a leap year.";
    }
    else{
        cout<<y<<" is not a leap year.";
    };
}
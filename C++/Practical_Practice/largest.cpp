#include <iostream>
using namespace std;
int main(){
    int n, num, largest;
    cout<<"how many numbers? ";
    cin>>n;
    cout<<"enter first number :";
    cin>>largest;
    for(int i=2; i<=n; i++)
    {
        cout<<"enter number "<<i<<" : ";
        cin>>num;
        if (num>largest)
        {
            largest=num;
        }
    }
    cout<<"largest number is : "<<largest;
    return 0;
}
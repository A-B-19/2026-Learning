#include <iostream>
using namespace std;
int main(){
    int n;
    bool isprime = true;
    cout << "Enter a number: ";
    cin >> n;
    if (n<=1)
    {
        isprime = false;
    }
    else
    {
        for (int i=2; i<n; i++)
        {
            if (n%i==0)
            {
                isprime = false;
                break;
            }
            else
            {
                isprime = true;
            }
        }
    }
    if (isprime==true)
    {
        cout<<n<<" is a prime number";
    }
    else
    {
        cout<<n<<" isn't a prime number";
    }
}
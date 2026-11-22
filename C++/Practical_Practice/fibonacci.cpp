#include <iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int n;
    cout<<"no of values in fibonacci series: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int sum=a+b;
        a=b;
        b=sum;
    }
}
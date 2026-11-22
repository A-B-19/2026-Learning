#include <iostream>
using namespace std;
int main(){
    int n,digit,reverse=0,sum=0;
    cout << "Enter a number: ";
    cin >> n;
    int temp=n;
    while(temp>0){
        digit=temp%10;
        reverse=reverse*10+digit;
        sum=sum+digit;
        temp=temp/10;
    }
    cout<<"reverse= "<<reverse<<"\n";
    cout<<"sum of digits= "<<sum;
}
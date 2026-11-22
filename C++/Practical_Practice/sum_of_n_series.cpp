#include <iostream> //sum of series 1+ 1/2! + 1/3! + ... + 1/n!
using namespace std;
int main(){
    int n;
    double sum=1.0;
    double fact=1.0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i=2;i<=n;i++){
        fact=fact*i;
        sum=sum+(1.0/fact);
    }
    cout<<"sum of series: "<<sum;
}
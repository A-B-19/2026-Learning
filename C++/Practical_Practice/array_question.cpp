#include <iostream>
using namespace std;
int main() {
    float price[5], sum = 0, average;
    cout << "Enter five prices: " << endl;
    for (int i=0;i<5;i++){
        cin>>price[i];
        sum=sum+price[i];
    }
    average=sum/5;
    cout << "Average price = " << average << endl;
    cout << "Prices above average: " << endl;
    for (int i=0;i<5;i++){
        if (price[i]>average){
            cout<<price[i]<<endl;
        }
    }
}

#include <iostream>
using namespace std;
void swapnum(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
};
int main()
{
    int x = 6;
    int y = 7;
    swapnum(x,y);
    cout << x << " " << y;
}
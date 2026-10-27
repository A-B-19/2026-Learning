#include <iostream>
using namespace std;
int square(int x){
    return x * x;
};
int main()
{
    int a,b,c;
    a = square(5);
    b = square(8);
    c = square(12);
    cout<<a<<"\n"<<b<<"\n"<<c;
}

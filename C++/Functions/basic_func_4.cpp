#include <iostream>
using namespace std;
void change(int x){
    x=100; //CALL BY VALUE
};
int main()
{
    int a = 10;
    change(a);
    cout<<a;
}
#include <iostream>
using namespace std;
void change(int &x) {
    x = 100; //CALL BY REFERENCE
};
int main() 
{
    int a = 10;
    change(a);
    cout << a;
}
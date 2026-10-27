#include <iostream>
using namespace std;
class calc{
    public:
    int a,b;
    int add(){return a+b;}
    int diff(){return a-b;}
    int prod(){return a*b;}
    int div(){return a/b;}
};
int main()
{
    calc c;
    c.a=20;
    c.b=20;
    cout << c.add() << endl;
    cout << c.diff() << endl;
    cout << c.prod() << endl;
    cout << c.div();
}
#include <iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;
    int area(){return length*breadth;}
};
int main()
{
    rectangle r;
    r.length=20;
    r.breadth=20;
    cout<<"area= "<<r.area();
}
#include <iostream>
using namespace std;
class car{
    public:
    string brand;
    int price;
};
int main()
{
    car c1;
    c1.brand="honda";
    c1.price=800000;
    cout<<c1.brand<<" "<<endl<<c1.price;
}
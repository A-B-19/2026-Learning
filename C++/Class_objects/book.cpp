#include <iostream>
using namespace std;
class book{
    public:
    string title;
    int pages;
};
int main()
{
    book b1,b2,b3;
    b1.title="sorcerer's stone";
    b2.title="chamber of secrets";
    b3.title="prisoner of azkaban";
    b1.pages=140;
    b2.pages=130;
    b3.pages=170;
    cout<<b1.title<<" "<<b1.pages<<"\n"<<b2.title<<" "<<b2.pages<<"\n"<<b3.title<<" "<<b3.pages;
}
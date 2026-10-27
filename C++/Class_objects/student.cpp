#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
};
int main()
{
    student s1,s2;
    s1.name="rahul";
    s1.age=19;
    s2.name="jacob";
    s2.age=20;
    cout<<s2.name<<"\n"<<s2.age<<"\n";
    cout<<s1.name<<"\n"<<s1.age;
}
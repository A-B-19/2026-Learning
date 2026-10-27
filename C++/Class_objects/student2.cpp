#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    student s1("riya",18);
    student s2("bugs",20);
    s1.display();
    s2.display();
}
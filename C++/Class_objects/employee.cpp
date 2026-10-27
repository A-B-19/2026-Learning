#include <iostream>
using namespace std;
class employee{
    public:
    string name,identity;
    int salary;
    employee(string n,string id,int s){
        name=n;
        identity=id;
        salary=s;
    }
    void display(){
        cout<<name<<" "<<identity<<" "<<salary<<"\n";
    }
};
int main()
{
    employee e1("david laid","26DL",250000);
    employee e2("sam sulek","26SS",190000);
    e1.display();
    e2.display();
}
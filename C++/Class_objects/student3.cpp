#include <iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"object created"<<"\n";
    }
    ~student(){
        cout<<"\n"<<"object destroyed";
    }
};
int main(){
    student s;
    cout<<"hello ";
}
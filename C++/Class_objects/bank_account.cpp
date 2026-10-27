#include <iostream>
using namespace std;
class bankacc{
    public:
    string accountholder;
    double balance;
    bankacc(string a,double b){
        accountholder=a;
        balance=b;
    }
    void deposit(double amount){balance=balance+amount;}
    void withdraw(double amount){
        if(amount<=balance && amount>0){balance=balance-amount;}
        else{cout<<"Insufficient balance or invalid amount\n";}
    }
    void display(){cout<<"Account holder: "<<accountholder<<endl<<"Balance : "<<balance<<endl;}
};
int main()
{
    bankacc b1("Arman",23000);
    b1.deposit(3000);
    b1.withdraw(7000);
    b1.display();
}
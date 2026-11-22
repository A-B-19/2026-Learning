#include <iostream>
using namespace std;
class vehicle{
    private:
    string regno;
    int year;
    public:
    void input() {
        cout << "Enter registration number: ";
        cin >> regno;

        cout << "Enter manufacturing year: ";
        cin >> year;
    }
    void display() {
        cout << "\nVehicle Details" << endl;
        cout << "Registration Number: " << regno << endl;
        cout << "Manufacturing Year: " << year << endl;
    }
};
int main(){
    vehicle v1;
    v1.input();
    v1.display();
}
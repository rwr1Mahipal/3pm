#include <iostream>
using namespace std;

class Vehical{
    public:
       virtual void start(){
            cout << "Vehcial start"<<endl;
        }
        virtual void paymant() = 0;
};

class Car : public Vehical{
    public:
        void start(){
            cout << "Vehcial start with push button"<<endl;
        }
        int amount = 100;
        void paymant(){
            cout<<"Payment made by QR: "<<amount<<endl;
        }
        
};

int main(){
//    Car c;

//    c.start();
//    c.Vehical::start();

    Vehical *v = new Car;

    v->start();
    v->Vehical::start();
    v->paymant();
}
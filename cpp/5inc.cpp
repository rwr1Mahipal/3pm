#include <iostream>
using namespace std;

class A{
    public:
        void getDataA(){
            cout <<"Class A"<<endl;
        }
};

class B : public A{
    public:
        void getDataB(){
            cout <<"Class B"<<endl;
        }
};

class C : public A{
    public:
        void getDataC(){
            cout <<"Class C"<<endl;
        }
};

class D : public B, public C{
    public:
        void getDataD(){
            cout <<"Class D"<<endl;
        }
};

int main(){
   D d;
//    B b;
//    b.getDataA();
   d.getDataB();
   d.getDataC();
   d.getDataD();
    d.B::getDataA();
}
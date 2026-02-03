#include <iostream>
using namespace std;

class A{
    public:
        void setDataA(){
            cout<<"Class A"<<endl;
        }
};

class B : public A{
    public:
        void setDataB(){
            cout<<"Class B"<<endl;
        }
};

class C : public A{
    public:
        void setDataC(){
            cout<<"Class C"<<endl;
        }
};

class D : public A{
    public:
        void setDataD(){
            cout<<"Class D"<<endl;
        }
};

int main(){
   D d;
   C c;
   d.setDataA();
   d.setDataD();

}
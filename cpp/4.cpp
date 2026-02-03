#include <iostream>
using namespace std;

class Animal{
    public:
        void setData(){
            cout << "Class A"<<endl;
        }
};

class Dog : public Animal{
    
    public:
        void getData(){
            cout <<"Class B"<< endl;
        }
};

class Cat : public Dog{
    public:
        void getData(){
            cout<<"Class C"<<endl;
        }
};

int main(){
   C c;

   c.getData();
   c.setData();
   c.B::getData();
}
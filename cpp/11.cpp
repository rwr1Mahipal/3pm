#include <iostream>
using namespace std;

class Show{
    public: int a = 10;
    private: int b = 20;
    protected: int c = 30;
        public:
         void setData(){
            cout<<"Public: "<< a <<endl;
            cout<<"Private: "<< b <<endl;
            cout<<"Proctaed: "<< c <<endl;
        };
};

class Child : public Show{
    public:
        void display(){
             cout<<"Public: "<< a <<endl;
            // cout<<"Private: "<< b <<endl;
            cout<<"Proctaed: "<< c <<endl;
        }
};

int main(){
  Child c;
  c.display();
  c.setData();
}
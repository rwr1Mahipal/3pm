#include <iostream>
using namespace std;

class Show{
    private:
        int id;
        public:
        Show(int a){
            id=a;
            cout<<"Call from Cons. "<<id<<endl;
        }
};

class Display : public Show{
    public:
        Display(int a) : Show(a){
            cout << "Call fron child " <<a<<endl;
        }
};

int main(){
    Display d(10);
}
#include <iostream>
using namespace std;

class Account{
    int balance, count;
    public:
        // void setData(int a){
        //     balance=a;
        // };
        Account(int b){
            count = b;
        };
        void getData(){
            // cout << "Balance: "<<balance<<endl;
            cout << "Count: "<<count<<endl;
        };

        // void operator++(){
        //     balance += 100;
        // }
        void operator++(int){
            count++;
        }
};

int main(){
//    Account a;
   
//    a.setData(1000);
//    ++a;
//    a.getData();

    Account a(10);
    a++;
    a++;
    a.getData();
}
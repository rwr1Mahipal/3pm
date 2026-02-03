#include <iostream>
using namespace std;

class BankAccount{
    int accNo;
    int balance;
        public:
            BankAccount(int a, int b){
                accNo=a;
                balance=b;
                cout<<"Acc. No. "<<accNo<<" Balance: "<<balance<<endl;
            };

            BankAccount(BankAccount &x){
                accNo=x.accNo;
                balance=x.balance;
                cout<<"Copy cons. call"<<endl;
            };

            ~BankAccount(){
                cout<<"Thanks for visit!"<<endl;
            }
            // void getData(){
            //     cout<<"Acc. No. "<<accNo<<" Balance: "<<balance<<endl;
            // };

};

int main(){
   BankAccount a(1001, 5000);
   BankAccount a1(1002, 5000);
   BankAccount a2(1003, 5000);
   BankAccount a3=a1;

//    a.getData();
//    a1.getData();
}
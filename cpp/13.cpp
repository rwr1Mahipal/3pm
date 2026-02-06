#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int b = 2 ;
    // try{
    //     if(b == 0){
    //         throw 1;
    //     }
    //     int c = a / b;
    //     cout<<"Results: "<<c<<endl;
    // }catch(int x){
    //     cout<<"Can not devisible by 0"<<endl;
    // }

    int balance = 6000;
    int withdrow = 5000;
    try{
        if (balance < withdrow){
            throw "Insufficient fund";
        }
        balance -= withdrow;
        cout << "Tranction successfull" << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (...)
    {
        cout << "SERVER ERROR" << endl;
    }
    
    cout << "Balance: " << balance << endl;
}
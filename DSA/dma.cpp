#include <iostream>
using namespace std;

class Student{
    int *id;
    public:
        Student(int n){
            id=new int(n);
            cout<<"Contructor call"<<endl;
        }
        ~Student(){
            delete id;
            id=nullptr;
            cout<<"Distructor call"<<endl;
        }
};

int main(){
    Student(5);
//    int *a = new int(10);
//    cout<<"a="<<a;
//    cout<<"\na="<<*a;
//    delete a;
//    a=nullptr;
//     cout<<"\na="<<a;

    // int *arr = new int[5];
    // for(int i=0; i<5; i++){
    //     arr[i]=i+1;
    //     cout<<arr[i]<<" ";
    //     cout<<arr<<" ";
    // }
    // delete[] arr;
    // arr=nullptr;
}
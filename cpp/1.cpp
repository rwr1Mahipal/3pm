#include <iostream>
using namespace std;

class Show{
    private:
        int age;
    public:
        void setData(int age){
            this->age=age;
        }
        void getData(){
            cout << "Age = "<<this->age << endl;
        }
};

int main(){
    Show s1, s2;
    
    s1.setData(20);
    s1.getData();

    s2.setData(40);
    s2.getData();
}
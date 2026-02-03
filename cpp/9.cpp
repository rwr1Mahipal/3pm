#include <iostream>
using namespace std;

class Show{
    int a,b;
    public:
        void setData(int x, int y){
            a=x;
            b=y;
        }
        void getData(){
            cout<<"A = "<<a<<" B = "<<b<<endl;
        }

        Show operator+(Show n){
            Show temp;
            temp.a = this->a + n.a;
            temp.b = this->b + n.b;
            return temp;
        }
};

int main(){
    Show s1,s2, s3;

    s1.setData(10,20);
    s2.setData(30,40);

    s3 = s1 + s2;

    s1.getData();
    s2.getData();
    s3.getData();
}
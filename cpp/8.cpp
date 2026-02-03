#include <iostream>
using namespace std;

class Show{
    int a, b, c;
    float j,k;
    public:
        int add(int x, int y){
            a=x;
            b=y;
            return a + b;
        }
        float add(float x, float y){
            j=x;
            k=y;
            return j + k;
        }
        int add(int x, int y, int z){
            a=x;
            b=y;
            c=z;
            return a + b + c;
        }
};

int main(){
    Show s;

   cout << s.add(10,20)<<endl;
    cout << s.add(1.5f, 2.5f)<<endl;
    cout << s.add(10,20,300)<<endl;
}
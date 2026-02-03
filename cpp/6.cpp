#include <iostream>
using namespace std;

class Show{
    private:
    int a;
    public:
        void setData(int b){
            a=b;
        };
        void getData(){
            cout <<"a = " <<a<<endl;
        }
};

int main(){
  Show s[3];
  int temp;
//   Show *p;
//   p=&s;

Show *p = new Show();

for(int i=0; i<3; i++){
    cout<<"Enter a avalue: ";
    cin>>temp;
    p[i].setData(temp);
}

for(int i=0; i<3; i++){
    p[i].getData();
}
for(int i=0; i<3; i++){
    delete p;
    p=nullptr;
}

//   p->setData(10);
//   p->getData();

  cout <<p<<endl;
}
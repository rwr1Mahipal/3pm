#include <iostream>
using namespace std;

class Student{
private:
    int marks;

public:
    static string name;
    void setData(int m){
        cout << "LMS from" << Student::name;
        cout << "Enter value: ";
        cin >> m;
        marks = m;
    };
    void getData(){
        cout << "Marks: " << marks << endl;
    };
};

string Student::name = "LMS";

int main(){
    Student s[5];

    for (int i = 0; i < 5; i++){
        s[i].setData(i + 1);
    }

    for (int i = 0; i < 5; i++){
        s[i].getData();
    }

    // cout << Student::name;
}
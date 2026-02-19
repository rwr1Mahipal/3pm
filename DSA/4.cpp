#include <iostream>
using namespace std;

int main(){
    int arr[10] = {10, 20, 30, 40, 20, 10, 30, 50, 40, 60};
    int lenght = 10;

    cout << "Original Arr: ";
    for (int i = 0; i < lenght; i++){
        cout << arr[i] << " ";
    }

    //arr reverse
    for (int i = 0; i < lenght / 2; i++){
        int temp = arr[i];
        arr[i] = arr[lenght - i - 1];
        arr[lenght - i - 1] = temp;
    }

    //remove duplicate element
    for (int i = 0; i < lenght; i++){
        for (int j = i + 1; j < lenght;){
            if (arr[i] == arr[j]){
                for (int k = j; k < lenght; k++){
                    arr[k] = arr[k + 1];
                }
                lenght--;
            }
            else{
                j++;
            }
        }
    }

    cout << "\nChange Arr: ";
    for (int i = 0; i < lenght; i++){
        cout << arr[i] << " ";
    }
}
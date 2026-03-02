#include <iostream>
using namespace std;

void interstionSort(int arr[], int size){
    for(int i=0; i<size; i++){
        int ele = arr[i];  //80 i++ arr element
        int j = i - 1;     // 0 j++ index

        while(j >= 0 && arr[j] > ele){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=ele;
    }
}

int main(){
    int arr[] = {80,45,23,85,12,4};
    int length = sizeof(arr) / sizeof(arr[0]);

    interstionSort(arr, length);

    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
}
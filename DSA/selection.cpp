#include <iostream>
using namespace std;

class Sort{
    public:
    void selectionSORT(int arr[], int size){
    for(int i=0; i<size; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
};

int main(){
    Sort s;
    int arr[] = {62,45,12,85,63,11,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    s.selectionSORT(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
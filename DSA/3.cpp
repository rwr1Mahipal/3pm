#include <iostream>
using namespace std;

int main()
{
    //  int arr[6]={10,20,30,40,50};
    //  int value = 400;
    //  bool found=false;

    //  for(int i=0; i<6; i++){
    //     if(arr[i] == value){
    //         found=true;
    //         cout<<"Value fount at index "<<i<<endl;
    //     }
    //  }
    //  if(!found){
    //     cout<<"Value not found"<<endl;
    //  }

    int arr[6]={10,20,30,20,40,20};
    int value = 20;
    int count = 0;

    for(int i=0; i<6; i++){
        if(arr[i] == value){
            count++;
        }
    }
    // cout<<value<<" repeted "<<count<<" times "<<endl;

    int arr[10] = {10, 20, 30, 20, 40, 20, 10, 40, 30, 40};

    for (int i = 0; i < 10; i++){
        int count = 1;

        if (arr[i] == -1){
            continue;
        }

        for (int j = i + 1; j < 10; j++){
            if (arr[i] == arr[j]){
                count++;
                arr[j] = -1;
            }
        }
        cout << arr[i] << " count " << count << endl;
    }
}
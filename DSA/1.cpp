#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10,-20,30,-40,50};
    int pos=0, neg=0;
    int posVal[5];
    int j=0;

    for(int i =0 ; i<5; i++){
       if(arr[i] > 0){
        pos++;
        posVal[j]=arr[i];
        j++;
       }else if(arr[i] < 0){
        neg++;
       }
    }

    cout<<"Postive Value: ";
    for(int i=0; i<j; i++){
        cout<<posVal[i]<<" ";
    }

    cout<<endl;
    cout<<"Postive: "<<pos<<endl;
    cout<<"Negitive: "<<neg<<endl;
}
#include <iostream>
using namespace std;

void Func(int* arr,int length){
    for(int i=0;i<length;i++){
        if(arr[i]%2==0) arr[i]/=2;
    }
}

int main() {
    int length;
    int input;
    cin>>length;
    int *arr=new int[length];

    for(int i=0;i<length;i++){
        cin>>input;
        arr[i]=input;
    }

    Func(arr,length);

    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}
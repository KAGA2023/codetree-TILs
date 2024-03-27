#include <iostream>
#include <cmath>
using namespace std;

void Func(int* arr,int arrlength){
    for(int i=0;i<arrlength;i++){
        arr[i]=abs(arr[i]);
    }
}

int main() {
    int arrlength;
    cin>>arrlength;
    int *arr=new int[arrlength];

    for(int i=0;i<arrlength;i++){
        cin>>arr[i];
    }

    Func(arr,arrlength);

    for(int i=0;i<arrlength;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}
#include <iostream>
using namespace std;

bool Func(int* arr1,int* arr2,int length1,int length2){
    for(int i=0;i<=length1-length2;i++){  //i는 arr1[i] 몇번째까지 비교할건지
        for(int j=0;j<length2;j++){ //j는 arr2[j] 전부 비교하기
            if(arr1[i+j]!=arr2[j]) break;
            return true;
        }
    }
    return false;
}

int main() {
    int length1,length2;
    cin>>length1>>length2;

    int* arr1=new int[length1];
    int* arr2=new int[length2];

    for(int i=0;i<length1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<length2;i++){
        cin>>arr2[i];
    }

    bool result=Func(arr1,arr2,length1,length2);
    if(result) cout<<"Yes";
    else cout<<"No";

    // delete[] arr1;
    // delete[] arr2;
    return 0;
}
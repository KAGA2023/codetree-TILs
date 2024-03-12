#include <iostream>
using namespace std;

void Func(int n,int m){
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<"1";
        }
        cout<<endl;
    }
}

int main() {
    int n,m;
    cin>>n>>m;
    Func(n,m);
    return 0;
}
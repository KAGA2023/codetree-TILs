#include <iostream>
using namespace std;

void Func(int n){
    if(n%2==0 && ((n/10)+(n%10))%5==0)
        cout<<"Yes";
    else
        cout<<"No";
}

int main() {
    int n;
    cin>>n;
    Func(n);
    return 0;
}
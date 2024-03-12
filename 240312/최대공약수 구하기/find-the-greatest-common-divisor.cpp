#include <iostream>
using namespace std;

int Cal(int n,int m){
    int min;
    min=(n>m)?m:n;
    while(1){
        if(n%min==0 && m%min==0)
            break;
        min--;
    }
    return min;
}

int main() {
    int n,m;
    int result;
    cin>>n>>m;
    result=Cal(n,m);
    cout<<result;
    return 0;
}
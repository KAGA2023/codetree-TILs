#include <iostream>
using namespace std;

void Cal(int n,int m){
    int max=(n>m)?n:m;
    while(1)
    {
        if(max%n==0 && max%m==0){
            break;
        }
        max++;
    }
    cout<<max;
}

int main() {
    int n,m;
    cin>>n>>m;
    Cal(n,m);
    return 0;
}
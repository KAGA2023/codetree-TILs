#include <iostream>
using namespace std;

int Func(int a,int b){
    if(b==0) return 1;
    return a*Func(a,b-1);
}

int main() {
    int a,b;
    cin>>a>>b;
    int result = Func(a,b);
    cout<<result;
    return 0;
}
#include <iostream>
using namespace std;

int Func(int a,int b,int c){
    int min=(a<b)?a:b;
    if(min==a) min=(a<c)?a:c;
    else min=(b<c)?b:c;
    return min;
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int result = Func(a,b,c);
    cout<<result;
    return 0;
}
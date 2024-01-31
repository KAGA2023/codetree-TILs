#include <iostream>

int main() {
    using namespace std;
    int a,b;
    cin>>a>>b;
    int tmp=a;
    a=b;
    b=tmp;
    cout<<a<<" "<<b;
    return 0;
}
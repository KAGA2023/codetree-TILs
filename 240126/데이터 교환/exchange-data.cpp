#include <iostream>

int main() {
    using namespace std;
    int a=5,b=6,c=7;
    int temp=a;
    a=c;
    c=b;
    b=temp;
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
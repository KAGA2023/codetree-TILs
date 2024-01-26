#include <iostream>

int main() {
    using namespace std;
    int a=2;
    int b=5;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl<<b;
    return 0;
}
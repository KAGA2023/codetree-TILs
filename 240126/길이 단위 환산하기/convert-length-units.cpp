#include <iostream>

int main() {
    using namespace std;
    double ft;
    cin>>ft;
    double cm=ft*30.48;
    cout<<fixed;
    cout.precision(1);
    cout<<cm;
    return 0;
}
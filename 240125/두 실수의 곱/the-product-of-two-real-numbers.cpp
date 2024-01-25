#include <iostream>

int main() {
    using namespace std;
    double a=5.26, b=8.27;
    cout<<fixed;
    cout.precision(3);
    double result = a*b;
    cout<<result;
    return 0;
}
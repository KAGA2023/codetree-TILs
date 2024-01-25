#include <iostream>

int main() {
    using namespace std;
    cout<<fixed;
    cout.precision(6);
    int weight=13;
    double moon_gravity=0.165;
    double result = (double)weight*moon_gravity;
    cout<<weight<<" * "<<moon_gravity<<" = "<<result;
    return 0;
}
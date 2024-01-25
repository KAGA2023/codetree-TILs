#include <iostream>

int main() {
    using namespace std;
    cout<<fixed;
    cout.precision(1);
    double ft=30.48, mi=160934;
    double ft_result=9.2*ft;
    double mi_result=1.3*mi;
    cout<<9.2<<"ft"<<" = "<<ft_result<<"cm"<<endl;
    cout<<1.3<<"mi"<<" = "<<mi_result<<"cm"<<endl;
    return 0;
}
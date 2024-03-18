#include <iostream>
using namespace std;

void Swap(int& n,int& m){
    int tmp;
    tmp=n;
    n=m;
    m=tmp;
}

int main() {
    int n,m;
    cin>>n>>m;
    Swap(n,m);
    cout<<n<<" "<<m;

    return 0;
}
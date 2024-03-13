#include <iostream>
using namespace std;

void Func(int a,int b){
    int sum=0;
    int count=0;
    for(int i=a;i<=b;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0) count++;
        }
        if(count==2){
            sum+=i;
        }
        count=0;
    }
    cout<<sum;
}

int main() {
    int a,b;
    cin>>a>>b;
    Func(a,b);
    
    return 0;
}
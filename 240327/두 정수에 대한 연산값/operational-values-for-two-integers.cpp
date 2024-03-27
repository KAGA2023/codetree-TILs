#include <iostream>
using namespace std;

void Func(int& num1,int& num2){
    if(num1>=num2){
        num1+=25;
        num2*=2;
    }
    else{
        num2+=25;
        num1*=2;
    }
}

int main() {
    int num1,num2;
    cin>>num1>>num2;
    Func(num1,num2);
    cout<<num1<<" "<<num2;

    return 0;
}
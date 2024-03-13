#include <iostream>
using namespace std;

bool Func(int y){
    if(y%4!=0) return false;
    if(y%100==0 && y%400!=0) return false;
    return true;
}

int main() {
    int year;
    cin>>year;
    bool result=Func(year);
    if(result==true) cout<<"true";
    else cout<<"false";

    return 0;
}
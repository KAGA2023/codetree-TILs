#include <iostream>
using namespace std;

void Season(int M){
    switch(M){
        case 1:
        case 2:
            cout<<"Winter";
            break;
        case 3:
        case 4:
        case 5:
            cout<<"Spring";
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Summer";
            break;
        case 9:
        case 10:
        case 11:
            cout<<"Fall";
            break;
        case 12:
            cout<<"Winter";
            break;
    }
}

//윤년인지 파악
bool Yoon(int y){
    if(y%4==0 && y%100==0 && y%400==0) return true;
    if(y%4==0 && y%100==0) return false;
    if(y%4==0) return true;
    return false;
}

//존재하는지 체크
bool Exist(int y,int m,int d){
    bool yoon=Yoon(y);
    if(yoon){
        if(m==2){
            if(d<=29) return true;
            else return false;
        }
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            if(d<=31) return true;
            else return false;
        }
        else{
            if(d<=30) return true;
            else return false;
        }
    }
    else{
        if(m==2){
            if(d<=28) return true;
            else return false;
        }
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            if(d<=31) return true;
            else return false;
        }
        else{
            if(d<=30) return true;
            else return false;
        }
    }
}

int main() {
    int Y,M,D;
    cin>>Y>>M>>D;

    if(Exist(Y,M,D)==false){
        cout<<-1;
        return 0;
    }

    Season(M);
    return 0;
}
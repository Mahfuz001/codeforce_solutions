#include<iostream>
using namespace std;

int main(){
    int limak,bob,yearCnt=0;
    cin>>limak>>bob;
    while(limak <= bob){
        limak*=3;
        bob*=2;
        yearCnt++;
    }
    cout<<yearCnt<<"\n";
    return 0;
}

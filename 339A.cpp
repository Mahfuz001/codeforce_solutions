#include<bits/stdc++.h>
using namespace std;

int main(){
    char s;
    int cnt=0,arr[100];
    
    while(cin>>s){
        if(!strchr('+',s)){
            arr[stoi(s)] = s;
        }
    }

    return 0;
}

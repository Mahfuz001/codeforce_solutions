#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    string s;
    cin>>s;
    char p=' ';
    for(auto a:s){
        if(a == p){
            count++;
            continue;
        }
        p = a;
    }
    cout << count << endl;

    return 0;
}

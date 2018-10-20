#include<bits/stdc++.h>
using namespace std;
#define fori(n) for(int i=0;i<n;i++)

int getResult(string s1,string s2){
    if(s1 == s2)
        return 0;
    else
        if(s1 > s2)
            return 1;
        else
            return -1;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    fori(s1.size()){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    cout<<getResult(s1,s2)<<endl;
}
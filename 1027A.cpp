#include "bits/stdc++.h"
using namespace std;

#define INP_FILE "/Users/mahfuz/inputs.txt"
int main(){
    freopen(INP_FILE,"r",stdin);
    
    int t, n, cnt = 0;  
    cin >> t;
    string s;
    
    while(cnt < t){
        cin >> n >> s;
        bool ok = true;
        for(int i = 0;i < n/2; i++){
            int k = abs(s[i] - s[n-i-1]);
            if ( k > 2 || k%2 == 1){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES":"NO")<< endl;
        cnt++;
    }

    return 0;
}

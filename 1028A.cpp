#include "bits/stdc++.h"
using namespace std;

#define INP_FILE "/Users/mahfuz/inputs.txt"
int main(){
    //freopen(INP_FILE,"r",stdin);
        
    int n, m, x=0, y=0, cnt=0;
    char s[115];

    cin >> n >> m;    

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> s[i];    
            if( s[i] == 'B'){
                x += i;
                y += j;
                cnt++;
            }
        }
    }
    
    cout << x/cnt << " " << y/cnt << endl;
    
    return 0;
}

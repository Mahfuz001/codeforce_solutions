/**
 *  author: mahfuzz
 *  created: 22.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int max_n = 1000005;
typedef long long ll;


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    string s; cin >> s;
    
    int cnt = 0;
    for(int i = 0; i < n; i += 2){
        if(s[i] == s[i+1]){
            s[i] = 'a';
            s[i+1] = 'b';
            cnt++;
        }
    }
    
    cout << cnt << "\n" << s << "\n";
    
    return 0;
}

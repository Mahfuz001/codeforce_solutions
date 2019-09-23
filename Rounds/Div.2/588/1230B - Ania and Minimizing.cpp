/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int max_n = 1000005;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    
    int n, k; cin >> n >> k;
    string s; cin >> s;
    
    for(int i = 0; (i < k) && (i < n); i++){
        if(i == 0){
            if(n == 1){
                s[i] = '0';
            }else{
                if(s[i] == '1') k++;
                s[i] = '1';
            }
        }else{
            if(s[i] == '0') k++;
            s[i] = '0';
        }
    }
    
    cout << s << "\n";
    
    return 0;
}

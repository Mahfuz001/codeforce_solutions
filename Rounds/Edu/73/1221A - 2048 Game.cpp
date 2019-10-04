/**
 *  author: mahfuzz
 *  created: 04.10.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int maxn = 1000005;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x <= 2048) 
                sum += x;
        }
        
        if(sum >= 2048)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}

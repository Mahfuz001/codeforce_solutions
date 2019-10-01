/**
 *  author: mahfuzz
 *  created: 01.10.2019
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
    
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; i++){
        set<int> d;
        
        int x = i;
        int cnt = 0;
        while(x){
            d.insert(x % 10);
            x /= 10;
            cnt++;
        }
        if(d.size() == cnt){
            cout << i << "\n";
            return 0;
        }
    }
    
    cout << -1 << "\n";
    
    
    return 0;
}

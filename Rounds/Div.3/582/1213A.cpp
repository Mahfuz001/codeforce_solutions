/**
 *  author: MahfuzAhmed
 *  created: 30.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;

ll cnt[2];

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    
    while(n--){
        ll x; cin >> x;
        cnt[x%2]++;
    }
    
    cout << min(cnt[0], cnt[1]) << "\n";
    
    return 0;
}

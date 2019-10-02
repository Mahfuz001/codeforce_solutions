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
//~ const long long maxn = 1000000000;
typedef long long ll;


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    
    int n, k; cin >> n >> k;
    
    deque<ll> d;
    ll x;
    while(n--){
        cin >> x;
        
        bool flag = false;
        for(int i = 0; i < d.size(); i++){
            if(d[i] == x){
                flag = true;
                break;
            }
        }
        
        if(!flag){
            d.push_front(x);
        }
        if(d.size() > k){
            d.pop_back();
        }
    }
    
    cout << d.size() << "\n";
    
    deque<ll> :: iterator it;
    ll cnt = 0;
    for(it = d.begin(); it != d.end(); ++it, ++cnt){
        cout << *it;
        if(cnt == d.size())
            cout << "\n";
        else
            cout << " ";
        
    }
    
    cout << "\n";
    return 0;
}

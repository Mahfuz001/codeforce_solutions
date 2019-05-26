/**
 *  author: MahfuzAhmed
 *  created: 26.05.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, s, n) for(int i = s; i < int(n); i++)

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

vector<int> nums;

void getBin(int n){
    
    if(n > 1)
        getBin(n/2);
        
    nums.pb(n % 2);
    
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n, m, k; cin >> n >> m >> k;
    
    int arr[m];
    int f_num;
    
    forn(i, 0, m) cin >> arr[i];
    cin >> f_num;
    
    int cnt = 0;
    
    forn(i, 0, m){
        int x = arr[i] ^ f_num;
        getBin(x);
        
        int t = 0;
        
        for(auto a:nums){
            if(a == 1) t++;
        }
        
        if(t <= k) cnt++;
        
        nums.clear();
        
    }
    
    
    cout << cnt << "\n";
    
    return 0;
}

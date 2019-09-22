/**
 *  author: mahfuzz
 *  created: 22.09.2019
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
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    vector<pii> vec;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vec.push_back({x, i+1});
    }
    
    sort(vec.begin(), vec.end());
    
    ll shots = 0l;
    int x = 0;
    for(int i = n - 1; i >= 0; i--){
        shots += vec[i].first * x + 1;
        x++;
    }
    
    cout << shots << "\n";
    cout << vec[n-1].second;
    
    for(int i = n - 2; i >= 0; i--){
        cout << " " << vec[i].second;
    }
    cout << "\n";
    
    return 0;
}

/**
 *  author: MahfuzAhmed
 *  created: 30.06.2019
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

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    vector<int> vec;
    
    int prev = 0;
    int i = 0;
    vec.pb(0);
    
    while(n--){
        int x; cin >> x;
        if(x > prev){
            vec[i]++;
        }else{
            i++;
            vec.pb(0);
            vec[i]++;
        }
        
        prev = x;
    }
    
    cout << vec.size() << "\n";
    cout << vec[0];
    
    for(i = 1; i < vec.size(); i++){
        cout << " " << vec[i];
    }
    
    cout << "\n";
    
    return 0;
}

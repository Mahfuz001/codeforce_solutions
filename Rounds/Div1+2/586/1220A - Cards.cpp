/**
 *  author: mahfuzz
 *  created: 06.10.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl; 
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int maxn = 1000005;
typedef pair<long long, long long> pll;
typedef pair<int, int> pi;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    
    map<char, int> m;
    int n; cin >> n;
    
    char c;
    while(n--){
        cin >> c;
        m[c]++;
    }
    
    int O = min(m['o'], min(m['n'], m['e']));
    m['o'] -= O;
    m['n'] -= O;
    m['e'] -= O;
    
    int Z = min(min(m['z'], m['e']), min(m['r'], m['o']));
    
    for(int i = 0; i < O; i++)
        cout << "1 ";
    
    for(int i = 0; i < Z; i++)
        cout << "0 ";
    
    cout << "\n";
    
    return 0;
}

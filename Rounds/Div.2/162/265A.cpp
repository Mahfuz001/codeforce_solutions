/**
 * 	author: MahfuzAhmed
 * 	created: 31.07.2019 
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define forn(i,a,n) for(int i=(a);i<(n);i++)
#define forx(i,a,b) for(int i=(a);i<=(b);i++)
#define fory(i,a,b) for(int i=(a);i>=(b);i--)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define all(p) p.begin(),p.end()
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
    
    string s, t; cin >> s >> t;
    
    int x = 0;
    
    for(int i = 0; t[i]; i++){
        if(t[i] == s[x]) x++;
    }
    
    cout << x+1 << "\n";
    
    return 0;
}


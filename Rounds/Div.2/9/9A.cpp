/**
 * 	author: MahfuzAhmed
 * 	created: 01.08.2019 
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define forn(var,val,to) for(int var=(val);i(to);i++)
#define forx(var,val,to) for(int var=(val);i<=(to);i++)
#define fory(var,val,to) for(int var=(val);i>=(to);i--)
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
    
    string die_roll[] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    int y, w; cin >> y >> w;
    int n = max(y, w);
    
    cout << die_roll[6-n];
    
    
    return 0;
}


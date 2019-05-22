/**
 * 	author: krayr
 * 	created: 22.05.2019
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
    
	int c, v0, v1, a, l; cin >> c >> v0 >> v1 >> a >> l;
	
	int currPage = v0;
	int day = 1;
	
	int x = v0;
	
    while(currPage < c){
		x = min(v1, x+a);
		
		currPage += x - l;
		day++;
	}

	
	cout << day << "\n";

    return 0;
}

/*
 * CF R 556 DIV 2: A.cpp
 * 
 * Created by Mahfuz Ahmed on 29/04/2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define br std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

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
    vector<int> mring,eving;
    int n, m, r; cin >> n >> m >> r;
    
    
    
    fori(0, n){
		int x; cin >> x; mring.pb(x);
	}
	fori(0, m){
		int x; cin >> x; eving.pb(x);
	}
	
	sort(all(mring));
	sort(all(eving), greater<int>());
	

	if(mring[0] > eving[0]){
		cout << r;br;
		return 0;
	}
	
	int x = r/mring[0];
	
	 r -= x*mring[0];
	 r += x*eving[0];
	 
	 cout << r;br;
	
    

    return 0;
}

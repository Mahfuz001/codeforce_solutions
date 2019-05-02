/*
 * Educational Round 64 - A.cpp
 * 
 * Created by Mahfuz Ahmed on 01/05/2019.
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
    
	int n; cin >> n;
	
	int sum = 0;
	int lst = 1;
	
	vector<int> fig;
	
	fori(0, n){
		int x; cin >> x;
		
		if(lst != 1 && x != 1){
			cout << "Infinite\n";
			return 0;
		}
		if(x != 1){
			fig.pb(x);
			
			sum += x+1;
			if(i != 0 && i != n-1){
				sum += x+1;
			}
		}
		lst = x;
	}
	
	fori(0, fig.size()-1){
		if(fig[i] == 3 && fig[i+1] == 2)
			sum--;
	}
	
	cout << "Finite\n" << sum << "\n"; 
	
	
	
    

    return 0;
}

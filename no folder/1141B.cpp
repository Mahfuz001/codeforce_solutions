/*
 * 1141B.cpp
 * 
 * Created by Mahfuz Ahmed on 24/04/2019.
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
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    vector<int> vec;
    int currRest=0,prevRest=0, iCount=0;
    
    fori(0, n){
		int x; cin >> x;
		vec.pb(x);
	}
	
	fori(0, n){
		
		if(vec[i] == 1) currRest++;
		if(vec[i] == 0){
			prevRest = max(currRest, prevRest);
			currRest = 0;
		}
		if(vec[i] == 0 && iCount > 0){
			break;
		}
		if(vec.back() == 1 && i == n-1){
			i = -1;
			iCount++;
		}
	}
	
    
    cout <<max(prevRest,currRest);br;

    return 0;
}

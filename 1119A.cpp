/*
 * 1119A.cpp
 * 
 * Created by Mahfuz Ahmed on 06-04-2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define nl std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

typedef long long ll;
const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    vector<int> vec;
    
    fori(0,n){
		int x ; cin >> x;
		vec.pb(x);
	}
	
	int last = vec[n-1];
	int first = vec[0];
	int dis = 0,dis2 = 0;
	
	
	fori(0,n){
		if(vec[i] != last) {
			dis = n-i;
			break;
		}
		
	}
	fori(0,n){
		if(vec[i] != first) {
			dis2 = i+1;
		}
		
	}
	
	cout << (dis > dis2 ? dis-1 : dis2-1);nl;
    
    
    return 0;
}

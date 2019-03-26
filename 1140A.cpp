//
//	1140A 	
// 
//	author: Mahfuz Ahmed 
// 

#include <bits/stdc++.h>
using namespace std;
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)
#define lli long long int

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w","stdout");
    #endif
    
    int n; cin >> n;
    
	vector<int> a;
	a.resize(n);
    
    fori(0,n){
		cin >> a[i];
		a[i]--;
	}
	
	int pos = 0, cnt = 0;
    
    while(pos < n){
		cnt++;
		int mx = pos;
		
		while(pos < n && pos <= mx){
			mx = max(mx, a[pos]);
			pos++;
		}
	}
	
	cout << cnt; br;
    
    return 0;
}

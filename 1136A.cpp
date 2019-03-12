//
// 	1136A
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
	vector<int> v(10000000);
	
	int chap = 1;
	int q = n;
	while(q--){
		int x,y;
		cin >> x >> y;
		
		fori(x,y+1){
			v[i] = chap;
		}
		chap++;
	}
	
	int p; cin >> p;
	int t;
	if( v[p] > v[p-1]) t = (n - v[p])+1;
	else t = n - (v[p]-1);
	cout << t; br;
	
    
    
    return 0;
}

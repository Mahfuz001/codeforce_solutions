// 
//	author: Mahfuz Ahmed 
// 

#include <bits/stdc++.h>
using namespace std;
#define br std::cout << "\n";
#define flush std::cout<<flush;
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
    //freopen("output.txt","w","stdout");
    #endif
    
    string s; cin >> s;    
    
    fori(0,s.length()){
		if(s[i] == '1') continue;
		if(s[i] == '4' && 
			( s[i-1] == '1' || 
			( s[i-1] == '4' && 
			  s[i-2] == '1'))){
			continue;
		}else{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
    
    return 0;
}

//
// 	148A
// 
//	author: Mahfuz Ahmed 
// 

#include <bits/stdc++.h>
using namespace std;
#define nl std::cout << "\n";
#define flush std::cout<<flush;
#define fori(s,n) for(int i=s;i<=n;i++)
#define forj(s,n) for(int j=s;j<n;j++)
#define lli long long int

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w","stdout");
    #endif
    
    int a,b,c,d,n,ans=0;
    cin >> a >> b >> c >> d >> n;
    
    fori(1,n){
		if(i % a == 0) ans++;
		else if(i % b == 0) ans++;
		else if(i % c == 0) ans++;
		else if(i % d == 0) ans++;
	}
	cout << ans; nl;
    
    return 0;
}

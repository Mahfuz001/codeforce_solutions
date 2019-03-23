//
// 	1141A
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
    
    int n, m; cin >> n >> m;
    int result = -1;
    
    if (m % n == 0){
		result = 0;
		int d = m/n;
		
		while(d % 2 == 0){
			d /= 2; result++;
		}
		while(d%3 == 0){
			d /=3; result++;
		}
		if (d !=1) result = -1;
    }
    cout << result;br;
    
    return 0;
}

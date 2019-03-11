//
// 	
// 
//	author: Mahfuz Ahmed 
// 

#include <bits/stdc++.h>
using namespace std;
#define nl std::cout << "\n";
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
    
    int a = 0, b = 0;
    string s1 = "",s2 = "";
	
	int n; cin >> n;
	fori(0,n){
		string s;
		cin >> s;
		if(s == s1 || s1 == ""){
			s1 = s;
			a++;
		}else{
			s2 = s;
			b++;
		}
	}
	if(a > b) cout << s1;
	else cout << s2;
	nl;
    return 0;
}

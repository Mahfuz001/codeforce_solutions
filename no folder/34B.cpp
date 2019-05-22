//
// 	34B
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
    
    int n,m;
    cin >> n >> m;
    
    vector<int> vec;
    
    fori(0,n){
		int x;
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	int ans=0;
	for(int i=0;i<m && vec[i]<0;i++){
		ans+= vec[i];
	}
	cout << -ans; nl;
    
    
    return 0;
}

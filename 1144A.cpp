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
    
    while(n--){
		bool flag = false;
		string s; cin >> s;
		int sz = s.length();
		vector<int> vec;
		for(int i=0;s[i];i++){
			int x = s[i];
			vec.push_back(x);
		}
		if(sz > 1){
			sort(vec.begin(), vec.end());
			
			fori(0,sz-1){
				if(vec[i+1]-vec[i] != 1){
					flag = false;
					break;
				}
				flag  = true;
			}
		}else{
			flag = true;
		}
		if(flag){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}
        
    
    
    return 0;
}

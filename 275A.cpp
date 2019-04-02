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
    
    int grid[10][10] = {0};
    
    fori(2,5){
		forj(2,5){
			int x; cin >> x;
			if(x % 2 != 0){
				if(grid[i][j] == 0) grid[i][j] = 1;
				else grid[i][j] = 0;
				
				if(grid[i-1][j] == 0) grid[i-1][j] = 1;
				else grid[i-1][j] = 0;
				
				if(grid[i+1][j] == 0) grid[i+1][j] = 1;
				else grid[i+1][j] = 0;
				
				if(grid[i][j-1] == 0) grid[i][j-1] = 1;
				else grid[i][j-1] = 0;
				
				if(grid[i][j+1] == 0) grid[i][j+1] = 1;
				else grid[i][j+1] = 0;
				
			}
		}
	}
	
	fori(2,5){
		forj(2,5){
			if(grid[i][j] == 1) cout << 0;
			else cout << 1;
		}
		br;
	}
	
	
    return 0;
}

/**
 * 	author: MahfuzAhmed
 * 	created: 16.07.2019 
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
	int bNum; cin >> bNum;
	
	vector<int> b, g;
	
	for(int i = 0; i < bNum; i++){
		int x; cin >> x;
		b.push_back(x);
	} 
	
	int gNum; cin >> gNum;
	
	for(int i = 0; i < gNum; i++){
		int x; cin >> x;
		g.push_back(x);
	}
	
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());
    
    int cnt = 0;
    
    for(int i = 0; i < bNum; i++){
		for(int j = 0; j < gNum; j++){
			if(g[j] > 0 && abs(b[i]-g[j]) <= 1){
				//cout << b[i] << " " << g[j] << "\n";
				cnt++;
				g[j] = 0;
				break;
			}
		}
	}
	
	cout << cnt << "\n";
    
    

    return 0;
}


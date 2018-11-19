//
//  266B.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/18/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << std::endl;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	#if 0
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout)
	#endif
    
    int n,t;
    string s;
    
    cin >> n >> t;
    cin >> s;
    
    while (t--) {
        for (int i=0; i<n-1; i++) {
            if(s[i] == 'B' && s[i+1] == 'G'){
                s[i] = 'G';
                s[i+1] = 'B';
                i+=1;
            }
        }
    }
    cout << s;br;


	return 0;
}

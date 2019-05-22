//
//  467A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/16/18.
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
    
    int n,count=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int p,q;
        cin >> p >> q;
        if(q-p >= 2){
            count++;
        }
    }
    cout << count;
    br;
    
    return 0;
}

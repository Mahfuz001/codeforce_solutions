//
//  41A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/19/18.
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
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    
    if(s==t){
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }

	return 0;
}

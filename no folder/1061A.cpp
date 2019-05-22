//
//  1061A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/22/18.
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
    
    lli n,s;
    cin >> n >> s;
    
    lli a,b;
    a = s/n;
    b = n*a;
    if(n == s){
        cout << 1;br;
        return 0;
    }else{
        if(b == s){
            cout << a;br;
            return 0;
        }else{
            cout << a+1;br;
        }
    }


	return 0;
}

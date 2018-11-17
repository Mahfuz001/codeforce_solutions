//
//  1077A.cpp
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

    lli n;
    cin >> n;
    while(n--){
        lli a,b,k,c=0,d=0;
        cin >> a >> b >> k;
        if(k%2 != 0){
            for(int i=0;i<k/2;i++){
                c+=b;
            }
            for(int i=0;i<k-(k/2);i++){
                d+=a;
            }
        }else{
            for(int i=0;i<k/2;i++){
                c+=b;
                d+=a;
            }
        }
        cout << d - c;
        br;
    }
    

	return 0;
}

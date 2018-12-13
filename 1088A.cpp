//
//  1088A.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/13/18.
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
    
    int x;
    cin >> x;
    
    for(int a=1;a<=x;a++){
        for(int b=1;b<=x;b++){
            if(a%b == 0 && a*b > x && a/b < x){
                printf("%d %d\n",a,b);
                return 0;
            }
        }
    }
    printf("-1\n");


	return 0;
}

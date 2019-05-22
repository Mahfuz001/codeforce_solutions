//
//  271A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/19/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << std::endl;

bool isDistinct(string s){
    char
        s1 = s[0],
        s2 = s[1],
        s3 = s[2],
        s4 = s[3];
    
    if(s1 == s2 || s1 == s3 || s1 == s4||
       s2 == s3 || s2 == s4 || s3 == s4){
        return false;
    }
    
    return true;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	#if 0
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout)
	#endif
    
    int n;
    cin >> n;
    n+=1;
    
    while (true) {
        string nS = to_string(n);
        if(isDistinct(nS)){
            cout << n;br;
            break;
        }else{
            n++;
        }
    }

	return 0;
}

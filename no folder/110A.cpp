//
//  110A.cpp
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

    string n;
    cin >> n;
    
    lli count = 0;
    
    for(int i=0;i<n.size();i++){
        if(n[i] == '4' || n[i] == '7'){
            count++;
        }
    }
    if(count == 4 || count == 7){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
	return 0;
}

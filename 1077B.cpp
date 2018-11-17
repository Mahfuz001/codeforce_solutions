//
//  1077B.cpp
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
    
    int n,c=0;
    vector<int> vec;
    cin >> n;
    while(n--){
        int state;
        cin >> state;
        vec.push_back(state);
    }
    for(int i=1;i<vec.size()-1;i++){
        if(vec[i] == 0 && vec[i-1] == 1 && vec[i+1] == 1){
            vec[i+1] = 0;
            c++;
        }
    }
    cout << c;
    br;
    

	return 0;
}

//
//  1061B.cpp
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
    
    lli n,m;
    lli del=0;
    vector<int> vec;
    
    cin >> n >> m;
    for(int i=0;i<n;i++){
        lli a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    if(vec[0] < vec[1]){
        del+=vec[0];
    }
    for(int i=1;i<n;i++){
        if(vec[i] < vec[i+1]){
            del++;
        }
        if(vec[i] == vec[i+1] && del != 0){
            del+=vec[i-1];
        }
    }
    cout << del;br;


	return 0;
}

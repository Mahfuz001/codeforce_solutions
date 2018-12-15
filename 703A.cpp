//
//  703A.cpp
//  
//
//  Created by Mahfuz Ahmed on 12/15/18.
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
    
    int n,miska=0,chris=0;
    cin >> n;
    while (n--) {
        int m,c;
        cin >> m >> c;
        if(m > c) miska++;
        else if(m < c) chris++;
    }
    if(miska == chris) cout << "Friendship is magic!^^\n";
    else if(miska > chris) cout << "Mishka\n";
    else cout << "Chris\n";
    
    return 0;
}

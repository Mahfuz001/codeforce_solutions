/**
 *  author: mahfuzz
 *  created: 16.11.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
typedef long long ll;
 
 
int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n; cin >> n;
    int p; cin >> p;
    
    set<int> lev;
    for(int i = 0; i < p; i++){
        int x; cin >> x;
        lev.insert(x);
    }
    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        lev.insert(x);
    }
    
    if(lev.size() == n)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";
    
    
    return 0;
}

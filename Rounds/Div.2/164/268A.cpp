/**
 * 	author: MahfuzAhmed
 * 	created: 31.07.2019 
**/

#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    vector<pair<int,int>> vec;
    vec.resize(n);
    
    for(int i=0;i < n; i++){
        int x, y;
        cin >> x >> y;
        
        vec[i] = make_pair(x,y);
        
    }
    
    int cnt = 0;
    
    for(int i=0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(vec[i].f == vec[j].s )
                cnt++;
        }
    }
    
    cout << cnt << "\n";
    
    
    return 0;
}


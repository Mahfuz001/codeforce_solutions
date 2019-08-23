/**
 *  author: MahfuzAhmed
 *  created: 22.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;

int a[55][55], b[55][55];

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n, m; cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    
    int cnt = 0;
    
    vector<pair<int,int>> v;
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            if(a[i][j] == 1 && a[i][j] == 1 &&
                    a[i][j+1] == 1 && 
                    a[i+1][j] == 1 && 
                    a[i+1][j+1] ==1){
                    
                    b[i][j] = 1;
                    b[i][j+1] = 1;
                    b[i+1][j] = 1;
                    b[i+1][j+1] = 1;
                
                    
                    cnt++;
                    
                    v.push_back(make_pair(i+1, j+1));
                
            }
        }
    }
    
    bool flag = true;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(b[i][j] != a[i][j]){
                flag = false;
                break;
            }
        }
    }
    
    
    if(flag){
        cout << cnt << "\n";
        
        for(int i=0; i<cnt; i++){
            cout << v[i].first << " " << v[i].second  << "\n";
        }
        
    }else{
        cout << -1 << "\n";
    }
    
    
    return 0;
}

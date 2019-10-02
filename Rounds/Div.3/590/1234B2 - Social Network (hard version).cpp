/**
 *  author: mahfuzz
 *  created: 02.10.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int maxn = 1000005;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    
    int n, k; cin >> n >> k;
    
    queue<int> Q;
    set<int> SET;
    
    int id;
    for(int i = 0; i < n; i++){
        cin >> id;
        
        if(!SET.count(id)){
            if(Q.size() >= k){
                int curr = Q.front();
                Q.pop();
                SET.erase(curr);
            }
            SET.insert(id);
            Q.push(id);
        }
    }
    
    vector<int> vec;
    while(!Q.empty()){
        vec.push_back(Q.front());
        Q.pop();
    }
    
    reverse(vec.begin(), vec.end());
    
    cout << vec.size() << "\n";
    for(auto a : vec)
        cout << a << " ";
    cout << "\n";
    
    
    return 0;
}

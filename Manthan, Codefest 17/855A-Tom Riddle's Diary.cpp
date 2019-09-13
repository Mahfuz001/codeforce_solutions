/**
 *  author: mahfuzz
 *  created: 13.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;


int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    vector<string> vec;
    int n; cin >> n;
    
    string s;
    while(n--){
        cin >> s;
        
        int sz = vec.size();
        bool flag = false;
        for(int i = 0; i < sz; i++){
            if(s == vec[i]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
        }else{
            vec.push_back(s);
            cout << "NO\n";
        }
    }
    
    
    return 0;
}

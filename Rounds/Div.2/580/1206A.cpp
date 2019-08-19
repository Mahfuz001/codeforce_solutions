/**
 *  author: MahfuzAhmed
 *  created: 18.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
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
    
    int arr[400000] = {0};
    
    vector<int> vec1, vec2;
    
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        vec1.push_back(x);
        arr[x]++;
    }
    
    int m; cin >> m;
    for(int i=0; i<m; i++){
        int x; cin >> x;
        vec2.push_back(x);
        arr[x]++;
    }
    
    for(int i=0; i<vec1.size(); i++){
        for(int j=0;j<vec2.size();j++){
            int add = vec1[i]+vec2[j];
            if(arr[add] == 0){
                cout << vec1[i] << " " << vec2[j] << "\n";
                return 0; 
            }
        }
    }
    
    return 0;
}

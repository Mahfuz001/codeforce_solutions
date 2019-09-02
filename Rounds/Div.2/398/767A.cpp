/**
 *  author: MahfuzAhmed
 *  created: 02.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int max_n = 1e6+5;
typedef long long ll;

int arr[1000000];


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int n; cin >> n;
    
    vector<int> vec;
    
    for(int i=0; i<n; i++){
        int x; cin >> x; 
        vec.push_back(x);
    }
    
    int curr = n;
    
    for(int i=0; i<n; i++){
        
        arr[vec[i]] = 1;
        
        if(arr[curr] == 1){
            cout << curr; curr--;
            while(true){
                if(arr[curr] == 1){
                    cout << " " << curr; 
                    curr--;
                }else{
                    break;
                }
            }
        }

        cout << "\n";
    }
    
    
    
    return 0;
}

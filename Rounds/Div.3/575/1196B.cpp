/**
 * 	author: MahfuzAhmed
 * 	created: 24.07.2019 
**/

#include <bits/stdc++.h>
using namespace std;

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
    
	int q; cin >> q;
    
    while(q--){
        int n, k; cin >> n >> k;
        
        int arr[n];
        int cntOdd = 0;
        
        for(int i=0;i<n;i++){
            cin >> arr[i];
            cntOdd += arr[i] % 2;
        }
        
        if(cntOdd < k || k % 2 != cntOdd % 2){
            cout << "NO\n";
            continue;
        }
        
        cout << "YES\n";
        
        for(int i = 0; i < n; i++){
            if(k == 1)
                break;
                
            if(arr[i] % 2 == 1){
                cout << i + 1 << " ";
                k--;
            }
        }
        
        cout << n << "\n";
    }
    

    return 0;
}


/**
 * 	author: MahfuzAhmed
 * 	created: 27.07.2019 
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
    
    int n; cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    bool c = false;
    
    while(!c){
        c = true;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                c = false;
                
                int t = arr[i] - arr[i+1];
                
                arr[i] -= t;
                arr[i+1] += t;
            }
        }
    }
    cout << arr[0];
    for(int i = 1; i < n; i++){
        cout << " " << arr[i];
    }
    
    cout << "\n";
    
    return 0;
}


/**
 *  author: MahfuzAhmed
 *  created: 14.08.2019
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
    
    int n; cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)  cin >> arr[i];

    for(int i=0; i<n; i++){
        if(i == 0){
            cout << abs(arr[i]-arr[i+1]) << " " 
                << abs(arr[i] - arr[n-1]) << "\n";
        }else if(i == n-1){
            cout << abs(arr[i]-arr[i-1]) << " " 
                << abs(arr[i] - arr[0]) << "\n";
        }else{
            cout << min(abs(arr[i]-arr[i+1]), abs(arr[i]-arr[i-1]))<< " " 
                << max(abs(arr[i] - arr[n-1]), abs(arr[i] - arr[0])) << "\n";
        }
    }
    
    
    return 0;
}

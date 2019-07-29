/**
 * 	author: MahfuzAhmed
 * 	created: 29.07.2019 
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
    
    int t; cin >> t; 
    int arr[t]; 
    
    for(int i=0;i<t;i++){
        cin >> arr[i];
    }
    
    
    int s = 0;
    int d = 0;
    
    int l = 0, r = t-1;
    int cnt = 1;
    
    for(int i = 0; i<t; i++){
        if(arr[l] >= arr[r]){
            if(cnt % 2 == 0)
                s += arr[l];
            else
                d += arr[l];
            l++;
        }else if(arr[l] <= arr[r]){
            if(cnt % 2 == 0)
                s += arr[r];
            else
                d += arr[r];
            r--;
        }
        
        cnt++;
    }
    
    
    cout << d << " " << s << "\n";
    
    
    
    return 0;
}



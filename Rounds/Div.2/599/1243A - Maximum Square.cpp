/**
 *  author: mahfuzz
 *  created: 13.11.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int k; cin >> k;
    while(k--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        sort(arr, arr+n, greater<int>());
        
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cnt++;
            if(arr[i] < cnt){
                cnt--;
                break;
            }
            
        }
        cout << cnt << "\n";
    }
       
    return 0;
}

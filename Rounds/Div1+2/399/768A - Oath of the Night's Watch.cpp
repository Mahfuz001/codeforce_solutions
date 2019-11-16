/**
 *  author: mahfuzz
 *  created: 15.11.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n; cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
       cin >> arr[i];
       
    sort(arr, arr+n);
    
    int cnt = 0;
    for(int i = 1; i < n - 1; i++){
        if(arr[i] > arr[0] && arr[i] < arr[n-1])
            cnt++;
    }
    
    cout << cnt << "\n";
       
    return 0;
}

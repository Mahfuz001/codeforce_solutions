/**
 *  author: MahfuzAhmed
 *  created: 24.05.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, s, n) for(int i = s; i < int(n); i++)

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
    
    int n, m , k; cin >> n >> m >> k;
    int arr[n];
    
    forn(i, 0, n) cin >> arr[i];
    
    //left
    bool flag1 = false, flag2 = false;
    int leftDis = 0;
    for(int i = m-2; i >= 0; i--){
        leftDis += 10;
        if(arr[i] != 0 && arr[i] <= k){
            flag1 = true;
            break;
        }
    }
    
    //right
    int rightDis = 0;
    for(int i = m; i < n; i++){
        
        rightDis += 10;
        
        if(arr[i] != 0 && arr[i] <= k){
            flag2=  true;
            break;
        }
    }
    
    
    if(flag1 && flag2){
        cout << min(leftDis, rightDis) << "\n";
    }else if(flag1 && !flag2){
        cout << leftDis << "\n";
    }else{
        cout << rightDis << "\n";
    }
    
    
    
    return 0;
}

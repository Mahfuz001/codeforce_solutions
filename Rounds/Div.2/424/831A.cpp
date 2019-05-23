/**
 * 	author: krayr
 * 	created: 23.05.2019
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
    
    int n; cin >> n;
    int arr[n];
    
    forn(i, 0, n) cin >> arr[i];
    
    int pos1 = 0;
    int pos2 = n-1;
    
    int i = 1;
    while(arr[i] > arr[i-1]) {
        pos1++;
        i++;
    }
    
    i = n-1;
    
    while(arr[i] < arr[i-1]){
        i--;
        pos2--;
    }
    
    for(int j=pos1; j<pos2;j++){
        if(arr[j] != arr[j+1]){
            cout << "NO\n";
            return 0;
        }
    }
    
    cout << "YES\n";
    
    
    
    return 0;
}

/**
 *  author: MahfuzAhmed
 *  created: 28.05.2019
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
    
    int a, b, c; cin >> a >> b >> c;
    if(c % a == 0 || c % b == 0 || (a+b) == c){
            cout << "Yes\n";
            return 0;
    }else{
        
        for(int i=1;i<c;i++){
            for(int j=0;j<c;j++){
                if((a*i)+(b*j) == c){
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }
    
    cout << "No\n";
    
    
    return 0;
}

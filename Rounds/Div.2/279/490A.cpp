/**
 * 	author: MahfuzAhmed
 * 	created: 07.08.2019 
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define forn(var,from,to) for(int var=(from);var<(to);var++)
#define forx(var,from,to) for(int var=(from);var<=(to);var++)
#define fory(var,from,to) for(int var=(from);var>=(to);var--)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define all(p) p.begin(),p.end()
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
    
    int t[3];
    
    memset(t, 0, sizeof t);
    
    forn(i, 0, n){
        cin >> arr[i];
        t[arr[i]-1]++;
    }
    
    int team = min(t[0], min(t[1],t[2]));
    
    
    
    
    if(team > 0){
        int indx[3][team];
        memset(indx, 0, sizeof indx);
        
        
        forn(i, 0, 3){
            int cnt = 0;
            forn(j, 0, n){
                if(arr[j] == i+1 && cnt < team){
                    indx[i][cnt] = j;
                    cnt++;
                }
            }
        }
        
        cout << team << "\n";
        
        forn(i, 0, team){
            cout << indx[0][i]+1;
            forn(j, 1, 3){
                cout << " " << indx[j][i]+1;
            }
            
            cout << "\n";
        }
        
        
    }else{
        cout << 0 << "\n";
    }
    
    
    
    return 0;
}


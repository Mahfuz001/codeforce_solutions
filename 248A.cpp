/*
 * 248A 
 * 
 * Created by Mahfuz Ahmed.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define nl std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

typedef long long ll;
const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

void solve(){
  int n; cin >> n;
	int lz = 0, rz = 0;
  vector<int> left, right;
  
  fori(0, n){
    int x, y; cin >> x >> y;
    if(x == 0) lz++;
    if(y == 0) rz++;
    left.pb(x);
    right.pb(y);
  }
  int sec = 0;
  if((lz == 1 && rz == 0) ||( rz == 1 && lz == 0)){
    cout << 1;nl;
  }
  else if(lz > rz){
    fori(0, n){
      if(left[i] == 1){
        sec++;
        left[i] = 0;
      }
    }
    fori(0, n){
      if(right[i] == 0){
        sec++;
        left[i] = 1;
      }
    }
    cout << sec; nl;
  }
  else if(rz > lz){
    fori(0, n){
      if(left[i] == 0){
        sec++;
        left[i] = 1;
      }
    }
    fori(0, n){
      if(right[i] == 1){
        sec++;
        left[i] = 0;
      }
    }
    cout << sec;nl;
  }
  		
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    solve();
    
    return 0;
}

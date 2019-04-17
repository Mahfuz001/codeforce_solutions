/*
 * 1154A.cpp
 * 
 * Created by Mahfuz Ahmed on 17/04/2019.
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
	
	int arr[4];
	fori(0,4){
		cin >> arr[i];
	}
	sort(arr, arr+4);
	cout << arr[3] - arr[0];
	fori(1, 3){
		cout << " " << arr[3] - arr[i];
	}
	cout << "\n";
		
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

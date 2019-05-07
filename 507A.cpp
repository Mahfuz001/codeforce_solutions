/**
 * 	author: krayr
 * 	created: 07.05.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, n) for(int i = 0; i < int(n); i++)

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
    
	int n, m; cin >> n >> m;
	vector<int> arr1(n),arr2(n);
	
	int i_cnt = 0;
	forn(i, n){
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}
	
	sort(all(arr1));
	
	int d_cnt = 0;
	forn(i, n){
		int x = d_cnt+arr1[i];
		if(x <= m){
			d_cnt += arr1[i];
			i_cnt++;
		}
	}
	cout << i_cnt << "\n";
	if(i_cnt > 0){
		forn(i, 1){
			forn(j, n){
				if(arr1[i] == arr2[j]){
					cout << j+1;
					arr2[j] = -1;
					break;
				}
			}
		}
		for(int i=1;i<i_cnt;i++){
			forn(j, n){
				if(arr1[i] == arr2[j]){
					cout << " " << j+1;
					arr2[j] = -1;
					break;
				}
			}
		}
		
		cout << "\n";
	}
	


    return 0;
}

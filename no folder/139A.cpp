// 
//	author: Mahfuz Ahmed 
// 

#include <bits/stdc++.h>
using namespace std;
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)
#define lli long long int

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w","stdout");
    #endif
    
    int n; cin >> n;
    int arr[7], cnt=0,ind= 0, sum=0;
    
    fori(0, 7){
        cin >> arr[i];
    }
    while(sum < n){
        if(ind > 6) ind = 0;
        sum += arr[ind];
        ind++; cnt++;
        if(cnt > 7) cnt = 1;

    }
    cout << cnt; br;
    
    return 0;
}

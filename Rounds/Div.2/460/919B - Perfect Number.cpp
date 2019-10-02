/**
 *  author: mahfuzz
 *  created: 02.10.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int maxn = 1000005;
typedef long long ll;

int digSum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    
    int k; cin >> k;
    int cnt = 0, i = 19;
    
    while(cnt != k){
        if(digSum(i) == 10)
            cnt++;
        if(cnt < k)
            i++;
    }
    
    cout << i << "\n";
    
    return 0;
}

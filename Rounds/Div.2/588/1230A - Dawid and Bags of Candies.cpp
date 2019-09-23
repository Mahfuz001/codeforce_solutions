/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int max_n = 1000005;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if(a+b == c+d)
        cout << "YES\n";
    else if(b+c == a+d)
        cout << "YES\n";
    else if(d+b == a+c)
        cout << "YES\n";
    else if(a+b+c == d)
        cout << "YES\n";
    else if(a+c+d == b)
        cout << "YES\n";
    else if(a+b+d == c)
        cout << "YES\n";
    else if(b+c+d == a)
        cout << "YES\n";
    else
        cout << "NO\n";
        
    return 0;
}

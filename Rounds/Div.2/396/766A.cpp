/**
 *  author: MahfuzAhmed
 *  created: 18.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
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
    
    string s, s1; cin >> s >> s1;
    
    if(s == s1)
        cout << "-1\n";
    else
        cout << max(s.length(), s1.length()) << "\n";
    
    
    return 0;
}

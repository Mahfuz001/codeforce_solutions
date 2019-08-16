/**
 *  author: MahfuzAhmed
 *  created: 16.08.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int n, m;
int A[222];

bool check(){
    
    for(int i=0; i<n; i++){
        if(A[i] != i+1)
            return false;
    }
    
    
    return true;
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    cin >> m;
    
    
        
    for(int i=0; i<m; i++){
        cin >> n;
        for(int j=0; j<n;j++)
            cin >> A[j];
        
        int pos = 0;
        while(A[pos] != 1) pos++;
        
        rotate(A, A+pos, A+n);
        if(check()){
            cout << "YES\n";
            continue;
        }
        
        reverse(A, A+n);
        pos = 0;
        while(A[pos] != 1) pos++;
        rotate(A, A+pos, A+n);
        if(check()){
            cout << "YES\n";
            continue;
        }
        
        cout << "NO\n";
        
    }
    
    return 0;
}

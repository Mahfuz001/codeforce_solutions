//
//  450A 	
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

    int n, m; cin >> n >> m;

    vector<int> vec;
    queue<int> q;

    fori(0, n){
        int x; cin >> x;
        vec.push_back(x);
        q.push(i);
    }

    int last = q.back();

    while(!q.empty()){
        last = q.back();
        if(vec[q.front()] > m){
            vec[q.front()] -= m;
            q.push(q.front());
            q.pop();
        }else{
            q.pop();
        }
    }

    cout << last+1; br;
    
    

    return 0;
}

//
//	1133.cpp
//
//
//	Created by Mahfuz Ahmed on 07/03/19.
//

#include <bits/stdc++.h>
#include<sstream>
using namespace std;
#define lli long long int
#define nl std::cout << "\n";
#define flush std::cout<<flush;
#define FORI(s,n) for(int i=s;i<n;i++)
#define FORJ(s,n)c for(int j=s;j<n;j++)

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w","stdout");
    #endif
    
    int h1,h2,m1,m2;
    char c1,c2;
    
    cin >> h1 >> c1 >> m1 >> h2 >> c2 >> m2;
    
    int hour = h1*60+m1;
    int minute = h2*60+m2;
    
    int ans = (hour+minute)/2;
    
    printf("%02d:%02d\n", ans/60, ans%60);

    return 0;
}

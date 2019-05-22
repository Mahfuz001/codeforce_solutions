/*
 * 141A.cpp
 * 
 * Created by Mahfuz Ahmed on 23/04/2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define br std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    vector<int> vec1(27), vec2(27);
	fill(all(vec1), 0);
	fill(all(vec2), 0);
	
    
    
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    
    for(int i=0; s1[i]; i++){
		int num = s1[i] - 'A';
		vec1[num]++;
	}
	
    for(int i=0; s2[i]; i++){
		int num = s2[i] - 'A';
		vec1[num]++;
	}
	
	
    for(int i=0; s3[i]; i++){
		int num = s3[i] - 'A';
		vec2[num]++;
	}
	
	int i = 0;
	while(i < 27){
		if(vec1[i] != vec2[i]){
			puts("NO");
			return 0;
		}
		i++;
	}
	
	puts("YES");
    

    return 0;
}

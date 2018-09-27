#include <bits/stdc++.h>
using namespace std;

#define INP_FILE "/Users/mahfuz/inputs.txt"
#define fori(n) for(int i=0; i < n; i++)

int main(){
    freopen(INP_FILE,"r",stdin);
    int n;
    cin >> n;
    while(n--){
    	string s;
    	cin >> s;
    	int size = s.length();
    	if(size > 10){
    		cout << s[0] << size - 2 << s[size-1] << endl;
    		continue;
    	}
    	cout << s << endl;
    }


    return 0;
}

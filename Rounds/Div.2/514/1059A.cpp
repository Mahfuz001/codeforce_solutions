#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	int n,L,a,tTime=0,ans=0,start=0;
	cin >> n >> L >> a;

	while(n--){
		int x,y;
		cin >> x >> y;
		ans+= (x-start)/a;
		start = x+y;
	}
	ans += (L-start)/a;

	cout << ans << endl;

	return 0;
}
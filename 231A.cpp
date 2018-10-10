#include <bits/stdc++.h>
using namespace std;
#define NO

int main(){

	#ifdef OJ
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,yCount,solved=0;
	cin >> n;

	while (n--){
		int x,y,z;
		cin >> x >> y >> z;
		yCount =x+y+z;
		if (yCount >= 2){
			solved++;
		}
	}
	cout << solved << endl;
	

	return 0;
}
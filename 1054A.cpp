#include<bits/stdc++.h>
using namespace std;
#define fori(n) for(int i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)
//#define OJ

int byStairs(int x,int y,int t1){
	int floor = abs(x-y);
	return floor * t1;
}
int byElevator(int x,int y,int z,int t2,int t3){
	int doc = t3+t3;
	int toMe = abs(x-z) * t2;
	int tolMe = doc+toMe;
	int floor = abs(x-y);
	return (floor*t2)+tolMe+t3;
}

int main(){
	#ifdef OJ
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int x,y,z,t1,t2,t3;
	cin>>x>>y>>z>>t1>>t2>>t3;
	int bS = byStairs(x,y,t1);
	int bE = byElevator(x,y,z,t2,t3);
	if(bE < bS || bE == bS){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	
	return 0;
}

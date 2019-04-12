#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; cin >> n;
	if(n == 1){
		puts("I hate it");
	}
	for(int i=1;i<n;i++){
		if(i%2 == 0){
			cout << "I love that ";
		}else{
			cout << "I hate that ";
		}
	}
	if(n%2 == 0){
		puts("I love it");
	}else if(n != 1){
		puts("I hate it");
	}
	
	
	return 0;
}

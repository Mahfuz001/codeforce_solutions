#include"bits/stdc++.h"
using namespace std;
int n;
char s;
int a[100],k;

int main(){
  cin>>n;
  for (int i=1;i<=n;i++)
  {
  	cin>>s;
  	if (a[s-'a']==0){
        k++;
        a[s-'a']=1;
    }
  } 
  if (k!=n || n==1)  cout<<"Yes"<<endl;  
  else cout<<"No"<<endl; 
}


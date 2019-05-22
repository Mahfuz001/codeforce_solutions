#include<iostream>
using namespace std;

int main(){
    int a,b,c,h1,h2,l1,l2;
    cin>>a>>b>>c;
    h1 = max(a,b);
    h2 = max(h1,c);
    l1 = min(a,b);
    l2 = min(l1,c);
    cout << h2-l2 << "\n";
    
    return 0;
}


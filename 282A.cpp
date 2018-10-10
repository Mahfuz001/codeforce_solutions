#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifdef OJ
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,x=0;
    cin >> n;
    
    while(n--){
        string y;
        cin >> y;
        if(y == "X++" || y == "++X"){
            x++;
        }else{
            x--;
        }
    }
    cout << x << endl;

    return 0;
}

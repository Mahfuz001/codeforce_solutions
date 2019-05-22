//
//  393A.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/6/18.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0,
        i=0,
        e=0,
        t=0;
    
    string s;
    cin >> s;
    
    for(auto a:s){
        if(a == 'n'){
            n++;
        }else if(a == 'i'){
            i++;
        }else if(a == 'e'){
            e++;
        }else if(a == 't'){
            t++;
        }
    }
    n--;
    n /= 2;
    e /= 3;

    cout << min(min(n,e),min(t,i)) << endl;
    
    return 0;
}

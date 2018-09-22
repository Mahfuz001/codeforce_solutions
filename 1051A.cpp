#include "bits/stdc++.h"
using namespace std;
#define INP_FILE "/Users/mahfuz/inputs.txt"

int main(){
   //freopen(INP_FILE,"r",stdin);

    int lwr,lwrP,upr,uprP,num,numP;
    int cnt = 0, n;
    cin >> n;
    string s;
    while(cnt < n){
        cin >> s;
    
        for (int i = 0; i< s.size(); i++){
            if((int)s[i] >= 97 && (int) s[i] <= 122)
                lwr++;
                lwrP = i;
            if((int)s[i] >= 65  && (int) s[i] <= 90)
                upr++;
                uprP = i;
            if((int)s[i] >= 48 && (int) s[i] <= 57 )
                num++;
                numP = i;
        } 

        if(lwr < 1){
            if (upr > 1) s[uprP] = 'a';
            else if (num > 1) s[numP] = 'a';
        }
    
        if(upr < 1){
            if (lwr > 1) s[lwrP] = 'A';
            else if (num > 1) s[numP] = 'A';
        }
        if(num < 1){
            if (upr > 1) s[uprP] = '1';
            else if (lwr > 1) s[lwrP] = '1';
        }   

        cout << s << endl;
        cnt++;
    }
    return 0;
}

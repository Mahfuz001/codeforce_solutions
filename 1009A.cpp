//
// Created by Mahfuz on 10/9/18.
//

#include <iostream>
#include <deque>
using namespace std;

int main(){

    //n = number of games
    //m = bills in wallet
    int n, m, numOfGames = 0;
    //c = costs of games
    //a = money's in wallet
    deque<int> c(1000), a(1000);

    cin >> n >> m;

    for (int i=0; i < n; i++){
        cin >> c[i];
    }
    for (int i=0; i < m; i++){
        cin >> a[i];
    }

    for (int i=0 ; i < n; i++){
        if (c[0] <= a[0]){
            numOfGames += 1;
            c.pop_front();
            a.pop_front();
        }else {
            c.pop_front();
        }
    }

    cout << numOfGames << endl;

    return 0;
}
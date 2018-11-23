#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[100],n;
    cin >> n;
    
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        arr[a] = i;
    }
    cout << arr[1];
    for(int i=2;i<=n;i++){
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}

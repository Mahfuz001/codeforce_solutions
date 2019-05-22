#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, k, a, b;
    cin >> n >> k;

    a = k / n;
    b = k % n;
    if(b == 0){
        cout << a << endl;
    }else {
        cout << a+1 << endl;
    }

}
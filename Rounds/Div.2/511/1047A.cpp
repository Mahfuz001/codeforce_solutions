#include <iostream>
using namespace std;
int main()
{
    
    int n,a,b,c;
    
    cin >> n;
    
    a = n/3;
    while(a % 3 == 0){
        a--;
    }
    
    b= (n-a) / 2;
    
    while(b%3 == 0){
        b--;
    }
    c = n- (a+b);
    if (c%3 == 0){
        if((a-1) % 3 != 0){
            a -= 1;
            c += 1;
        }else if((b-1) % 3 !=0){
            b -=1;
            c +=1;
        }
    }
    cout << a << " " << b << " " << c << endl;

    return 0;
}

#include <iostream>
using namespace std;
#define lli long long int
#define br std::cout << std::endl;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    
    while(n--){
        int x;
        cin>>x;
        if(x%5 == 0){
            cout << x/5 << "\n";
        }else{
            cout<< (x+4)/5 << "\n";
        }
    }
    
    return 0;
}

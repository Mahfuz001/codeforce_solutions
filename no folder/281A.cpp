#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    getline(cin,input);

    int a,inp;
    char b;
    if(input[0] > 'Z'){
        a = input[0] - 97;
        b = 65+a;
        input[0] = b;
        cout << input <<endl;
        return 0;
    }
    cout << input << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main (){
  int n, cnt = 1;
  cin >> n;
  string s;
  while (cnt <= n){
      cin >> s;

      if (isupper (s[2]))
	{
	  s[0] = 'a';
	  s[1] = '1';
	  cout << s << endl;
	}
      else if (islower (s[2]))
	{
	  s[0] = 'A';
	  s[1] = '1';
	  cout << s << endl;
	}
      else if (isdigit (s[2]))
	{
	  s[0] = 'a';
	  s[1] = 'A';
	  cout << s << endl;
	}
	cnt++;
  }
  return 0;
}

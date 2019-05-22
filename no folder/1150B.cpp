/*
 * CF R 556 DIV 2: B.cpp
 * 
 * Created by Mahfuz Ahmed on 29/04/2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int t;
char board[60][60];

void isItOkay(int i, int j) {
   if(i < 0 || j < 0 || i >= t || j >= t || board[i][j] == '#') {
      printf("NO\n");
      exit(0);
   }
   board[i][j] = '#';
}


int main(int argc, char* argv[]){
	
	cin >> t;
	
   for(int i = 0; i < t; i++) {
      scanf("%s", board[i]);
   }

   for(int i = 0; i  < t; i++) {
      for(int j = 0; j < t; j++) {
         if(board[i][j] == '.') {
            isItOkay(i, j);
            isItOkay(i+1, j);
            isItOkay(i+2, j);
            
            isItOkay(i+1, j-1);
            isItOkay(i+1, j+1);
         }
      }
   }
   printf("YES\n");
   
   return 0;
}

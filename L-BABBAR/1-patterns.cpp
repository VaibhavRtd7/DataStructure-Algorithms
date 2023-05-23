#include<bits/stdc++.h>
using namespace std;


int main(){

 /* 
 -------------------------------------------------------------------------------
  Give any input it will print 4X4
     int n;
     int x=1;
     cin >> n;

     int v=sqrt(n);
     for(int i=1; i<=v; i++) {
         for(int i=1; i<=v; i++) {
             cout << x << " ";
             x++;
         }cout << endl;
     }

 */


/*
-------------------------------------------------------------------------------
      print
      *
      **
      ***
      ****

     for(int i=1; i<=4; i++) {
         for(int j=1; j<=i; j++) {
             cout << "*";
         }cout<<endl;
     }

*/



/* Print Characters -> TypeCasting...
-------------------------------------------------------------------------------  
  char ch = 'A'+row-1;

A
BB
CCC
DDDD

A
AB
ABC
ABCD

A
BC
DEF
GHIJ

   for(int i=1; i<=4; i++) {
    for(int j=1; j<=i; j++) {
        char ch = 'A'+j-1;
        cout << ch;
    }cout<<endl;
   }

-------------------------------
   char ch = 'A';
   int k=1;
   for(int i=1; i<=4; i++) {
    for(int j=1; j<=i; j++) {

        cout << ch;
        ch = 'A'+k;
        k++;

    }cout<<endl;
   }


*/





/*
-------------------------------------------------------------------------------
// char start = 'A'+n-row;

D
CD
BCD
ABCD


ABC   //DYS
BCD
CDE

  int n=4;
  int row=1;
  while(row<=n) {
     
     int col=1;
     char start = 'A'+n-row;
     while(col<=row) {
        cout << start;
        start++;
        col++;
     }cout<<endl;
    
    row++;
  }

*/



/*
-------------------------------------------------------------------------------
    *
   **
  ***
 ****
*****


int n=5;

int row=1;
while(row<=n) {
    
    int col=1;
    while(col<=n) {
        if(row+col>5)
          cout << "*";
        else 
          cout << " ";

      col++;
    }cout << endl;

    row++;
}

*/


/*
-------------------------------------------------------------------------------
*****
 ****
  ***
   **
    * 

int n=4;
int row=1;
while(row<=n) {
  
  int space = 1;
  while(space <= row-1) {
    cout << " ";
    space++;
  }
  
  int col=1;
  while(col+row-1<=n) {
    cout << "*";
    col++;
  }cout << endl;

  row++;
}

*/


/*
-------------------------------------------------------------------------------
1111
 222
  33
   4


int n=4;

int row=1;
while(row<=n) {

   int space=1;
   while(space <= row-1) {
    cout << " ";
    space++;
   }
   
   int col=1;
   while(col+row-1 <= n) {
      cout << row;
      col++;
   }cout << endl;

   row++;
}

*/

/*
-------------------------------------------------------------------------------

   1
  22
 333
4444



int n=4;
int row=1;

while(row<=n){

int space=1;
while(space<=n-row) {
  cout << " ";
  space++;
}

int col=1;
while(col<=row) {
  cout << row;
  col++;
}cout << endl;

  row++;
}
*/


/*
-------------------------------------------------------------------------------
_ _ _ 1
_ _ 1 2 1
_ 1 2 3 2 1
1 2 3 4 3 2 1 


int n=4;

int row=1;

while(row<=n) {
  
  int space = n-row;
  while(space) {
    cout <<" ";
    space--;
  }

  int col=1;
  while(col <= row) {
    cout << col;
    col++;
  }


 int start = row-1;
 while(start) {
  cout << start;
  start--;
 }cout << endl;

  row++;
}
*/

  return 0;
}
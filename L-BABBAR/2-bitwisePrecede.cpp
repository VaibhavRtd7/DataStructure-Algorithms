#include<bits/stdc++.h>
using namespace std;


int main(){
    

    /* Bitwise NOR

    int a = 2;
    cout << " a~ = " << ~a << endl;   // ~a = -3
    
        2 ->  00000000  00000000 00000000 00000010
         a = 0000....0010
        ~a = 11111...1101   { negative number}

        1's complement  =  0000....0010
                                    + 1
                        ----------------------
        2's complement =   0000.....0011   ( 3 )

        ~a = -3
    */


   /* Bitwise XOR 

    a=2    010
    b=4    100   do XOR
         --------
           110  (6)

    a=5   101
    b=7   111
        ---------
          010 (2) 
      

  int a = 5;
  int b = 7;
  int c = a^b;

  cout << " a^b = " << c << endl;

   */


  /*
  int a = 4;
  int b = 6;

  cout <<  "a&b = " << (a&b) << endl;
  cout <<  "a|b = " << (a|b) << endl;
  cout <<  "~a = " << ~a << endl;
  cout <<  "a^b = " << (a^b) << endl;

  */

 /* left shift and right shift
    17>>1  -> 8    (17/2)
    17>>2  -> 4    ( (17/2) / 2)


int a=5;
int b=2;

cout << "5<<2 = " <<  (a<<2) << endl;  // 20 mutliplication
cout << "5>>2 = " <<  (a>>2) << endl;  // 1 division

 */

/*
   int a, b=1;
   a=10;


   if(--b)
     cout << b;
   else 
     cout << ++b;

*/

int a=1;
int b=2;

if(a-- > 0 ||  ++b > 2)
 cout << "Stage 1" << endl;
else 
 cout << "Stage 2" << endl;

 cout << a << " " << b << endl;

//  stage 1 , 0 3   -> &&
//  stage 1 , 0 2   -> ||

    return 0;
}
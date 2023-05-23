#include<bits/stdc++.h>
using namespace std;


int main(){

    /*
      Continue is not valid in Switch Case.
    */
    
    /*
    
    int num = 2;
    switch(num) {

        case 1 : cout << "This is 1" << endl;
        break;

        case 2: cout << "This is 2" << endl;
        // break;

        case 3: cout << "This is 3" << endl;
        break;

        case 5: cout << "This is 5" << endl;
        break;

        
        default : cout << "This is default" << endl;

    }
    */


  
  /* 
   int a, b;
   char ch;
   
   cout << "Enter tha value of a : " ;
   cin >> a;

   cout << "Enter tha value of b : " ;
   cin >> b;

   cout << "Enter tha any Operator : " ;
   cin >> ch;

   switch(ch) {

    case '+' : cout << "a+b = " << a+b << endl;
    break; 

    case '-' : cout << "a-b = " << a-b << endl;
    break; 

    case '*' : cout << "a*b = " << a*b << endl;
    break; 

    case '/' : cout << "a/b = " << a/b << endl;
    break; 

   }

  */


  int n = 128;
  int Rs100, Rs50, Rs20, Rs5, Rs1;
   
        
        switch(1){

          case 1 : Rs100 = n/100;
                   n = n%100;
                   cout << "100 Rupees note : " << Rs100 << endl;
                   
          case 2 : Rs50 = n/50;
                   n = n%50;
                   cout << "50 Rupees note : " << Rs50 << endl;

          case 3 : Rs20 = n/20;
                   n = n%20;
                   cout << "20 Rupees note : " << Rs20 << endl;

          case 4 : Rs5 = n/5;
                   n = n%5;
                   cout << "5 Rupees note : " << Rs5 << endl;

          case 5 : Rs1 = n/1;
                   n = n%1;
                   cout << "1 Rupees note : " << Rs1 << endl;

          default : cout << "This is Default Case" << endl;

        }
   



 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main(){
  
/* Reverse Number-------

    int n = 2435;
    int ans=0;
    while(n != 0) {
       int digit=n%10;
       n/=10;

       ans=ans*10 + digit;  
    }

    cout << " Answer = " << ans << endl;

  */  



/*

decimal To binary

 int n=7;
 int ans=0,i=0;
 while(n != 0) { 
    int bit = n&1;
    ans = bit*pow(10,i) + ans;

    n = n >> 1;
    i++;
 }
 cout << "Answer = " << ans << endl;

*/

/*
binary to Decimal 

int n=1101;

int sum=0, digit=0,i=0;

 while(n!=0) {
   digit=n%10;
   
   if(digit)
     sum+=pow(2,i);

   i++;
   n/=10;
 }

 cout << " SUM = " << sum << endl;

*/

  int n=5;      
  int ans=0, i=0;
        while(n!=0) {
            
            int bit=n&1;
            ans=bit*pow(10,i) + ans;
            
            i++;
            n = n >> 1;
        }
        cout << "Ans = " << ans << endl;
        
        int n1=ans;
        int ans1=0;
         i=0;
        while(n1 != 0){
            int digit=n1%10;
            
            if(digit)
               ans = digit*pow(10,i) + ans;
            
            n1 /= 10;
            i++;
        }

    return 0;
}
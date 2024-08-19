#include<bits/stdc++.h>
using namespace std;


void fibonacci(int n) {
    
    int f[n+2];
    f[0] = 0;
    f[1] = 1;
    
    if(n==1) {
        cout << "0";
        return;
    }
    
    if(n==2) {
        cout << "0 1";
        return;
    }
    
    cout << f[0] << " " << f[1] << " ";
    for(int i=2; i<n; i++) {
        f[i] = f[i-1] + f[i-2];
        cout << f[i] << " ";
    }
}
 
int main()
{   
    
    int num=5;
    
    cout <<  "First " << num << " fibonacci number : " <<  endl;
    fibonacci(num);
    
    return 0;
}

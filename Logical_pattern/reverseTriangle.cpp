// *********
//  ******* 
//   *****  
//    ***   
//     *    

#include <iostream>
using namespace std;

int main() {
    
    int n=5;
    for(int i=0; i<n; i++) {
        
        // For Space
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        
        // For Star
        for(int j=0; j< (2*n)-(2*i+1); j++) {
            cout<<"*";
        }
        
        // For Space
        for(int j=0; j<i; j++) {
            cout<<" ";
        }cout<<endl;
    }
    
    return 0;
}

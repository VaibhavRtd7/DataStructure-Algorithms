// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str) {
    
    int len = str.length();
    
    for(int i=0; i<len/2; i++) {
        
        if(str[i] == str[len-i-1]) {
            continue;
        } 
        else {
            // Not a palindrome.
            return false;
        }
        
    }
  // It's a palindrome.
  return true;
}

int main()
{   
    // if require then use uppercase and lowercase.
    string str = "WOAAOW";
    if (checkPalindrome(str) == 1) {
        cout << "Yes, It's palindrome string \n";
    }
    else {
        cout << "Not a palindrome string \n";
    }
    return 0;
}

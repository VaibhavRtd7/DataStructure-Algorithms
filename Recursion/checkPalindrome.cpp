// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int isPalindrome(string str, int start, int end) {
    
    if(start > end) {
        return 1;
    }
    
    if(str[start] != str[end]) {
        return 0;
    }
    
    return isPalindrome(str, start+1, end-1);
}


int main() {
    
    string str = "pakkapd";
    int len = str.length();
    
    if(isPalindrome(str, 0, len-1)) {
        cout << "It's palindrome." << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }
   

    return 0;
}

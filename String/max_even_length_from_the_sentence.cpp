#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    // 1. max even length string from the sentnece.

    string sentence = "This is sentence and  very beautiful okay";
    // Output :-  sentence 
    
    int evenMaxLen=0;
    int len=sentence.length();
    map<string, pair<int, int>>mp;
    string ans;
    int i=0;
    while(i<len) {
        
        int start=i;
        while(sentence[i] != ' ' && i<len) {
            i++;
        }
        int end=i;
        
        // cout << start << ", " << end << " :- " << sentence.substr(start, end-start) << endl;
        int stringLen=end-start;
        mp[sentence.substr(start, stringLen)] = make_pair(start, end);

        i++;
    } cout << endl;
    
    for(auto it : mp) {

        
        int start = it.second.first;
        int end = it.second.second;
        
        int wordLen=end-start;
        if(wordLen % 2 == 0) {
            
            if(wordLen >= evenMaxLen) {
               evenMaxLen=max(evenMaxLen, wordLen);
               ans = sentence.substr(start, end-start);
               // cout << ans << endl;
                
            }
           
        }
        
        
    }

    cout << ans << endl; 
     
    return 0;
}

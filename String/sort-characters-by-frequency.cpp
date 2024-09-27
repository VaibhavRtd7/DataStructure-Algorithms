// #include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

  // sort(vec.begin(), vec.end(), greater< pair<int, char>>());

int main()
{       
        string s="ccdddEEEEb";
        map<char, int> mp;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
    
        vector< pair<int, char>> vec;
        for(auto &it : mp) {
            vec.push_back({it.second, it.first});
        }
    
        sort(vec.begin(), vec.end(), greater< pair<int, char>>());
        
        string ans="";
        for(auto &it : vec) {

            while(it.first--) {
                ans += it.second;
            }
        }
        
        cout << ans << endl;
        
    return 0;
}

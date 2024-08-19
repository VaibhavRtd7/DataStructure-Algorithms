#include <algorithm>
#include <iostream>
using namespace std;

bool areAnagrams(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main()
{
    string str1 = "listen";
    string str2 = "silent";

    cout  << str1 << ", " << str2 << " : Is Anagram?  :- ";
    if (areAnagrams(str1, str2)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}

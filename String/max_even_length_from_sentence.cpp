#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence = "This is sentence and very beautiful okay";

    int evenMaxLen = 0;
    string maxEvenWord;

    // Using a stringstream to split words easily
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        int wordLen = word.length();

        // Check if the length is even and update if it's the largest so far
        if (wordLen % 2 == 0 && wordLen > evenMaxLen) {
            evenMaxLen = wordLen;
            maxEvenWord = word;
        }
    }

    cout << "Longest even-length word: " << maxEvenWord << endl;

    return 0;
}

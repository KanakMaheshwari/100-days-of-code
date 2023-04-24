/*
Akhil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.

Input Format

String in a single line
Constraints

0 <= N <= 10^6
Where N is the length of the input string.
Time Limit: 1 second
Output Format

Word wise reversed string in a single line
Sample Input 0

Welcome to Face Prep
Sample Output 0

emocleW ot ecaF perP
Sample Input 1

Always indent your code
Sample Output 1

syawlA tnedni ruoy edoc
*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void reverseWords(string sentence) {
    stringstream ss(sentence); 
    string word;
    while (ss >> word) { 
        for (int i = word.length() - 1; i >= 0; i--) {
            cout << word[i]; 
        }
        cout << " "; 
    }
}

int main() {
    string sentence;
    getline(cin, sentence); 
    reverseWords(sentence);
    return 0;
}

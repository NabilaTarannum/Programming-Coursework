#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

/* void reverseSentence(string &sentence) {
    Stack<char> stack;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            while (!stack.isEmpty()) {
                cout << stack.pop();
            }
            cout << " ";
        } else {
            stack.push(sentence[i]);
        }
    }
    while (!stack.isEmpty()) {
        cout << stack.pop();
    }
    cout << endl;
} */

void reverseSentence(string sentence)
{
    Stack <string> st;
    for (int i = 0; i < sentence.length(); i++) {
        string word = "";
        while (i < sentence.length() && sentence[i] != ' ') {
            word += sentence[i];
            i++;
        }
        st.push(word);
        // cout << sentence[i] << " ";
    }
    while (!st.isEmpty()) {
        cout << st.Top() << " ";
        st.pop();
    }
}

int main()
{
    string s = "I am a string";
    reverseSentence(s);
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    string word;
    int x;
    cin >> x;

    for (int i = 0; i < x; i++) {
        cin >> word;
        if (word.size() <= 10) cout << word << endl;
        else {
            cout << word[0] << (word.size() - 2) << word[word.size() - 1] << endl;
        }
    }
    return 0;
}

//https://codeforces.com/contest/71/problem/A
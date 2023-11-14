#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define db double
#define str string
#define vi vector<int>
#define pb push_back



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;
    for(int i = 0; i < word.length(); i++){
        word[i] = tolower(word[i]);
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y'){
            word.erase(i, 1);
            i--;
        }
    }
    for(int j = 0; j < word.length(); j++){
        cout << "." << word[j];
    }


    return 0;
}

//https://codeforces.com/problemset/problem/118/A
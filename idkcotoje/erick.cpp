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
        if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'y' && word[i] != 'u'){
            word.insert(i, 1, word[i]);
            i++;
        }
    }
    cout << word << endl;

    return 0;
}
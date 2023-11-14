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
    int pocitadlo = 0;
    for (int i = 0; i < word.length(); i++){
        if(word[i] == 'n' && word[i+1] == 'e'){
            pocitadlo++;
        }
        if (word[i] != 'n' && word[i] != 'e'){
            break;
        }
    }
    if (pocitadlo % 2 == 0){
        cout << "ano" << endl;
    } else{
        cout << "nie" << endl;
    }

    return 0;
}
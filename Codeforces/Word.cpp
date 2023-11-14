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
    int upper = 0, lower = 0;

    for(int i = 0; i < word.length(); i++){
        if(word[i] > 96){
            lower++;
        }else{
            upper++;
        }
    }
    if(lower < upper){
        for(int j = 0; j < word.length(); j++){
            word[j] = toupper(word[j]);
        }
    } else{
        for(int k = 0; k < word.length(); k++){
            word[k] = tolower(word[k]);
        }
    }

    cout << word;

    return 0;
}

//https://codeforces.com/problemset/problem/59/A
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

    int n;
    cin >> n;
    string games;
    cin >> games;
    sort(games.begin(), games.end());

    if(n % 2 != 0){
        if(games[n / 2] == 'A'){
            cout << "Anton";
        } else{
            cout << "Danik";
        }
    } else{
        if(games[n / 2 - 1] == 'A' && games[n / 2] == 'A'){
            cout << "Anton";
        } else if(games[n / 2 - 1] == 'D' && games[n / 2] == 'D'){
            cout << "Danik";
        } else{
            cout << "Friendship";
        }
    }


    return 0;
}

//https://codeforces.com/problemset/problem/734/A
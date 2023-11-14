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

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1){
            cout << "hard";
            return 0;
        }
    }
    cout << "easy";

    return 0;
}

//https://codeforces.com/problemset/problem/1030/A
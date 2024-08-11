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
    vector<char> V;
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        if (x >= 'A' && x <= 'Z') {
            x = x + 32;
        }
        V.pb(x);
    }
    sort(V.begin(), V.end());
    V.erase(unique(V.begin(), V.end()), V.end());

    if (V[0] == 'a' && V[V.size() - 1] == 'z' && V.size() >= 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}

// https://codeforces.com/problemset/problem/520/A
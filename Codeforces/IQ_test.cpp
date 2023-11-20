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
    int counterA = 0, counterB = 0;
    vi V, C;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            V.pb(i);
        } else {
            C.pb(i);
        }
    }
    if (C.size() == 1) {
        cout << C[0];
    } else {
        cout << V[0];
    }

    return 0;
}

//https://codeforces.com/problemset/problem/25/A
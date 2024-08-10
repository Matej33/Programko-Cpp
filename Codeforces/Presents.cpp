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
    vi p(n);
    vi givers(n);

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    for (int i = 0; i < n; ++i) {
        givers[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << givers[i] << " ";
    }

    return 0;
}

// https://codeforces.com/problemset/problem/136/A
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

    int i, y;
    cin >> i;
    vi v;
    for (int j = 0; j < i; j++) {
        cin >> y;
        v.pb(y);
    }
    sort(v.begin(), v.end());

    for (int j = 0; j < i; j++) {
        cout << v[j] << " ";
    }

    return 0;
}

// https://codeforces.com/problemset/problem/405/A
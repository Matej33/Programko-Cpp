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

    int n, p, q;
    cin >> n;
    cin >> p;
    vi V;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        V.pb(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        V.pb(x);
    }
    sort(V.begin(), V.end());
    V.erase(unique(V.begin(), V.end()), V.end());
    if (V.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!";
    }


    return 0;
}

// https://codeforces.com/problemset/problem/469/A
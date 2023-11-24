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

    ll n, x, y, max;
    cin >> n >> x;
    vi V;
    for (ll i = 0; i < n; i++) {
        cin >> y;
        V.pb(y);
    }
    for (ll j = 0; j < (n - x + 1); j++) {
        ll a = V[j], b = V[j + 1], c = V[j + 2];
        if (a >= b && a >= c) {
            max = a;
        } else if (b >= a && b >= c) {
            max = b;
        } else {
            max = c;
        }
        if (j == n - x) {
            cout << max << endl;

        } else {
            cout << max << " ";
        }
    }
    return 0;
}

// https://zenit.ksp.sk/task/zenit23kke
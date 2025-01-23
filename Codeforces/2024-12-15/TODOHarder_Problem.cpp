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
    vi V, W;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        V.clear();
        W.clear();

        for (int j = 0; j < x; j++) {
            int y;
            cin >> y;
            V.pb(y);
        }

        for (int j = 0; j < V.size(); j++) {
            if (find(W.begin(), W.end(), V[j]) == W.end() && V[j] > 0 && V[j] < 10) {
                W.pb(V[j]);
            }
        }

        for (int k = 1; W.size() < V.size(); k++) {
            //if (k == 10) break;
            if (find(W.begin(), W.end(), k) == W.end()) {
                W.pb(k);
            }
        }

        for (int j = 0; j < W.size(); j++) {
            cout << W[j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2044/problem/D
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

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vi V;
        for (int j = 0; j < n * 2; j++) {
            int input;
            cin >> input;
            V.push_back(input);
        }
        sort(V.begin(), V.end());
        int counter = 0;
        for (int k = 0; k < n - 1; k++) {
            counter += abs(V[k] - V[k + 1]);
            counter += abs(V[k + n] - V[k + n + 1]);
        }
        cout << counter << endl;
        for (int l = 0; l < n; l++) {
            cout << V[l + n] << " " << V[l] << endl;
        }
        V.clear();
    }

    return 0;
}

//https://codeforces.com/contest/1895/problem/B
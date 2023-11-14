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

    int n, v = 0;
    cin >> n;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y;
        if (x % y != 0) {
            z = x % y;
            v = y-z;
        }
        cout << v << endl;
        v = 0;
    }

    return 0;
}

//https://codeforces.com/contest/1328/problem/A
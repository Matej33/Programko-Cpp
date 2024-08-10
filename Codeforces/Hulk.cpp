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
    string x, y;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            x = "love";
        } else {
            x = "hate";
        }
        if (i != n - 1) {
            y = "that";
        } else {
            y = "it";
        }
        cout << "I " << x << " " << y << " ";
    }


    return 0;
}

// https://codeforces.com/problemset/problem/705/A

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
    int min = 100000, max = 0, minIndex = 0, maxIndex = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
            maxIndex = i;
        }
        if (x <= min) {
            min = x;
            minIndex = i;
        }
    }
    if (max == min) {
        cout << 0 << endl;
        return 0;
    }
    if (maxIndex > minIndex) {
        cout << maxIndex + (n - 1 - minIndex) - 1 << endl;
    } else {
        cout << maxIndex + (n - 1 - minIndex) << endl;
    }


    return 0;
}

// https://codeforces.com/problemset/problem/144/A
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
    int me = 0;
    int counter = 0;
    int chest = 0;
    for (int i = 0; i < t; i++) {
        int x, y, k;
        cin >> x >> y >> k;
        if (y <= x) {
            cout << x << endl;
            counter = 0;
            me = 0;
            chest = 0;
            continue;
        }
        while (me < x) {
            counter++;
            me++;
        }
        while (chest < k && me < y) {
            chest++;
            me++;
            counter++;
            x++;
        }
        if (me == y) {
            cout << counter << endl;
            counter = 0;
            me = 0;
            chest = 0;
            continue;
        }
        while (me < y) {
            me++;
            counter++;
        }
        while (me > x) {
            me--;
            counter++;
        }
        cout << counter << endl;
        counter = 0;
        me = 0;
        chest = 0;
    }

    return 0;
}

//https://codeforces.com/contest/1895/problem/A
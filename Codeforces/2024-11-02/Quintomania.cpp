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

    int n, k, m, previous, counter;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        previous = 0;
        counter = 0;
        bool first_note = true;
        for (int j = 0; j < k; j++) {
            cin >> m;
            if (!first_note) {
                if (abs(m - previous) == 5 || abs(m - previous) == 7) {
                    counter++;
                }
            } else {
                first_note = false;
            }
            previous = m;
        }
        if (k - 1 == counter) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
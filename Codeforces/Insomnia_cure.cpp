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


    int counter = 0;
    vi dragons(4);
    for (int i = 0; i < 4; i++) {
        cin >> dragons[i];
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 4; j++) {
            if (i % dragons[j] == 0) {
                counter++;
                break;
            }
        }
    }

    cout << counter << endl;

    return 0;
}

// https://codeforces.com/problemset/problem/148/A
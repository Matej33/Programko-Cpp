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

    int x = 0, y = 1, z, n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cout << x << " ";
        z = y + x;
        x = y;
        y = z;
    }

    return 0;
}
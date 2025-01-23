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

    int n, a, b, c, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> a >> b >> c;
        int m1 = m, m2 = m, counter = 0;
        if (m1 - a > 0){
            m1 = m1 - a;
            counter += a;
        } else {
            counter += m1;
            m1 = 0;
        }
        if(m2 - b > 0){
            m2 = m2 - b;
            counter += b;
        } else {
            counter += m2;
            m2 = 0;
        }
        m = m1 + m2;
        if(m - c > 0){
            counter += c;
        } else {
            counter += m;
        }
        cout << counter << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2044/problem/C
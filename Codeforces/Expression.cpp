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

    int a, b, c;
    cin >> a >> b >> c;
    vi ans;
    ans.pb(a + b + c);
    ans.pb(a * b * c);
    ans.pb(a + b * c);
    ans.pb(a * b + c);
    ans.pb(a * (b + c));
    ans.pb((a + b) * c);

    sort(ans.begin(), ans.end());
    cout << ans[5];

    return 0;
}

//https://codeforces.com/problemset/problem/479/A
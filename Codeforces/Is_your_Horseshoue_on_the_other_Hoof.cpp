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

    vi shoes;
    ll a;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        shoes.pb(a);
    }
    sort(shoes.begin(), shoes.end());
    shoes.erase(unique(shoes.begin(), shoes.end()), shoes.end());
    cout << 4 - shoes.size() << endl;

    return 0;
}

// https://codeforces.com/contest/228/problem/A
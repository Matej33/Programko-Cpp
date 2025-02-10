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
    ll count = 0;
    cin >> n;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        count += s[i] - '0';
    }
    cout << count << endl;

    return 0;
}
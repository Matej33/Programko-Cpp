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
    string color;
    cin >> color;

    color.erase(unique(color.begin(), color.end()), color.end());

    cout << (n - color.length());

    return 0;
}

//https://codeforces.com/problemset/problem/266/A
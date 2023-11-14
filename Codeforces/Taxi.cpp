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
    int one = 0, two = 0, three = 0, four = 0;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k == 4) { four++; }
        else if (k == 3) { three++; }
        else if (k == 2) { two++; }
        else if (k == 1) { one++; }
    }

    int counter = 0;
    counter += four;
    four -= four;

    while (one > 0 && three > 0) {
        counter++;
        one--;
        three--;
    }
    counter += three;
    while (two > 1) {
        counter++;
        two -= 2;
    }
    if (two == 1 && one > 1) {
        counter++;
        two--;
        one -= 2;
    } else if (two == 1 && one == 1) {
        counter++;
        two--;
        one--;
    } else if (two == 1) {
        counter++;
        two--;
    }
    while (one > 0) {
        counter++;
        one -= 4;
    }

    cout << counter;

    return 0;
}

//https://codeforces.com/problemset/problem/158/B
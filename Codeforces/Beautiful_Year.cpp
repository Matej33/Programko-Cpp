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

    string year;
    cin >> year;

    do {
        if (year[0] == year[1]) {
            year[1]++;
            year[2] = '0';
            year[3] = '0';
        } else if (year[0] == year[2] || year[1] == year[2]) {
            if (year[2] == 57) {
                year[0]++;
                year[1] = '0';
                year[2] = '0';
                year[3] = '0';
            } else {
                year[2]++;
                year[3] = '0';
            }
        } else {
            if (year[3] == 57) {
                year[2]++;
                year[3] = '0';
            } else {
                year[3]++;
            }

        }
    }
    while (year[0] == year[1] ||
             year[0] == year[2] ||
             year[0] == year[3] ||
             year[1] == year[2] ||
             year[1] == year[3] ||
             year[2] == year[3]);

    cout << year;

    return 0;
}

//https://codeforces.com/problemset/problem/271/A
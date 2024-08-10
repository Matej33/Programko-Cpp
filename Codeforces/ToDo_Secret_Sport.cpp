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
    for (int i = 0; i < n; i++) {
        int counterA = 0, counterB = 0;
        int x;
        string s;
        cin >> x >> s;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'A') {
                counterA++;
            } else {
                counterB++;
            }
        }
        if (counterA > counterB) {
            cout << "A" << endl;
        } else if (counterA < counterB) {
            cout << "B" << endl;
        } else {
            cout << "?" << endl;
        }
    }

    return 0;
}

//https://codeforces.com/contest/1894/problem/A

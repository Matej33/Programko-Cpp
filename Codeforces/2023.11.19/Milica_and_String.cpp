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

    int x = 0;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int j = 0, l = 0;
        int n = 0, k = 0;
        string s;
        int counterA = 0, counterB = 0;
        int pocitadloA = 0, pocitadloB = 0;
        cin >> n >> k >> s;

        for (int h = 0; h < s.length(); h++) {
            if (s[h] == 'B') {
                counterB++;
            }
        }

        if (counterB == k) {
            cout << "0" << endl;
            continue;
        }
        if (k > counterB) {
            while (k > counterB) {
                if (s[j] == 'A') {
                    counterB++;
                }
                pocitadloA++;
                if (counterB == k) {
                    continue;
                }
                j++;
            }
            cout << "1" << endl << pocitadloA << " B" << endl;
        }
        else {
            while (counterB > k) {
                if (s[l] == 'B') {
                    counterB--;
                }
                pocitadloB++;
                if (counterB == k) {
                    continue;
                }
                l++;
            }
            cout << "1" << endl << pocitadloB << " A" << endl;
        }
    }


    return 0;
}

//https://codeforces.com/problemset/problem/1898/A
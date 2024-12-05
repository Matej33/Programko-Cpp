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
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s[1] == '=') {
            if (s[0] == s[2]) {
                cout << s << endl;
            } else if (s[0] < s[2]) {
                s[1] = '<';
                cout << s << endl;
            } else {
                s[1] = '>';
                cout << s << endl;
            }
        } else if (s[1] == '<') {
            if (s[0] < s[2]) {
                cout << s << endl;
            } else if (s[0] == s[2]) {
                s[1] = '=';
                cout << s << endl;
            } else {
                s[1] = '>';
                cout << s << endl;
            }
        } else {
            if (s[0] > s[2]) {
                cout << s << endl;
            } else if (s[0] < s[2]) {
                s[1] = '<';
                cout << s << endl;
            } else {
                s[1] = '=';
                cout << s << endl;
            }
        }
    }


    return 0;
}
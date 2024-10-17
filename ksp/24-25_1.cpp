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

    ll x = 1, y;
    int minus, through, through1, through2, sum = 0;
    string num;
    cin >> num;

    for (int j = 0; j < num.length(); j++) {
        y = num[j] - '0';
        minus = abs(y - x);
        through1 = abs(10 + x - y);
        through2 = abs(10 - x + y);
        x = y;
        if (through1 < through2) { through = through1; }
        else { through = through2; }
        if (minus > through) {
            sum += through;
            sum++;
        } else {
            sum += minus;
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}

//TODO - popis vypracovania
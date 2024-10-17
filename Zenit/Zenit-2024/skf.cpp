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
    db num;
    if (n == 1) {
        cout << "5" << endl;
    }
    else {
        if (n % 2 == 0) {
            n = n / 2;
            n = n - 1;
            num = pow(7, n) * 6;
            cout << num << endl;
        } else {
            --n;
            n = n / 2;
            n = n - 1;
            num = pow(7, n) * 30;
            cout << num << endl;
        }
    }

    return 0;
}
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
        for (int k = 0; k < n - i; k++) {
            cout << " ";
        }
        for (int k = 0; k < ((i + 1) * 2) - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
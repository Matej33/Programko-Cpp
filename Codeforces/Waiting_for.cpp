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
    int b;
    char a;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == 'P') {
            counter += b;
        } else {
            counter = counter - b;
            if (counter < 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            if (counter < 0) {
                counter = 0;
            }
        }
    }


    return 0;
}
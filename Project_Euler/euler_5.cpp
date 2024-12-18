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

    int x = 2520;
    while (true) {
        if (x % 2 == 0 && x % 3 == 0 && x % 4 == 0 && x % 5 == 0 && x % 6 == 0 && x % 7 == 0 && x % 8 == 0 &&
            x % 9 == 0 && x % 10 == 0 && x % 11 == 0 && x % 12 == 0 && x % 13 == 0 && x % 14 == 0 && x % 15 == 0 &&
            x % 16 == 0 && x % 17 == 0 && x % 18 == 0 && x % 19 == 0 && x % 20 == 0) {
            break;
        }
        x++;
    }

    cout << x << endl;

    return 0;
}
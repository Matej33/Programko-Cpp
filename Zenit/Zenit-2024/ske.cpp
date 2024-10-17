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

// TODO - nefunguje lol

    int x;
    cin >> x;
    int n;

    int validNumbers[] = {5, 7, 10, 12, 14, 15, 17,18,19,20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    for (int i = 0; i < x; i++) {
        cin >> n;
        bool found = false;
        for (int j = 0; j < 20; ++j) {
            if (validNumbers[i] == x) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "ANO" << endl;
        } else {
            cout << "NIE" << endl;
        }
    }


    return 0;
}
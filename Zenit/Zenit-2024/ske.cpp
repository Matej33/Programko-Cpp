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

    int x;
    cin >> x;
    int n;

    for (int i = 0; i < x; i++) {
        cin >> n;
        if (n == 0 || n == 1 || n == 2 || n == 3 || n == 4 || n == 6 || n == 8 || n == 9 || n == 11 || n == 16){
            cout << "NIE" << endl;
        } else {
            cout << "ANO" << endl;
        }
    }


    return 0;
}
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

    int pole[5][5];
    int suradnicaX, suradnicaY;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> pole[i][j];
            if (pole[i][j] == 1) {
                suradnicaX = j;
                suradnicaY = i;
            }
        }
    }
    int counter = 0;
    for (; suradnicaX != 2 || suradnicaY != 2;) {
        if (suradnicaY < 2) {
            suradnicaY++;
            counter++;
        } else if (suradnicaY > 2) {
            suradnicaY--;
            counter++;
        }
        if (suradnicaX < 2) {
            suradnicaX++;
            counter++;
        } else if (suradnicaX > 2) {
            suradnicaX--;
            counter++;
        }
    }
    cout << counter;

    return 0;
}

//https://codeforces.com/problemset/problem/263/A
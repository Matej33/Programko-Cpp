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
    int** array = new int*[n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[n];
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            cin >> array[j][i];
        }
    }

    bool isSame = true;

    for (int start = 0; start < n; start++) {
        int value = array[0][start];
        for (int i = 0, j = start; j < n; i++, j++) {
            if (array[i][j] != value) {
                isSame = false;
                break;
            }
        }
        if (!isSame) break;
    }

    if (isSame) {
        for (int start = 1; start < n; start++) {
            int value = array[start][0];
            for (int i = start, j = 0; i < n; i++, j++) {
                if (array[i][j] != value) {
                    isSame = false;
                    break;
                }
            }
            if (!isSame) break;
        }
    }

    if (isSame) {
        cout << "dokonale diagonalne" << endl;
    } else {
        cout << "kopa smetia" << endl;
    }

    for (int i = 0; i < n; ++i) {
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
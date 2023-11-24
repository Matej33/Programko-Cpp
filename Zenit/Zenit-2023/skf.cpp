#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isInside(int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

bool checkZENIT(vector<string>& grid, int x, int y, int n) {
    string target = "ZENIT";
    int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int dy[] = {-1, -1, -1, 0, 1, 1, 1, 0};

    for (int i = 0; i < 8; i++) {
        int nx = x;
        int ny = y;
        bool found = true;

        for (int j = 0; j < 5; j++) {
            if (!isInside(nx, ny, n) || grid[nx][ny] != target[j]) {
                found = false;
                break;
            }
            nx += dx[i];
            ny += dy[i];
        }

        if (found) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    bool foundZENIT = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'Z' && checkZENIT(grid, i, j, n)) {
                foundZENIT = true;
                break;
            }
        }
        if (foundZENIT) {
            break;
        }
    }

    if (foundZENIT) {
        cout << "OK" << endl;
    } else {
        cout << "WA" << endl;
    }

    return 0;
}

// https://zenit.ksp.sk/task/zenit23skf
#include <iostream>

using namespace std;

int main() {
    char sach1[8][8];
    char sach2[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> sach1[i][j];
        }
    }
    cin.ignore();
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> sach2[i][j];
        }
    }
    char chyba[8][8] = {};
    bool veta = false;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (sach1[i][j] != sach2[i][j]) {
                chyba[i][j] = '1';
                veta = true;
            }
        }
    }
    if (!veta) {
        cout << "Hry su rovnake" << endl;
        return 0;
    }
    cout << "Hry su rozdielne" << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (chyba[i][j] == '1') {
                cout << j << "," << i << endl;
            }
        }
    }

    return 0;
}
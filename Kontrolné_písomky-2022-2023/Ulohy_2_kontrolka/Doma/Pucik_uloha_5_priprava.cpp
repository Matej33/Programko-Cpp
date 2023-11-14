#include <iostream>

using namespace std;

int main() {
    char array[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (array[i][j] == 'O') {
                if (array[i - 1][j - 1] == 'X' && array[i - 2][j - 2] == '.' && i - 2 >= 0 && j - 2 >= 0 && i - 2 < 8 && j - 2 < 8){
                    cout << j << " " << i << endl;
                }
                if (array[i - 1][j + 1] == 'X' && array[i - 2][j + 2] == '.' && i - 2 >= 0 && j + 2 >= 0 && j + 2 < 8 && i - 2 < 8){
                    cout << j << " " << i << endl;
                }
            }
        }
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    char **array = new char *[x];
    for (int i = 0; i < x; i++) {
        array[i] = new char[y];
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> array[i][j];
        }
    }

    cout << "Rows: " << endl;
    int counter = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (array[i][j] == 'x') {
                counter++;
                if (array[i][j + 1] != 'x') {
                    cout << counter << ",";
                    counter = 0;
                }
            }
        }
        cout << endl;
    }

    cout << "Collums: " << endl;
    for (int j = 0; j < y; j++) {
        for (int i = 0; i < x; i++) {
            if (array[i][j] == 'x') {
                counter++;
                if (array[i + 1][j] != 'x') {
                    cout << counter << ",";
                    counter = 0;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
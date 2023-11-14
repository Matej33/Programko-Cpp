#include <iostream>

using namespace std;

struct Hrac {
    int x;
    int y;
};

void Labyrint(char **pole, const Hrac &pozicia, const int &vyska, const int &sirka) {

    if (pozicia.x == 0 && pozicia.y == 0) {
        if (pole[pozicia.x + 1][pozicia.y] == '.') {
            cout << "Bottom" << endl;
        }
        if (pole[pozicia.x][pozicia.y + 1] == '.') {
            cout << "Right" << endl;
        }
        return;
    }

    if (pozicia.x == 0 && pozicia.y == sirka - 1) {
        if (pole[pozicia.x + 1][pozicia.y] == '.') {
            cout << "Bottom" << endl;
        }
        if (pole[pozicia.x][pozicia.y - 1] == '.') {
            cout << "Left" << endl;
        }
        return;
    }

    if (pozicia.x == vyska - 1 && pozicia.y == 0) {
        if (pole[pozicia.x - 1][pozicia.y] == '.') {
            cout << "Top" << endl;
        }
        if (pole[pozicia.x][pozicia.y + 1] == '.') {
            cout << "Right" << endl;
        }
        return;
    }

    if (pozicia.x == vyska - 1 && pozicia.y == sirka - 1) {
        if (pole[pozicia.x - 1][pozicia.y] == '.') {
            cout << "Top" << endl;
        }
        if (pole[pozicia.x][pozicia.y - 1] == '.') {
            cout << "Left" << endl;
        }
        return;
    }

    if (pole[pozicia.x - 1][pozicia.y] == '.') {
        cout << "Top" << endl;
    }
    if (pole[pozicia.x + 1][pozicia.y] == '.') {
        cout << "Bottom" << endl;
    }
    if (pole[pozicia.x][pozicia.y - 1] == '.') {
        cout << "Left" << endl;
    }
    if (pole[pozicia.x][pozicia.y + 1] == '.') {
        cout << "Right" << endl;
    }
}

int main() {
    int vyska, sirka;
    cin >> vyska >> sirka;
    char **pole = new char *[vyska];
    for (int i = 0; i < vyska; i++) {
        pole[i] = new char[sirka];
    }

    for (int i = 0; i < vyska; i++) {
        for (int j = 0; j < sirka; j++) {
            cin >> pole[i][j];
        }
    }
    Hrac pozicia;
    cin >> pozicia.x >> pozicia.y;

    Labyrint(pole, pozicia, vyska, sirka);

    delete[] *pole;

    return 0;
}
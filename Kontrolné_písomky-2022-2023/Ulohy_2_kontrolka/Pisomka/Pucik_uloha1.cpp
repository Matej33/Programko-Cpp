#include <iostream>

using namespace std;

struct Tovar {
    string jedlo;
    int cena;
};

int main() {
    int n = 0;
    cin >> n;
    Tovar *pole = new Tovar[n]{};
    for (int i = 0; i < n; i++) {
        cin >> pole[i].jedlo >> pole[i].cena;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (pole[i + j].jedlo == pole[i].jedlo) {
                if (pole[i + j].cena < pole[i].cena) {
                    pole[i].jedlo = "";
                }
                if (pole[i].cena < pole[i + j].cena) {
                    pole[i + j].jedlo = "";
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (pole[i].jedlo != "") {
            cout << pole[i].jedlo << " " << pole[i].cena << endl;
        }
    }

    return 0;
}
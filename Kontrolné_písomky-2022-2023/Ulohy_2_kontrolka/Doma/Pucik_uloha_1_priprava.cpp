#include <iostream>

using namespace std;

struct Osoba {
    string cislo;
    string meno;
};

int main() {
    int n, m;
    string meno_vstup;
    cin >> n;
    Osoba *pole = new Osoba[n];
    for (int i = 0; i < n; i++) {
        cin >> pole[i].cislo >> pole[i].meno;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> meno_vstup;
        for (int j = 0; j < n; j++) {
            if (meno_vstup == pole[j].meno) {
                cout << pole[j].cislo << endl;
                break;
            }
            if (j == n - 1) {
                cout << meno_vstup << " sa v telefonnom zozname nenachadza" << endl;
            }
        }
    }

    return 0;
}
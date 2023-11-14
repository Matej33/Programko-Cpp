#include <iostream>
#include <fstream>

using namespace std;

struct Zamestnanec {
    int ID{};
    string meno;
    string priezvisko;
    string pozicia;
    int plat{};
};

int main() {
    Zamestnanec pole[10000];
    int pozicia = 0, max = 0;
    ifstream file;
    file.open("employees-10000.txt");
    if (!file) {
        return 1;
    }
    int velkost;
    file >> velkost;
    for (int i = 0; i < velkost; i++) {
        file >> pole[i].ID >> pole[i].meno >> pole[i].priezvisko >> pole[i].pozicia >> pole[i].plat;
        if (pole[i].plat > max) {
            max = pole[i].plat;
            pozicia = i;
        }
    }
    cout << pole[pozicia].ID << " " << pole[pozicia].meno << " " << pole[pozicia].priezvisko
         << " " << pole[pozicia].pozicia << " " << pole[pozicia].plat << "dolars" << endl;

    file.close();

    return 0;
}
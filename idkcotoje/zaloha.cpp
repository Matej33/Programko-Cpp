//treba opraviť

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    {
        int x;
        cout << "Overenie ci nie si robot" << endl;
        jump:
        cout << "Kolko je 2 + 2 ?" << endl;
        cin >> x;
        if (x != 4) {
            cout << "Zly vysledok!" << endl;
            goto jump;
            return 1;
        } else
            cout << "ok" << endl;
    }
    int vyber;
    start:
    cout << "Ak chces hadat ty zadaj 1" << endl;
    cout << "Ak ma hadat pocitac zadaj 0" << endl;
    cin >> vyber;
    if (vyber == 1) {
        int a, b, c, d, p;
        bool y = true;
        cout << "Interval musi byt zadany z celych cisel!" << endl;
        skok:
        cout << "Zaciatok intervalu: ";
        cin >> a;
        cout << "Koniec intervalu: ";
        cin >> b;
        if (a >= b) {
            cout << "Nespravne zadany interval" << endl;
            goto skok;
            return 1;
        }
        srand(time(NULL));
        c = (a + rand() % (b - a + 1));
        cout << "Hra zacina, tipni si na ake cislo myslim" << endl;
        do {
            cin >> d;
            if (d < a || d > b)
                cout << "Zadal si cislo mimo intervalu!" << endl;
            else if (c > d)
                cout << "Vacsie cislo!" << endl;
            else if (c < d)
                cout << "Mensie cislo!" << endl;
            else {
                cout << "Trafil si!" << endl;
                y = false;
            }
        } while (y);
        cout << "Pocet pokusov: " << p << endl;
        return 0;
    } else if (vyber == 0) {
        int zaciatok, koniec, pokus, overenie, pocitadlo;
        char odpoved;
        cout << "Vymysli si cislo" << endl;
        cout << "Zadaj interval v ktorom sa nachadza tvoje cislo." << endl;
        cout << "V intervale nemoze byt viac ako 100 cisel pre usetrenie casu." << endl;
        cout << "Budem ale potrebovat tvoju pomoc." << endl;
        cout << "---------------------------------" << endl;
        cout << "Ak je tvoje cislo mensie napis M." << endl;
        cout << "Ak je tvoje cislo vacsie napis V." << endl;
        cout << "Ak som sa trafil napis T." << endl;
        cout << "---------------------------------" << endl;
        zadavanie:
        cout << "Zaciatok intervalu: ";
        cin >> zaciatok;
        cout << "Koniec intervalu: ";
        cin >> koniec;
        overenie = zaciatok + 99;
        bool yy = true;
        if (zaciatok >= koniec || overenie < koniec) {
            cout << "Zadal si nespravny iterval" << endl;
            goto zadavanie;
            return 1;
        }
        cout << "Zacinam hadat!" << endl;
        do {
            pokus = (zaciatok + koniec) / 2;
            cout << "Je cislo na ktore myslis " << pokus << " ?" << endl;
            cin >> odpoved;

            if (odpoved == 'T') {
                cout << "Jupi, vyhral som!" << endl;
                yy = false;
            } else if (odpoved == 'M') {
                koniec = pokus;
                cout << "Hmmm tak skusim ine." << endl;
            } else if (odpoved == 'V') {
                zaciatok = pokus;
                cout << "Hmmm tak skusim ine." << endl;
            } else
                cout << "Nerozumiem tvojej odpovedi!" << endl;
        } while (yy);
        cout << "Trafil som na: " << pocitadlo << ". pokus." << endl;
        return 0;
    } else
        cout << "Zadal si zle cislo" << endl;
    goto start;

    return 0;
}

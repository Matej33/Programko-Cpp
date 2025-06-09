#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int dlzka, frekvencia, hlbka, kanaly;
    cout << "zadajte dlzku v sekundach: ";
    cin >> dlzka;
    cout << "zadajte vzorkovaciu frekvenciu (Hz): ";
    cin >> frekvencia;
    cout << "zadajte bitovu hlbku: ";
    cin >> hlbka;
    cout << "zadajte pocet kanalov: ";
    cin >> kanaly;

    double final = (kanaly*hlbka*frekvencia*dlzka) / 8.0 / 1024.0 / 1024.0;
    cout << "Velkost tohoto suboru je: " << /*round(final)*/ final << "MB" << endl;

    return 0;
}
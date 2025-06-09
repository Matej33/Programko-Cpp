#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "chces prenasat z desiatkovej alebo z binarnej? pre desiatkovu zadaj d a pre binarnu b: ";
    char sustava;
    cin >> sustava;
    cout << "zadaj cislo v tebou zvolenej sustave: ";
    long long cislo;
    cin >> cislo;

    int i = 0;
    if (sustava == 'd') {
        string bin;
        while (cislo > 1) {
            bin.push_back((cislo % 2) + '0');
            cislo /= 2;
            i++;
        }
        bin.push_back('1');
        string final;
        for (int j = 0; j < bin.size(); j++) {
            final.push_back(bin[bin.size() - j - 1]);
        }
        cout << "tvoje cislo prevedene do binarneho: " << final << endl;
        return 0;
    } else if (sustava == 'b') {
        int final = 0;
        string dec = to_string(cislo);
        for (int j = 0; j < dec.size(); j++) {
            if (dec[dec.size() - 1 - j] == '1') {
                final += pow(2, dec.size() - 1 - j);
            }
        }
        cout << "tvoje cislo prevedene do decimalneho: " << final << endl;
        return 0;
    } else {
        cout << "nieco sa nepodarilo" << endl;
    }

    return 0;
}
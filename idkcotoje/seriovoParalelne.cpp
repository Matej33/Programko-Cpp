#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cout << "Ak chces seriovo napis s ak chces paralelne napis p:" << endl;
    cin >> s;
    double num, vysledok = 0, odpor;
    cout << "napis pocet rezistorov:" << endl;
    cin >> num;

    if (s == "s") {
        for (int i = 0; i < num; i++) {
            cout << "napis odpor c. " << i + 1 << endl;
            cin >> odpor;
            vysledok += odpor;
        }
        cout << "vysledok: " << vysledok << endl;
    } else if (s == "p") {
        for (int i = 0; i < num; i++) {
            cout << "napis odpor c. " << i + 1 << endl;
            cin >> odpor;
            vysledok += 1.0 / odpor;
        }
        cout << "vysledok: " << 1.0/vysledok << endl;
    } else {
        cout << "nevis citat?" << endl;
    }

    return 0;
}
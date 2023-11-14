#include <iostream>

using namespace std;

int main() {
    string rc;
    cin >> rc;
    auto pos = rc.find('/');
    if (pos != -1) {
        rc = rc.replace(pos, 1, "");
    }
    cout << rc << endl;
    int rok = stoi(rc.substr(0, 2));
    int mesiac = stoi(rc.substr(2, 2));
    int den = stoi(rc.substr(4, 2));
    if ((mesiac >= 1 && mesiac <= 12) || (mesiac >= 51 && mesiac <= 62)) {
    } else {
        cerr << "Invalid mesiac" << endl;
        return 1;
    }
    if (den >= 1 && den <= 31) {
    } else {
        cerr << "Invalid den" << endl;
        return 1;
    }
    int neparne = 0;
    int parne = 0;
    for (int i = 0; i < rc.length(); i++) {
        if (i % 2 == 0) {
            parne += rc[i];
        } else {
            neparne += rc[i];
        }
    }
    int vysledok = neparne - parne;
    if (vysledok % 11 == 0) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }
    return 0;
}
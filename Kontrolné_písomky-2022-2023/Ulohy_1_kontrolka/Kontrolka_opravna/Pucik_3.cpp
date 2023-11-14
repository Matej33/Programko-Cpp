#include <iostream>

using namespace std;

void rovnake(const int &x, const int &y, const int &z, string slovoX, string slovoY, string slovoZ, string nic,
             string spodok) {
    if (x == 1) {
        cout << slovoX << endl << slovoY << endl << slovoZ << endl << spodok << endl;
    } else if (x == 2) {
        cout << nic << slovoX << endl << nic << slovoY << endl << nic << slovoZ << endl << spodok << endl;
    } else if (x == 3) {
        cout << nic << nic << slovoX << endl << nic << nic << slovoY << endl << nic << nic << slovoZ << endl << spodok
             << endl;
    }
}

void rozdielne(const int &x, const int &y, const int &z, string slovoX, string slovoY, string slovoZ, string nic,
               string spodok) {
    if (x == 1 && y == 2) {
        cout << endl << endl << slovoX << " " << slovoY << " " << slovoZ << endl << spodok << endl;
    } else if (x == 2 && y == 1) {
        cout << endl << endl << slovoY << " " << slovoX << " " << slovoZ << endl << spodok << endl;
    } else if (x == 1 && y == 3) {
        cout << endl << endl << slovoX << " " << slovoZ << " " << slovoY << endl << spodok << endl;
    } else if (x == 2 && y == 3) {
        cout << endl << endl << slovoZ << " " << slovoX << " " << slovoY << endl << spodok << endl;
    } else if (x == 3 && y == 1) {
        cout << endl << endl << slovoY << " " << slovoZ << " " << slovoX << endl << spodok << endl;
    } else if (x == 3 && y == 2) {
        cout << endl << endl << slovoZ << " " << slovoY << " " << slovoX << endl << spodok << endl;
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    string slovoX = "   ##   ";
    string slovoY = "  ####  ";
    string slovoZ = " ###### ";
    string nic = "         ";
    string spodok = "######## ######## ########";

    if (x == y && x == z && y == z) {
        rovnake(x, y, z, slovoX, slovoY, slovoZ, nic, spodok);
    } else if (x != y && y != z && z != x) {
        rozdielne(x, y, z, slovoX, slovoY, slovoZ, nic, spodok);
    }

    return 0;
}
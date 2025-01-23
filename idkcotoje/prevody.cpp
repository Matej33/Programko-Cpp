#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double sustava, doSustavy, vysledok = 0;
    string zadaneCislo, answer;

    cout << "Zo sustavy(2, 10): "; cin >> sustava;
    cout << endl << "zadajte cislo: "; cin >> zadaneCislo;
    cout << "Do sustavy(2, 10): "; cin >> doSustavy; cout << endl;

    if (sustava == doSustavy) {
        cout << "Lahka praca: " << zadaneCislo;
        return 0;
    } else if (sustava == 2) {
        for (int i = 0; i < zadaneCislo.size(); i++) {
            if (zadaneCislo[i] == '1') {
                vysledok += pow(2, zadaneCislo.size() - i - 1);
            }
        }
        cout << "vysledok: " << vysledok << endl;
        return 0;

    } else if (sustava == 10) {
        int decimalValue = stoi(zadaneCislo);
        while (decimalValue > 0) {
            answer += to_string(decimalValue % 2);
            decimalValue /= 2;
        }
        reverse(answer.begin(), answer.end());
        cout << "vysledok: " << answer << endl;
        return 0;
    }
}
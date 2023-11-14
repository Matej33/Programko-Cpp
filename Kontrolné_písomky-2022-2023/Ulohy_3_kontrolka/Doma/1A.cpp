#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string znaky;
    int n;
    int counter = 0;
    int pocitadlo = 0;
    getline(cin, znaky);
    cin >> n;
    for (int i = 0; i < znaky.length(); i++) {
        if (n < 1) {
            cerr << "Nesprávny vstup" << endl;
            return 1;
        }
        if (znaky[i] == '-') {
            pocitadlo++;
            if (znaky[i - 1] >= 65 || znaky[i - 1] <= 90) {
                if (znaky[i + 1] <= 90 || znaky[i - 1] < znaky[i + 1]) {
                    counter++;
                    continue;
                }
            } else if (znaky[i - 1] >= 97 || znaky[i - 1] <= 122) {
                if (znaky[i + 1] <= 122 || znaky[i - 1] < znaky[i + 1]) {
                    counter++;
                    continue;
                }
            } else if (znaky[i - 1] >= 48 || znaky[i - 1] <= 57) {
                if (znaky[i + 1] <= 57 || znaky[i - 1] < znaky[i + 1]) {
                    counter++;
                    continue;
                }
            }
        } else {
            continue;
        }
    }
    if (counter != pocitadlo) {
        cerr << "Nesprávny vstup" << endl;
        return 1;
    }
    for (int i = 0; i < n; i++) {
        cout << znaky[1 + (rand() % znaky.length())];
    }

    return 0;
}
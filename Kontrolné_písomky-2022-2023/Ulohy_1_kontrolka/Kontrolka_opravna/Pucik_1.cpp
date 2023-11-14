#include <iostream>

using namespace std;

void funkcia(string slovo1, string slovo2, string slovo3, int const &max) {
    for (int i = 0; i < max; i++) {
        if (i > slovo1.length()) {
            slovo1[i] += ' ';
        } else if (i > slovo2.length()) {
            slovo2[i] += ' ';
        } else if (i > slovo3.length()) {
            slovo3[i] += ' ';
        }
        cout << slovo1[i] << " " << slovo2[i] << " " << slovo3[i] << endl;
    }
}

int main() {
    string slovo1, slovo2, slovo3;
    cin >> slovo1 >> slovo2 >> slovo3;
    int max = slovo1.length();
    if (slovo1.length() < slovo2.length() && slovo2.length() > slovo3.length()) {
        max = slovo2.length();
    } else if (slovo2.length() < slovo3.length() && slovo3.length() > slovo1.length()) {
        max = slovo3.length();
    }
    funkcia(slovo1, slovo2, slovo3, max);

    return 0;
}
#include <iostream>

using namespace std;

string funkcia(const int &n, const string &text) {
    string sifra = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != 'Z' && text[i] != 'z' && isalpha(text[i])) {
            sifra += text[i] + n;
        } else if (isalpha(text[i])) {
            sifra += text[i] - (26 - n);
        } else { sifra += text[i]; }
    }
    return sifra;
}

int main() {
    int n;
    string text;
    cin >> n;
    cin.ignore();
    getline(cin, text);

    cout << funkcia(n, text) << endl;


    return 0;
}

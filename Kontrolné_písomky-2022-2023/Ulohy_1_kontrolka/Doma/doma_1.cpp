#include <iostream>

using namespace std;

void top_and_bottom(const int &d, string &s) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < (s.length() + 2 * d + 2); j++) {
            cout << "#";
        }
        cout << endl;
    }
}

void text_margin(const int &d, string &s) {
    for (int l = 0; l < 2; l++) {
        if (l == 1) {
            for (int i = 0; i < d; i++) {
                cout << "#";
            }
            cout << " " << s << " ";
            for (int i = 0; i < d; i++) {
                cout << "#";
            }
            cout << endl;
        }
        for (int i = 0; i < d; i++) {
            cout << "#";
        }
        for (int j = 0; j < s.length() + 2; j++) {
            cout << " ";
        }
        for (int i = 0; i < d; i++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main() {
    string s;
    int d;
    getline(cin, s);
    cin >> d;
    top_and_bottom(d, s);
    text_margin(d, s);
    top_and_bottom(d, s);

    return 0;
}
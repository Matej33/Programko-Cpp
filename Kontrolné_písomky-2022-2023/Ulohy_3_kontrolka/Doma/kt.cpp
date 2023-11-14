//šifra
#include <iostream>

using namespace std;

string cipher(const int &n, const string &s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 90 && s[i] != 122 && isalpha(s[i])) {
            res += s[i] + n;
        } else if (isalpha(s[i])) {
            res += s[i] - (25 - n + 1);
        } else {
            res += s[i];
        }
    }
    return res;
}

int main() {

    int n;
    string s;

    cin >> n;
    cin.ignore();
    getline(cin, s);

    cout << cipher(n, s) << endl;

    return 0;
}
//
//
//EAN
#include <iostream>
#include <string>

using std::cout;
using std::string;

constexpr int kEANSize = 13;

bool isValidEAN(const string &ean) {
    if (ean.size() != kEANSize) {
        return false;
    }

    int checkSum = 0;
    for (int i = 0; i < 13; ++i) {
        int digit = ean[i] - '0';
        if (i % 2 == 0) {
            checkSum += digit;
        } else {
            checkSum += 3 * digit;
        }
    }
    return checkSum % 10 == 0;
}

int main() {
    if (isValidEAN("9303993633004")) {
        cout << "Valid EAN\n";
    } else {
        cout << "Invalid EAN\n";
    }
    return 0;
}
//
//
//decoder
#include <ctype.h>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

string shiftString(const string &str, int n) {
    const char start = 'a';
    const char end = 'z';
    const int range = end - start + 1;

    string shiftedStr;
    shiftedStr.reserve(str.length());

    for (size_t i = 0; i < str.length(); i++) {
        char c = str[i];
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            int shiftedIndex = (c - base - n) % range;
            if (shiftedIndex < 0) {
                shiftedIndex += range;
            }
            char shiftedChar = base + shiftedIndex;
            shiftedStr.push_back(shiftedChar);
        } else {
            shiftedStr.push_back(c);
        }
    }

    return shiftedStr;
}

int main() {
    int n;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string encodedStr;
    getline(cin, encodedStr);

    string originalStr = shiftString(encodedStr, n);
    cout << "Encoded string: " << n << encodedStr << endl;
    cout << "Original string: " << originalStr << endl;

    return 0;
}
//
//
//encoder
#include <ctype.h>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

string shiftString(const string &str, int n) {
    const char start = 'a';
    const char end = 'z';
    const int range = end - start + 1;

    string shiftedStr;
    shiftedStr.reserve(str.length());

    for (size_t i = 0; i < str.length(); i++) {
        char c = str[i];
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            int shiftedIndex = (c - base + n) % range;
            if (shiftedIndex < 0) {
                shiftedIndex += range;
            }
            char shiftedChar = base + shiftedIndex;
            shiftedStr.push_back(shiftedChar);
        } else {
            shiftedStr.push_back(c);
        }
    }

    return shiftedStr;
}

int main() {
    int n;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string str;
    getline(cin, str);

    string shiftedStr = shiftString(str, n);
    cout << "Original string: " << str << endl;
    cout << "Shifted " << n << " characters to the right: " << shiftedStr << endl;

    return 0;
}
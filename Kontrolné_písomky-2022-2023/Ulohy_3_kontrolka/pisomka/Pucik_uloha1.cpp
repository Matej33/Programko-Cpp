#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    string username, domain;
    int n;
    cin >> username;
    cin >> domain;
    cin >> n;

    ifstream file1(username);
    ifstream file2(domain);

    if (!file1 || !file2) {
        cerr << "Nenasiel sa aspon jeden subor";
        return 1;
    }

    string *meno = new string[100000];
    string *adresa = new string[10000];

    int count1 = 0;
    int count2 = 0;
    if (file1.is_open()) {
        while (!file1.eof()) {
            file1 >> meno[count1];
            count1++;
        }
    }
    if (file2.is_open()) {
        while (!file2.eof()) {
            file2 >> adresa[count2];
            count2++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << meno[1 + (rand() % count1)] << "@" << adresa[1 + (rand() % count2)] << endl;
    }

    file1.close();
    file2.close();
    delete[] adresa;
    delete[] meno;

    return 0;
}

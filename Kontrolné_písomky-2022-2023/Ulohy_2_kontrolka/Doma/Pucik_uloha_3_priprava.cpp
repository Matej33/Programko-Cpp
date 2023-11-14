#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string white_name, black_name, result;
    string winner[20] = {};
    int x = 0;
    for (int i = 0; i < 20; i++) {
        ifstream file;
        file.open(to_string(i + 1) + ".pgn");
        file.ignore(100, '\n');
        file.ignore(100, '\n');
        file.ignore(100, '\n');
        string biely, cierny, vysledok;

        getline(file, biely);
        getline(file, cierny);
        getline(file, vysledok);
        int j = 0;

        for (int k = 0; k < biely.length(); k++) {
            if (j == 1 && biely[k] != '\"') {
                white_name += biely[k];
            }
            if (biely[k] == '\"') j++;
        }
        j = 0;
        for (int k = 0; k < cierny.length(); k++) {
            if (j == 1 && cierny[k] != '\"') {
                black_name += cierny[k];
            }
            if (cierny[k] == '\"') j++;
        }
        j = 0;
        for (int k = 0; k < vysledok.length(); k++) {
            if (j == 1 && vysledok[k] != '\"') {
                result += vysledok[k];
            }
            if (vysledok[k] == '\"') j++;
        }

        if (result[0] == '1' && result[1] != '/') {
            winner[i] = white_name;
        } else if (result[0] == '0' && result[1] != '/') {
            winner[i] = black_name;
        }
        white_name = "";
        black_name = "";
        result = "";
        file.close();
    }

    string input = "";
    cin >> input;
    int counter = 0;
    for (int i = 0; i < 20; i++) {
        if (winner[i] == input)
            counter++;
    }
    cout << counter << endl;

    return 0;
}
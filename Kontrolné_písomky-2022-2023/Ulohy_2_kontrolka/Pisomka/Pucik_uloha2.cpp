#include <iostream>

using namespace std;

struct Zasah {
    int x, y;
    string trefa;
};

int main() {
    int riadky = 0, stlpce = 0;
    int n = 0;
    cin >> stlpce >> riadky;
    cin >> n;
    Zasah *pole = new Zasah[n] {};
    for (int i = 0; i < n; i++) {
        cin >> pole[i].x >> pole[i].y >> pole[i].trefa;
    }
    char **array = new char *[riadky]{};
    for (int i = 0; i < riadky; i++) {
        array[i] = new char[stlpce]{};
    }
    for (int i = 0; i < riadky; i++) {
        for (int j = 0; j < stlpce; j++) {
            for (int k = 0; k < n; k++) {
                if(i == pole[k].x && j == pole[k].y && pole[k].trefa == "ZASAH") {
                    array[i][j] = 'X';
                }
                if(i == pole[k].x && j == pole[k].y && pole[k].trefa == "VEDLA"){
                    array[i][j] = 'O';
                }
                if(array[i][j] == ' '){
                    array[i][j] = '.';
                }
            }
        }
    }

    for(int i = 0; i < riadky; i++){
        for (int j = 0; j < stlpce; j++){
            cout << array[j][i];
        }
        cout << endl;
    }
    return 0;
}

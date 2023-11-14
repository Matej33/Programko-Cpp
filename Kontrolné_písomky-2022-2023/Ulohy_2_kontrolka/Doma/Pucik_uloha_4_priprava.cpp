//Chudnutie
#include <iostream>
#include <fstream>

using namespace std;

struct Food {
    string ingredient;
    int grams = 0;
    int calories = 0;
};

int main() {
    string name;
    cout << "Enter file name (\"file.txt\"): " << endl;
    cin >> name;
    ifstream file(name);
    if (!file) {
        cerr << "Cannot open file" << endl;
        return 1;
    }
    int n = 0;
    file >> n;
    Food *array = new Food[n];
    for (int i = 0; i < n; i++) {
        file >> array[i].ingredient >> array[i].grams >> array[i].calories;
    }
    int m = 0;
    cin >> m;
    string type;
    int number = 0, counter = 0;
    for (int i = 0; i < m; i++) {
        cin >> type >> number;
        for (int j = 0; j < n; j++) {
            if (type == array[j].ingredient) {
                counter += number / array[j].grams * array[j].calories;
                break;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
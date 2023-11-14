#include <iostream>
#include <random>

#define SIZE (5)

using namespace std;

int pole[SIZE];

void init(bool print = false) {
    for (int i = 0; i < SIZE; i++) { pole[i] = i + 1; }
    shuffle(pole, pole + SIZE, default_random_engine(time(nullptr)));
    if (print) {
        cout << "Povodne pole: " << endl;
        for (int i = 0; i < SIZE; i++) {
            cout << pole[i] << " ";
        }
        cout << endl;
    }
}

void visualize() {
    for (int i = SIZE; i >= 1; i--) {
        for (int j = 0; j < SIZE; j++) {
            cout << (pole[j] >= i ? "#" : " ");
        }
        cout << endl;
    }
}

void bubble_sort() {
    for (int vybublanie = 0; vybublanie < SIZE - 1; vybublanie++) {
        for (int j = 0; j < SIZE - vybublanie - 1; j++) {
            if (pole[j] > pole[j + 1]) {
                swap(pole[j], pole[j + 1]);
            }
        }
    }
}

int main() {
    init(true);
    visualize();
    bubble_sort();
    visualize();

    return 0;
}

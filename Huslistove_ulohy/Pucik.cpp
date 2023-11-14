#include <iostream>

using namespace std;

struct Player {
    int x;
    int y;
};

void Labyrint(char **array, const Player &position, const int &height, const int &width) {
    if (position.x > 0) {
        if (array[position.x - 1][position.y] == '.') {
            cout << "Top" << endl;
        }
    }
    if (position.x < height - 1) {
        if (array[position.x + 1][position.y] == '.') {
            cout << "Bottom" << endl;
        }
    }
    if (position.y > 0) {
        if (array[position.x][position.y - 1] == '.') {
            cout << "Left" << endl;
        }
    }
    if (position.y < width - 1) {
        if (array[position.x][position.y + 1] == '.') {
            cout << "Right" << endl;
        }
    }
}

int main() {
    int height, width;
    cin >> height >> width;
    char **array = new char *[height];
    for (int i = 0; i < height; i++) {
        array[i] = new char[width];
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> array[i][j];
        }
    }
    Player position;
    cin >> position.x >> position.y;

    Labyrint(array, position, height, width);

    delete[] *array;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int height, width, numm;
    cin >> width >> height;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> numm;
            if (numm < 25) {cout << "@@";}
            else if (numm < 50) { cout << "%%";}
            else if (numm < 75) { cout << "##";}
            else if (numm < 100) { cout << "**";}
            else if (numm < 125) { cout << "++";}
            else if (numm < 150) { cout << "==";}
            else if (numm < 175) { cout << "--";}
            else if (numm < 200) { cout << "::";}
            else if (numm < 240) { cout << "..";}
            else cout << "  ";
        }
        cout << endl;
    }

return 0;
}
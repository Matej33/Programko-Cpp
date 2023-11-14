#include <iostream>
#include <fstream>

using namespace std;

void myfunction(ifstream &file, ofstream &output, const int &height, const int &width) {
    int r, g, b;
    int grey;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            file >> r >> g >> b;
            grey = (int) (0.299 * r) + (0.587 * g) + (0.114 * b);
            output << grey << " " << grey << " " << grey << " ";
        }
        output << endl;
    }
}

int main() {
    string name;
    string format;
    int width, height;
    int max_color_value;
    cout << " enter: file_name.ppm" << endl;
    cin >> name;
    ifstream file;
    file.open(name, ios_base::binary);
    file >> format >> width >> height >> max_color_value;
    ofstream output;
    output.open("output.ppm", ios_base::binary);
    if (!file || format != "P3") {
        return 1;
    }
    output << format << endl << width << " " << height << endl << max_color_value << endl;
    myfunction(file, output, height, width);

    file.close();
    output.close();

    return 0;
}
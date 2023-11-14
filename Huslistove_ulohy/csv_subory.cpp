#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream file("1.csv");
    if(!file){
        cerr << "Subor sa epodarilo otvorit" << endl;
        return 1;
    }

    while (!file.eof()){
        string line;
        getline(file, line);
        if(line.empty()) break;

        int previous_index = 0;
        while(true){
            int index = line.find(',', previous_index);
            if(index == string::npos) {
                cout << line.substr(previous_index);
                break;
            }
            cout << line.substr(previous_index, index - previous_index) << " | ";
            previous_index = index + 1;
        }
        cout << endl;
    }

return 0;
}

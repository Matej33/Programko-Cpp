#include <iostream>

using namespace std;

int main(){
    string sprava;
    getline(cin, sprava);
    int counter = 0;

    for(int i = 0; i < sprava.length(); i++) {
        if(i % 160 == 0){
            counter++;
            cout << endl << "cast " << counter << " : " << endl;
        }
        cout << sprava[i];
    }


return 0;
}

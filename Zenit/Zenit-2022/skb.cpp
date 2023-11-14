#include <iostream>

using namespace std;

int main(){
    int y, x, w = 0;
    cin >> y;
    for (int i = 0; i < y; i++){
        cin >> x;
        w += x;
    }
    cout << w << endl;

    return 0;
}
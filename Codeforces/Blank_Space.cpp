#include <iostream>

using namespace std;

int main() {

    int n = 0;
    int x = 0;
    int counter = 0;
    int max = 0;
    int y = 0;

    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> y;
        for (int j = 0; j < y; j++) {
            cin >> n;
            if (n == 0) {
                counter++;
            } else if (n == 1) {
                if (counter > max) max = counter;
                counter = 0;
            }
            if(counter > max) max = counter;
        }
        cout << max << endl;
        max = 0;
        counter = 0;
    }

    return 0;
}

//https://codeforces.com/contest/1829/problem/B
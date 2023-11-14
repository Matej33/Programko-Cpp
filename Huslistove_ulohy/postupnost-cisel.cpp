#include <iostream>

using namespace std;

void cislo(int n, int x) {
    if (n == x) {
        cout << n;
        return;
    } else {
        cout << x << " ";
        x++;
        return cislo(n, x);
    }
}

int main() {

    cislo(14, 1);

    return 0;
}
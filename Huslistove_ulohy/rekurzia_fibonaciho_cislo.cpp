#include <iostream>

using namespace std;

int fibonacci(int poradie) {
    if (poradie == 0) { return 0; }
    if (poradie == 1) { return 1; }
    return fibonacci(poradie - 1) + fibonacci(poradie - 2);
}


int main() {
    cout << fibonacci(101) << endl;
    return 0;
}
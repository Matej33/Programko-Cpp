#include <iostream>

using namespace std;

int main() {
    long long i = 0;
    cin >> i;
    if (i % 2 == 0){
        cout << i / 2 << endl;
    }
    else
        cout << "-" << i / 2 + 1 << endl;
    return 0;
}

//https://codeforces.com/contest/486/problem/A
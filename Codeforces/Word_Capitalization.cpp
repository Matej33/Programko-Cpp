#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string veta;
    getline(cin, veta);
    veta[0] = toupper(veta[0]);;
    cout << veta << endl;

    return 0;
}

//https://codeforces.com/contest/281/problem/A
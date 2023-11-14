#include <iostream>
#include <string>

using namespace std;

int main (){
    string x;
    int pocitadlo = 0, y = 0, b = 0;
    cin >> x;
    for (y = 0; y < x.length(); y++){
        if (x[y] == '7' || x[y] == '4') pocitadlo++;
    }
    if (pocitadlo == y){  cout << "YES" << endl; b++; }
    if (b == 1) return 0;
    int w = stoi(x);
    if (w % 4 == 0 || w % 7 == 0 ||  w % 47 == 0) {  cout << "YES" << endl; b++; }
    if (b == 1) return 0;
    else cout << "NO" << endl;

    return 0;
}

//https://codeforces.com/contest/122/problem/A
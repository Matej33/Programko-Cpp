#include <iostream>

using namespace std;

int main(){
    int n, x, y, z, pocitac = 0, vysledok = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y >> z;
        if (x == 1){ pocitac++;}
        if (y == 1){ pocitac++;}
        if (z == 1){ pocitac++;}
        if (pocitac > 1){vysledok++;}
        pocitac = 0;
    }
    cout << vysledok << endl;
    return 0;
}

//https://codeforces.com/contest/231/problem/A
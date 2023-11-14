#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    double vysledok = 0.0;
    for (int i = 0; i < n; i++){
        cin >> x;
        vysledok += x;
    }
    cout << vysledok / n;

    return 0;
}

//https://codeforces.com/contest/200/problem/B
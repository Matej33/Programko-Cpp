#include <iostream>

using namespace std;

int main(){
    int k, n, w, cena = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++){
        cena += i * k;
    }
    if (cena - n <= 0) cout << 0;
    else cout << cena - n;

    return 0;
}

//https://codeforces.com/contest/546/problem/A
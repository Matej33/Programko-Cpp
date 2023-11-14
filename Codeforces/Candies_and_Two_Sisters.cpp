#include <iostream>

using namespace std;

int vysledok(int x){

    if (x == 0 || x == 1 || x == 2){
        return 0;
    }

    else if (x % 2 == 0){
        return x / 2 - 1;
    }
    else if (x % 2 == 1){
        return (double)x / 2 - 0.5;
    }
}

int main() {
    int x, y;
    cin >> y;
    for (int i = 0; i < y; i++){
        cin >> x;
        cout << vysledok(x) << endl;
    }
    return 0;
}

//https://codeforces.com/contest/1335/problem/A
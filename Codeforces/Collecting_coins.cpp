#include <iostream>

using namespace std;

int main() {
    int x, a, b, c, n, max;
    int counter = 0;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        cin >> a >> b >> c >> n;
        if (a >= b && a >= c) {
            max = a;
        } else if (b >= a && b >= c) {
            max = b;
        } else if (c >= a && c >= b) {
            max = c;
        }
        if(max == a){
            counter += a - b;
            counter += a - c;
        } else if(max == b){
            counter += b - a;
            counter += b - c;
        } else if(max == c){
            counter += c - a;
            counter += c - b;
        }
        if(counter > n){
            cout << "NO" << endl;
            counter = 0;
        } else if((n - counter) % 3 == 0){
            cout << "YES" << endl;
            counter = 0;
        } else {
            cout << "NO" << endl;
            counter = 0;
        }
    }


    return 0;
}
//https://codeforces.com/problemset/problem/1294/A
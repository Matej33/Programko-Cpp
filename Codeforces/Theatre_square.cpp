#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll x = 0, y = 0, a = 0;
    cin >> x >> y >> a;
    ll b = a, pripocitadlo = a;
    ll counterA = 1, counterB = 1;



    for(;a < x; counterA++) {
        a += pripocitadlo;
        }
    for(;b < y; counterB++){
        b += pripocitadlo;
        }
    cout << counterA*counterB;
}

//https://codeforces.com/problemset/problem/1/A
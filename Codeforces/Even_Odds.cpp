#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define db double
#define str string
#define vi vector<int>
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll n, k;
    cin >> n >> k;


    if (n % 2 == 0) {
        if(k > n/2){
            cout << (k - (n / 2)) * 2;
        } else{
            cout << k * 2 - 1;
        }
    } else {
        if(k > (n + 1)/2){
            cout << (k - ((n + 1) / 2)) * 2;
        } else{
            cout << k * 2 - 1;
        }
    }

    return 0;
}

//https://codeforces.com/problemset/problem/318/A
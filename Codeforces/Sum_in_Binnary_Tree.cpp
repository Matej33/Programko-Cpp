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

    int n;
    cin >> n;
    ll counter = 1;
    for (int i = 0; i < n ;i++) {
        ull x;
        cin >> x;
        while(x != 1){
            counter += x;
            x = x/2;
        }
        cout << counter << endl;
        counter = 1;
    }

    return 0;
}

//https://codeforces.com/contest/1843/problem/C
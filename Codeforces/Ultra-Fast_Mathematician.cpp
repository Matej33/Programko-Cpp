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

    string x, y;
    cin >> x >> y;

    for(int i = 0; i < x.length(); i++){
        if(x[i] != y[i]){
            cout << "1";
        } else {
            cout << "0";
        }
    }

    return 0;
}

//https://codeforces.com/contest/61/problem/A
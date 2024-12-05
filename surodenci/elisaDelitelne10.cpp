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
    if(n % 10 == 0){
        cout << "nie je mozne delit cislom 10 bezozvysku";
    } else {
        cout << "je mozne delit cislom 10 bezozvysku";
    }

    return 0;
}
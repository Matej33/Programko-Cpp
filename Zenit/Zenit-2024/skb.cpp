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

    ll num;
    cin >> num;
    if (num % 2 == 0){
        num += 1;
    } else{
        num += -1;
    }

    cout << num << endl;

    return 0;
}
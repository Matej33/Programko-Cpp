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

    float d, l, seriovo, paralelne;
    cin >> d >> l;

    seriovo = d + l;
    paralelne = d * l / (d + l);

    cout << "seriovo: " << seriovo << endl;
    cout << fixed << setprecision(1);
    cout << "paralelne: " << paralelne << endl;

    return 0;
}
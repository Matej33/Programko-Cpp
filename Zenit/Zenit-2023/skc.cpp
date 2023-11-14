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
    vector<int> array(n);
    int counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        counter += array[i];
    }
    for (int x = 0; x < n; x++) {
        cout << counter - array[x] << endl;
    }
    return 0;
}

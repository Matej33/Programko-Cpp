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

    int n = 0;
    cin >> n;
    int x;
    int max1 = 0, max2 = 0;
    int *array = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> x;
        if(x > max1){
            max2 = max1;
            max1 = x;
        } else if(x > max2){
            max2 = x;
        }
    }
    if(n == 1 || n == 2){
        cout << 0 << endl;
        return 0;
    }
    if(max2-1 > n - 2){
        cout << n - 2 << endl;
    } else{
        cout << max2 - 1 << endl;
    }

    return 0;
}
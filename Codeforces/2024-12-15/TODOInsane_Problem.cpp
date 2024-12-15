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

    int t;
    cin >> t;
    ll k, l1, r1, l2, r2, x, y, n, max;
    bool wrote;

    for (int i = 0; i < t; i++) {
        cin >> k >> l1 >> r1 >> l2 >> r2;
        x = l1;
        y = l2;
        max = r2/l1;
        wrote = true;
        while (x < r1 && wrote) {
            while(y < r2){
                while(y/x <= pow(k, n) && pow(k, n) <= max){
                    n++;
                }
                if(y/x == pow(k, n)){
                    cout << n << endl;
                    wrote = false;
                    break;
                }
                if(y%x == 0){
                    y+=x;
                } else{
                    y++;
                }
            }
            x++;
            y = l2;
        }
    }


    return 0;
}
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
    ll max = -9223372036854775807;
    ll max2 = -9223372036854775807 ;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vi V, C;
        for (int j = 0; j < x; j++) {
            int c;
            cin >> c;
            V.pb(c);
            C.pb(c);
        }
        sort(C.begin(), C.end());
        if (V.size() == 1) {
            cout << V[0] << endl;
            continue;
        }


        for (int k = 1; k < V.size(); k++) {
            if (max2 > max) {
                max = max2;
            }
            if(max2 < 0 || counter == 0 ){
                max2 = 0;
            }
            if (V[k] % 2 == 0 && V[k - 1] % 2 != 0) {
                if(counter == 0 && V[k-1] > 0){
                    max2 += V[k-1];
                }
                counter++;
                max2 += V[k];
                if (max2 > max) {
                    max = max2;
                }
            } else if (V[k] % 2 != 0 && V[k - 1] % 2 == 0) {
                if(counter == 0 && V[k-1] > 0){
                    max2 += V[k-1];
                }
                max2 += V[k];
                counter++;
                if (max2 > max) {
                    max = max2;
                }
            } else {
                counter = 0;
            }
        }

        if (C[C.size() - 1] > max || C[C.size() - 1] < 0) {
            max = C[C.size() - 1];
        }
        cout << max << endl;
        V.clear();
        C.clear();
        counter = 0;
        max =  -9223372036854775807;
        max2 = -9223372036854775807;
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1899/C
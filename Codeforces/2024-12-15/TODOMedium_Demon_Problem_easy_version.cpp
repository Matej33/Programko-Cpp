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

    int n, count = 0;
    cin >> n;
    vi V, C, C1;
    for (int i = 0; i < n; i++) {
        bool idk = true;
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int y;
            cin >> y;
            V.pb(y);
            C.pb(1);
            C1 = C;
        }
        while (idk) {
            if (C == C1 && count != 0) {
                idk = false;
            }
            C1 = C;
            for (int k = 0; k < V.size(); k++) {
                C[V[k] - 1]++;
                C[k]--;
            }
            count++;
            for (int j = 0; j < C.size(); j++) {
                if (C[j] > 1) {
                    C[j] = 1;
                }
            }
        }
        cout << count << endl;
        count = 0;
        V.clear();
        C.clear();
        C1.clear();
    }

    return 0;
}
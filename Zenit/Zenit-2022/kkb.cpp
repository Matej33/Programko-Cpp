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

    ll n;
    cin >> n;
    vector<string> V, C;
    string help;
    for (ll i = 0; i < n; i++) {
        string x;
        cin >> x;
        V.pb(x);
    }
    if(V.size() == 1){
        cout << "Janka bude frflat" << endl;
        return 0;
    }
    sort(V.begin(), V.end());
    if(V[0] == V[V.size() - 1]){
        cout << "Janka bude frflat" << endl;
    } else {
        help = V[V.size() - 1];
        V[V.size() - 1] = V[0];
        V[0] = help;
        for (ll l = 0; l < n; l++) {
            cout << V[l] << " ";
        }
    }

    return 0;
}

//https://zenit.ksp.sk/task/zenit22kkb
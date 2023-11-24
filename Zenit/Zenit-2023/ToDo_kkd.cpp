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
    vi V;
    for (ll i = 0; i < n; i++) {
        ull v;
        cin >> v;
        V.pb(v);
    }
    ull answer = 1;
    for(ll k = 0; k < n; k++){
        for (ll j = 0; j < V.size(); j++) {
            if(j != k){
                answer *= V[j];
            }
        }
        if(k == n-1){
            cout << answer % 1000000007 << endl;
            answer = 1;
        } else{
            cout << answer % 1000000007 << " ";
            answer = 1;
        }
    }
    return 0;
}

// https://zenit.ksp.sk/task/zenit23kkd
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
    vi V, C;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
            for(int j = 0; j < x; j++){
                int c;
                cin >> c;
                V.pb(c);
            }
            if(V.size() == 1){
                cout << 0 << endl;
                counter = 0;
                V.clear();
                C.clear();
                continue;
            }
            for(int k = 0; k < V.size() - 1; k++){
                C.clear();
                for(int f = 0; f < V.size(); f++){
                    C.pb(V[f]);
                }
                sort(C.begin(), C.end());
                if(C == V){
                    cout << counter << endl;
                    counter = 0;
                    V.clear();
                    C.clear();
                    break;
                }
                if(V[k] > V[k + 1]){
                    if(V[k] % 2 != 0) {
                        V.insert(V.begin()+(k + 1), ((V[k]/2) + 1));
                        V[k] = V[k]/2;
                    } else{
                        V.insert(V.begin()+(k + 1), ((V[k]/2)));
                        V[k] = V[k]/2;
                    }
                    counter++;
                    k = -1;
                }
            }
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1898/B
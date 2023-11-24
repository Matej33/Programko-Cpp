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
    vi V, max, min;
    ull minimum = 1000000000000000000, maximum = 0, counter = 0, kubo = 0, filip = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < 4; i++) {
            int x;
            cin >> x;
            V.pb(x);
            counter += x;
        }
        if(counter > maximum){
            maximum = counter;
            max.clear();
            for (int k = 0; k < 4; k++) {
                max.pb(V[k]);
            }
        } else if(counter < minimum){
            minimum = counter;
            min.clear();
            for (int l = 0; l < 4; l++) {
                min.pb(V[l]);
            }
        }
        counter = 0;
        V.clear();
    }
    for (int t = 0; t < 4; t++) {
        if(max[t] > min[t]){
            kubo += max[t];
            filip += min[t];
        } else{
            kubo += min[t];
            filip += max[t];
        }
    }

    cout << kubo - filip << endl;

    return 0;
}

// https://zenit.ksp.sk/task/zenit23kki
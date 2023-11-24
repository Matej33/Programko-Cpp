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
    vi v;
    int counter = 0;
    int idk = 0, idc = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        v.pb(num);
    }

    for(int k = 0; k < n; k++){
        for(int l = 0; l < n; l++){
            string a = to_string(v[k]);
            string b = to_string(v[l]);
            string c = a + b;
            if(c.length() % 2 == 0) {
                for (int m = 0; m < c.length() / 2; m++) {
                    idk += c[m] -'0';
                }
                for (int o = c.length() / 2; o < c.length(); o++) {
                    idc += c[o] -'0';
                }
                if(idk == idc){
                    counter++;
                }
            }
            idk = 0;
            idc = 0;
        }
    }
    cout << counter << endl;

    return 0;
}

//https://codeforces.com/contest/1895/problem/C

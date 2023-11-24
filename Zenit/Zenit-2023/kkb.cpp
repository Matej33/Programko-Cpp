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

    int x, y;
    cin >> x >> y;
    vector <char> V;
    char C;
    for (int i = 0; i < 9; i++) {
        cin >> C;
        V.pb(C);
    }
    vector <char> B;
    for (int j = 0; j < x; j++) {
        for (int l = 0; l < y; l++) {
            char t;
            cin >> t;
            B.pb(t);
        }
        for (int k = 0; k < y; k++) {
            if(B[k] != 46){
                if(B[k] == '1'){
                    B[k] = V[0];
                } else if(B[k] == '2'){
                    B[k] = V[1];
                } else if(B[k] == '3'){
                    B[k] = V[2];
                } else if(B[k] == '4'){
                    B[k] = V[3];
                } else if(B[k] == '5'){
                    B[k] = V[4];
                } else if(B[k] == '6'){
                    B[k] = V[5];
                } else if(B[k] == '7'){
                    B[k] = V[6];
                } else if(B[k] == '8'){
                    B[k] = V[7];
                } else if(B[k] == '9'){
                    B[k] = V[8];
                }
            }
        }
        for (int h = 0; h < y; h++) {
            cout << B[h];
        }
        cout << endl;
        V.clear();
        B.clear();
    }



    return 0;
}

// https://zenit.ksp.sk/task/zenit23kkb
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

    vi V;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        V.pb(num);
    }

    ull counter = 0;
    for (int i = 0; i < V.size(); i++) {
        if(V[i] == 0){
            counter += pow(2, i);
        }
    }
    cout << counter << endl;

    return 0;
}

//TODO - nejaka chyba, nepresli vsetky vstupy, potom napisat popis
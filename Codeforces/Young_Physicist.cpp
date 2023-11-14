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

    int n, x = 3, a, b, c;
    int counterA = 0, counterB = 0, counterC = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        counterA += a;
        counterB += b;
        counterC += c;
    }

    if(counterA == 0 && counterB == 0 && counterC == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}

//https://codeforces.com/problemset/problem/69/A
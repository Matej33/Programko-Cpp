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

    int n, h, a;
    cin >> n >> h;
    int counter = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a > h){
            counter += 2;
        } else{
            counter += 1;
        }
    }

    cout << counter << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/677/A
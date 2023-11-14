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
    int counter = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if((a + 2) <= b){
            counter++;
        }
    }
    cout << counter;

    return 0;
}

//https://codeforces.com/problemset/problem/467/A
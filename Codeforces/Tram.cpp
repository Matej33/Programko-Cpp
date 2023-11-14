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
    int a, b;
    int max = 0, help = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        help -= a;
        help += b;
        if(help > max){
            max = help;
        }
    }
    cout << max;


    return 0;
}

//https://codeforces.com/problemset/problem/116/A
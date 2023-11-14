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

    int a, b;
    cin >> a >> b;
    int counter = 0;

    while(a <= b){
        a = a*3;
        b = b*2;
        counter++;
    }

    cout << counter;

    return 0;
}

//https://codeforces.com/problemset/problem/791/A

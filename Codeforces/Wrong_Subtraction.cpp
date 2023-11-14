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

    unsigned int n;
    int k;
    cin >> n >> k;

    for(int i = 0; i < k; i++){
        if(n % 10 == 0){
            n = n / 10;
        } else{
            n--;
        }
    }

    cout << n;

    return 0;
}

//https://codeforces.com/problemset/problem/977/A
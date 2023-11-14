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
    int sum = 0;
    vi name;
    int counter;
    int a = 0;
    int help;
    for (int x = 0; x < n; x++) {
        cin >> help;
        name.pb(help);
        sum += help;
    }
    sort(name.begin(), name.end());

    for(int j = n; j > 0; j--){
         if(a <= sum/2){
             a += name[j-1];
             counter++;
         } else{
             cout << counter;
             return 0;
         }
    }

    cout << counter;

    return 0;
}

//https://codeforces.com/problemset/problem/160/A

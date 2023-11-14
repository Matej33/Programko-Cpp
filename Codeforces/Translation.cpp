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

    string a, b;
    cin >> a >> b;
    int counter = 0;
    for(int i = 0 ; i < a.length(); i++){
        if(a[i] == b[b.length() - 1 - i]){
            counter++;
        }
    }
    if(counter == a.length()){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;
}

//https://codeforces.com/problemset/problem/41/A
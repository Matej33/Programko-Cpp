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

    string name;
    cin >> name;

    sort(name.begin(), name.end());
    name.erase(unique(name.begin(), name.end()), name.end());

    if(name.length() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else{
        cout << "IGNORE HIM!";
    }

    return 0;
}

//https://codeforces.com/problemset/problem/236/A
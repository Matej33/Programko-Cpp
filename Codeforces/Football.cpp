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

    string match;
    cin >> match;
    int one = 0, zero = 0;
    for(int i = 0; i < match.length(); i++){
        if(zero == 7 || one == 7){
            cout << "YES";
            return 0;
        }
        if(match[i] == '0'){
            zero++;
            one = 0;
        } else{
            one++;
            zero = 0;
        }
    }
    if(zero == 7 || one == 7){
        cout << "YES";
        return 0;
    }else{
        cout << "NO";
    }

    return 0;
}

//https://codeforces.com/problemset/problem/96/A
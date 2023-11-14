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

    string num;
    cin >> num;
    int counter = 0;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '4' || num[i] == '7') {
            counter++;
        }
    }
    if (counter == 0) {
        cout << "NO";
        return 0;
    }
    string str = to_string(counter);
    for(int i = 0; i < str.length(); i++){
        if(str[i] != '4' && str[i] != '7'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}

//https://codeforces.com/problemset/problem/110/A
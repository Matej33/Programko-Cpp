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

    string one;
    cin >> one;
    int num = one.length();
    if(one.length() == 1){cout << one << endl; return 0;}

    for(int i = 1; i < one.length(); i++) {
        size_t found = one.find("+");

        if (found != std::string::npos) {
            one.erase(found, 1);
        }
    }
    vector<char> charVector(one.begin(), one.end());

    sort(charVector.begin(), charVector.end());

    string two(charVector.begin(), charVector.end());

    for(int j = 0; j < two.length()-1; j++){
        cout << two[j] << "+";
    }
    cout << two[two.length()-1];

    return 0;
}

//https://codeforces.com/problemset/problem/339/A
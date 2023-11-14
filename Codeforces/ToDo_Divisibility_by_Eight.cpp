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
    int help = num[num.length()-1]-'0';
    while(help % 2 != 0){
        num.erase(num.end() - 1, num.end());
        help = num[num.length()-1]-'0';
    }

    int eight = stoi(num.substr(num.length()-3, num.length()));
    string one = num;

    if(num[num.length() - 1] == 2 || num[num.length() - 1] == 6){
        if(num[num.length() - 2] == 1 || num[num.length() - 2] == 3 || num[num.length() - 2] == 5 || num[num.length() - 2] == 7 || num[num.length() - 2] == 9){
            eight = stoi(num.substr(num.length()-3, num.length()));
            if(eight % 8 == 0){
                cout << "YES";
            } else {
                num.erase(num.end() - 1, num.end());
            }
        }
        num.erase(num.end() - 1, num.end());
    } else{
        eight = stoi(num.substr(num.length()-3, num.length()));
        if(eight % 8 == 0){
            cout << "YES";
        } else{
            num.erase(num.end() - 1, num.end());
        }
    }

    return 0;
}

//https://codeforces.com/contest/550/problem/C

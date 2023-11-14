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

    string s;
    cin >> s;
    string result;
    int counter = 0;
    for(int i = 0; i < s.length(); i++){
        if(counter == 0){
            if(s[i] == 'h'){
                counter++;
            }
        } else if(counter == 1){
            if(s[i] == 'e'){
                counter++;
            }
        } else if(counter == 2 || counter == 3){
            if(s[i] == 'l'){
                counter++;
            }
        }else if(counter == 4){
            if(s[i] == 'o'){
                counter++;
            }
        }
    }
    if(counter == 5){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}

//https://codeforces.com/problemset/problem/58/A
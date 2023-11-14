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

    int counterX = 0, counterY = 0, counter = 1;
    int n;
    cin >> n;
    int z;
    for(int i = 0; i < n; i++){
        cin >> z;
        if(z == 10){
            if(counterX > 0){
                counterX = 0;
                counter++;
            }
            counterY++;
        } else{
            if(counterY > 0){
                counterY = 0;
                counter++;
            }
            counterX++;
        }
    }

    cout << counter << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/344/A
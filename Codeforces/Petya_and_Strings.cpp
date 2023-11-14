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

    string one, two;
    cin >> one >> two;
    int counter = 0;
    for (int i = 0; i < one.length(); i++) {
        if (one[i] != two[i] && one[i] + 32 != two[i] && one[i] - 32 != two[i]) {
            if (one[i] > 96 && two[i] < 96) {
                if (one[i] - 32 > two[i]) {
                    counter++;
                    break;
                } else {
                    counter--;
                    break;
                }
            } else if (two[i] > 96 && one[i] < 96) {
                if (one[i] > two[i]- 32) {
                    counter++;
                    break;
                } else {
                    counter--;
                    break;
                }
            } else if (one[i] > two[i]){
                counter++;
                break;
            } else{
                counter--;
                break;
            }
        }
    }
    cout << counter << endl;

    return 0;
}

//https://codeforces.com/problemset/problem/112/A
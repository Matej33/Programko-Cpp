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

    string line, third;
    for (int i = 1; i <= 4; ++i) {
        getline(cin, line);
        if (i == 3) {
            third = line;
        }
    }
    int vagon = 0;

    for (int i = 0; i < third.length(); i++) {
        if (third[i] == '-'){
            vagon++;
        } else if(third[i] == '1'){
            vagon--;
        }
    }

    cout << vagon << endl;

    return 0;
}
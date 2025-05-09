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

    int answer = 0;
    for (int i = 999; i > 900; i--) {
        for (int j = 999; j > 900; j--) {
            answer = (i * j);
            string first = to_string(answer);
            str other = first;
            reverse(other.begin(), other.end());
            if (first == other) {
                cout << answer << endl;
                return 0;
            }
        }
    }
    cout << "No palindrome found" << endl;
    
    return 0;
}
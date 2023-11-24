#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define db double
#define str string
#define vi vector<int>
#define pb push_back

int countWays(int n, int X) {
    vector<int> dp(X + 1);
    dp[0] = 1;

    for (int i = 1; i <= X; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i >= j) {
                dp[i] += dp[i - j];
            }
        }
    }
    return dp[X];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, X;
    cin >> n >> X;
    ull result = countWays(n, X);
    cout << result % 1000000007 << endl;

    return 0;
}

//https://zenit.ksp.sk/task/zenit23kkj
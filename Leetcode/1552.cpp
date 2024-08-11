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

    vector<int> position = {82,68,79,17,70,51,5,46,27,44,39,57,94,45,88,56};
    int m = 9;
    sort(position.begin(), position.end());
    int actual = position[0],
            end = position.back(),
            answer = end - actual,
            y = 1,
            i = 0,
            j = 0,
            x = 0;
    if (m == position.size()) {
        for (int l = 0; l < position.size()-1; l++) {
            if (position[l + 1] - position[l] < answer) {
                answer = position[l + 1] - position[l];
            }
        }
    } else {
        m--;
        for (; m > 1; m--) {
            x = (m + 1) / 2;
            while (position[y] <= (actual + end + x) / m) {
                y++;
            }
            i = abs(((actual + end + x) / m) - position[y]);
            j = abs(((actual + end + x) / m) - position[y - 1]);
            if (j < i && position[y - 1] - actual != 0) {
                if (position[y - 1] - actual < answer && position[y - 1] - actual > 0) {
                    answer = position[y - 1] - actual;
                }
                actual = position[y - 1];
                y++;
            } else {
                if (position[y] - actual < answer && position[y] - actual > 0) {
                    answer = position[y] - actual;
                }
                actual = position[y];
            }
        }
        if (end - actual < answer && end - actual > 0) {
            answer = end - actual;
        }
    }
    return answer;
}

// https://leetcode.com/problems/magnetic-force-between-two-balls/
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define db double
#define str string
#define vi vector<int>
#define pb push_back

int longestSequenceTwoDistinct(const vector<int>& nums) {
    int maxLength = 0;
    int left = 0;
    unordered_map<int, int> freq;

    for (int right = 0; right < nums.size(); ++right) {
        freq[nums[right]]++;

        while (freq.size() > 2) {
            freq[nums[left]]--;
            if (freq[nums[left]] == 0) {
                freq.erase(nums[left]);
            }
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vi numbers;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        numbers.pb(x);
    }
    int result = longestSequenceTwoDistinct(numbers);
    cout << result << endl;

    return 0;
}

// https://zenit.ksp.sk/task/zenit23kkc
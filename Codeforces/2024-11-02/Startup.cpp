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

    int n, nShelves, kBottles, brand, cost;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nShelves >> kBottles;
        vector<pair<int, int>> bottles(kBottles);
        for (int j = 0; j < kBottles; j++) {
            cin >> bottles[j].first >> bottles[j].second;
        }

        unordered_map<int, int> brandCostMap;
        for (const auto& bottle : bottles) {
            brandCostMap[bottle.first] += bottle.second;
        }

        vector<pair<int, int>> uniqueBottles;
        for (const auto& entry : brandCostMap) {
            uniqueBottles.pb(entry);
        }
        sort(uniqueBottles.begin(), uniqueBottles.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Sort in descending order
        });

        int totalCost = 0;
        for (int j = 0; j < min(nShelves, (int)uniqueBottles.size()); j++) {
            totalCost += uniqueBottles[j].second;
        }

        cout << totalCost << endl;
    }

    return 0;
}

// https://codeforces.com/contest/2036/problem/B
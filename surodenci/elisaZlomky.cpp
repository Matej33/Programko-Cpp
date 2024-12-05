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

    int citatel1, menovatel1, citatel2, menovatel2;
    cin >> citatel1 >> menovatel1 >> citatel2 >> menovatel2;
    if(citatel1 == 0 || citatel2 == 0 || menovatel1 == 0 || menovatel2 == 0){
        cout << "Nulove zlomky niesu platne" << endl;
    } else {
        cout << citatel1 << "/" << menovatel1 << " * " << citatel2 << "/" << menovatel2 << " = " << citatel1*citatel2 << "/" << menovatel1*menovatel2 << endl;
    }

    return 0;
}
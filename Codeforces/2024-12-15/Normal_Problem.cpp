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

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
       str a, b;
       cin >> a;
       b = a;
       for(int j = 0; j < a.size(); j++){
           if(a[a.size() - j - 1] == 'p'){
               b[j] = 'q';
           } else if(a[a.size() - j - 1] == 'q'){
               b[j] = 'p';
           } else{
                b[j] = a[a.size() - j - 1];
           }
       }
       cout << b << endl;
    }

    return 0;
}
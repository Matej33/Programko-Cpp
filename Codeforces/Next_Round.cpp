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

    int pocetPrvkov, pozicia;
    cin >> pocetPrvkov >> pozicia;
    int pole[pocetPrvkov];
    int counter = 0;

    for (int i = 0; i < pocetPrvkov; i++) {
        cin >> pole[i];
    }

    for(int j = 0; j < pocetPrvkov; j++){
        if(pole[j] >= pole[pozicia - 1]){
            counter++;
            if(pole[j] == 0){
                counter--;
            }
        }

    }

    cout << counter;

    return 0;
}

//https://codeforces.com/problemset/problem/158/A
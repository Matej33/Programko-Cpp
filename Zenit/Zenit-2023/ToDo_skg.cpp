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
    int f = n;
    vi arrayA;
    vi arrayB;
    int x;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arrayA.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        cin >> x;
        arrayB.push_back(x);
    }
    sort(arrayA.begin(), arrayA.end());
    sort(arrayB.begin(), arrayB.end());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arrayA[i] == arrayB[j]) {
                arrayA.erase(arrayA.begin() + i);
                arrayB.erase(arrayB.begin() + j);
                j--;
                n--;
                counter++;
            }
        }
    }
    for (int k = 0; k < n; k++) {
        arrayA[k]++;
    }
    for (int i = 0; i < f - counter; i++) {
        for (int j = 0; j < f - counter; j++) {
            if (arrayA[i] == arrayB[j]) {
                arrayA.erase(arrayA.begin() + i);
                arrayB.erase(arrayB.begin() + j);
                j--;
                f--;
                if(f == 0){
                    break;
                }
            }
        }
    }
    if(arrayA.empty()){
        cout << "Jednoduche" << endl;
    } else {
        cout << "Neda sa" << endl;
    }

    return 0;
}

// https://zenit.ksp.sk/task/zenit23skg
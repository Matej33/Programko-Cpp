#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define db double
#define str string
#define vi vector<int>
#define pb push_back


string reverseBinary(string binary) {
    reverse(binary.begin(), binary.end());
    return binary;
}

ll binaryToInt(string binary) {
    ll result = 0;
    ll bitValue = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            result += bitValue;
        }
        bitValue <<= 1;
    }
    return result;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        ull number;
        cin >> number;
    string binary = bitset<32>(number).to_string();

    string reversedBinary = reverseBinary(binary);
    ll reversedNumber = binaryToInt(reversedBinary);

    cout << reversedNumber << endl;
    }
    return 0;
}

// https://zenit.ksp.sk/task/zenit23skd
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

    byte[] var13 = new byte[]{-67, -33, 90, 3, -3, -61, -71, 35, 109, 78, 37, -109, 113, 90, 65, -109, -99, 66, 90, 66, 65, 83, 66, 79, 53};// 34 35 36 37
    byte[] s = var13;// 33
    int m = 0;

    for(int var14 = s.length; m < var14; ++m) {// 40
        int c = s[m] & 255;// 41
        c ^= m;// 43
        c = c - 10 & 255;// 44
        c = -c & 255;// 45
        c = c + m & 255;// 46
        c = (c >> 2 | c << 6) & 255;// 47
        s[m] = (byte)c;// 49
    }


    return 0;
}
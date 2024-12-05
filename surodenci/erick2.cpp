#include <iostream>

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

    int d, l;
    bool idk = true;

    cin >> d >> l;

    if (l >= 90 || d >= 90){
        idk = false;
    } else if (l + d*2 >= 104){
        idk = false;
    }
    if(idk){
        cout << "Funguje";
    } else {
        cout << "Nefunguje";
    }


    return 0;
}
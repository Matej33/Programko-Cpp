#include <iostream>

using namespace std;

int main(){
    long long n, z;
    cin >> n;
    if (n == 1 || n == 0){
        cout << "Janka bude frflat" << endl;
    }
    else if (n > 1){
        for (long long x = 0; x < n; x++) {
            cin >> z[x];
        }
        for (long long x = 1; x < n; x++) {
            if (z[0] != z [x]) {
                swap(z[0], z [x]);
            }
        }

            for (long long x = 0; x < n; x++){
                cout << " " << z[x];
        }
    }

    return 0;
}
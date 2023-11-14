#include <iostream>

using namespace std;

int main(){
int n;
cin >> n;
int k = n;
int y = 0;
for (int i = 0; i < k; i++){
    for (int j = n - 1; j > 0; j--)
        cout << " ";
    cout << "/";

for (int x = 0; x < y; x ++)
        cout << " ";
    cout << "\\";

    cout << endl;
    n--;
    y += 2;
}
    return 0;
}
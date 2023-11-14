#include <iostream>

using namespace std;

int main(){
    int n, jovani = 0;
    string bit;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> bit;
        if (bit == "X++" || bit == "++X") jovani++;
        else if (bit == "X--" || bit == "--X") jovani--;
    }
    cout << jovani << endl;
    return 0;
}

//https://codeforces.com/contest/282/problem/A
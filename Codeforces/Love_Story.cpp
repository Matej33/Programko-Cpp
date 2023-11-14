#include <iostream>

using namespace std;

int main(){
    string c = "codeforces";
    string x;
    int n;
    cin >> n;
    int counter = 0;
    for(int j = 0; j < n; j++){
        cin >> x;
        for(int i = 0; i < c.length(); i++){
            if(c[i] != x[i]) counter++;
        }
        x = "";
        cout << counter << endl;
        counter = 0;
    }

    return 0;
}

//https://codeforces.com/contest/1829/problem/A

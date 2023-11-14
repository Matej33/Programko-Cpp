#include <iostream>

using namespace std;

int main() {
    int c, y;
    cin >> c;
    do{
        if (c-5 >=0)
            c-=5;
        else if (c-4 >=0)
            c-=4;
        else if (c-3 >=0)
            c-=3;
        else if (c-2 >=0)
            c-=2;
        else
            c-=1;
        y++;
    }
    while (c!=0);
    cout <<y;
    return 0;
}

//https://codeforces.com/contest/617/problem/A
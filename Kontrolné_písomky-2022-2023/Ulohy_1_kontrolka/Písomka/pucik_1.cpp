#include <iostream>

using namespace std;


int main(){
    string s;
    int d, x;
    cin >> s >> d;
    for (int j = 0; j < d; j++){
        for (int i = 0; i < (d*2 + 2 + s.length()); i++){
            cout << "#";}
            cout << endl; }

    for (int x = 0; x < d; x++){
        cout << "#";
    }

    for (int z = 0; z < s.length() + 2; z++){
        cout << " ";
         x = 0;
    }

    for (int x = 0; x < d; x++){
        cout << "#"; }
    cout << endl;
    for (int x = 0; x < d; x++){
        cout << "#";
    }

    cout << " " << s << " ";

    for (int x = 0; x < d; x++){
        cout << "#";
    }
cout << endl;

    for (int x = 0; x < d; x++){
        cout << "#"; }

    for (int z = 0; z < s.length() + 2; z++){
        cout << " ";
        x = 0;
    }

    for (int x = 0; x < d; x++){
        cout << "#";
    }

    cout << endl;

    for (int j = 0; j < d; j++){
        for (int i = 0; i < (d*2 + 2 + s.length()); i++){
            cout << "#";}
        cout << endl; }


    return 0;
}

#include <iostream>

using namespace std;

int main(){
int a, b, s, p, o;
cin >> a >> b;
cin >> s >> p >> o;

     if (s <= a && o + p <= b) cout << "Ano" << endl;
else if (p <= a && o + s <= b) cout << "Ano" << endl;
else if (o <= a && p + s <= b) cout << "Ano" << endl;
else if (s <= b && p + o <= a) cout << "Ano" << endl;
else if (o <= b && p + s <= a) cout << "Ano" << endl;
else if (p <= b && s + o <= a) cout << "Ano" << endl;
else if (p + o + s <= a || p + o + s <= b) cout << "Ano" << endl;
else cout << "Nie" << endl;

    return 0;
}
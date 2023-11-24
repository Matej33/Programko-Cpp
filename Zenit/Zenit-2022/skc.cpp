#include <iostream>
#include <string>

using namespace std;

int main(){
int i = 0, zatvorka = 0;
cin >> i;
string o;
for (int y = 0; y < i; y++){
    string x;
    cin >> x;
    o.append(x); }
for (int pocet = 0; pocet < o.length(); pocet++){
    if (o[pocet] == '<' || o[pocet] == '>')
        zatvorka++;
        }

    if (zatvorka % 2 == 1)
        cout << "had" << endl;
    else
        cout << "dazdovka" << endl;

    return 0;
}

//https://zenit.ksp.sk/submit/1666082378-86972
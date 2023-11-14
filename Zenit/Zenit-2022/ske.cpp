#include <iostream>

using namespace std;

int main(){
    long long i , a, pocet = 0;
    string slovo;
    cin >> i >> a;
    cin >> slovo;

    for (long long g = 0; g < slovo.length(); g++){
            if (slovo[g] == 'B') pocet ++;
        }
            if (pocet*i < a)
                cout << pocet*i << endl;
            else
                cout << a << endl;
    return 0;
}

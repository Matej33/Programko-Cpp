#include <iostream>

using namespace std;

int main() {
int n, vyska , max = 0;
string hora, najhora;
cin >> n;
for (int i = 0; i < n; i++){
    cin >> vyska >> hora;
    if (vyska > max){
        max = vyska;
        najhora = hora;
    }
}
cout << najhora << endl;

    return 0;
}
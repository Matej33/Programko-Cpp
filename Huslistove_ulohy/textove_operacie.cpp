#include <iostream>
#include <cmath>

using namespace std;

int main(){
int medzery = 0;
string sprava;
getline(cin, sprava);

for(int i = 0; i < sprava.length(); i++) {
    if(sprava[i] == ' ') medzery++;
}

cout << "pocet znakov: " << sprava.length() << endl;
cout << "pocet sprav: " << ceil(sprava.length()/160) << endl;
cout << "pocet medzier: " << medzery << endl;
cout << "stlacenie: " << (double) (sprava.length() - medzery) / sprava.length() * 100 << "%" << endl;

return 0;
}

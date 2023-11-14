#include <iostream>
#include <string>

using namespace std;

int main(){
    string sprava;
    getline(cin, sprava);
    cout << (char)toupper(sprava[0]);
    for(int i = 1; i < sprava.length(); i++) {
       if(sprava[i] == ' ') {

       } else {
           if (sprava[i - 1] == ' '){
               cout << (char)toupper(sprava[i]);
           } else {
               cout << sprava[i];
           }
       }
    }


return 0;
}

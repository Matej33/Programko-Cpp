#include <iostream>

using namespace std;

int main(){
    string s;
    cout << "zadaj text v malych pismenach: "; getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        cout << (char)(s[i] - 32);
    }
    return 0;
}

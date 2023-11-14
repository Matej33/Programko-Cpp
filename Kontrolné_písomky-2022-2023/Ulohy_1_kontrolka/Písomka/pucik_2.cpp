#include <iostream>

using namespace std;

string getProtocol(const string& url) {
    string result;
    for (int i = 0; i < url.length(); i++) {
        if (url[i] == ':') break;
        result += url[i];
    }
    return result;
}


int main(){
string url;
int type;
cin >> url;
cin >> type;

    switch (type) {
        case 1:
            cout << getProtocol(url) << endl;
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
    }
    return 0;
}
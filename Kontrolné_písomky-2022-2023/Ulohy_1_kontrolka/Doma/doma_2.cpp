#include <iostream>
#include <string>

using namespace std;

void getProtocol(const string &url) {
    string result;
    for (int i = 0; i < url.length(); i++) {
        if (url[i] == ':') break;
        result += url[i];
    }
    cout << result;
}

void getDomain(const string &url) {
    string result;
    int i = 0;
    for (; i < url.length(); i++) {
        if (url[i] == '/') break;
    }
    for (int j = i + 2; j < url.length(); j++) {
        if (url[j] == ':') break;
        cout << url[j];
    }
}

void getPort(const string &url) {
    string result;
    int i = 0, l = 0;
    for (; i < url.length(); i++) {
        if (url[i] == ':') {
            l++;
            if (l == 2) break;
        }
    }
    for (int j = i + 1; j < url.length(); j++) {
        if (url[j] == '/') break;
        cout << url[j];
    }
}

void getParameters(const string &url) {
    string result;
    int i = 0;
    for (; i < url.length(); i++) {
        if (url[i] == '?') break;
    }
    for (int j = i + 1; j < url.length(); j++) {
        if (url[j] == '#') break;
        cout << url[j];
    }
}

int main() {
    string url;
    int type;
    cin >> url >> type;

    switch (type) {
        case 1:
            getProtocol(url);
            break;
        case 2:
            getDomain(url);
            break;
        case 3:
            getPort(url);
            break;
        case 4:
            getParameters(url);
            break;
    }

    return 0;
}
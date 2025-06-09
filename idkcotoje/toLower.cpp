#include <iostream>

int main() {
    std::string s;
    std::cout << "Napis slovo v lowercase" << std::endl;
    std::cin >> s;
    for (int i = 0; i < s.size(); i++) s[i] = s[i] - 32;
    std::cout << s << std::endl;
    return 0;
}

#include <iostream>

using namespace std;

const string jedna = "   X   \n  O O  \n O O O \nO O O O\n\n"
                     "   O   \n  X O  \n O O O \nO O O O\n\n"
                     "   O   \n  O X  \n O O O \nO O O O\n\n"
                     "   O   \n  O O  \n X O O \nO O O O\n\n"
                     "   O   \n  O O  \n O X O \nO O O O\n\n"
                     "   O   \n  O O  \n O O X \nO O O O\n\n"
                     "   O   \n  O O  \n O O O \nX O O O\n\n"
                     "   O   \n  O O  \n O O O \nO X O O\n\n"
                     "   O   \n  O O  \n O O O \nO O X O\n\n"
                     "   O   \n  O O  \n O O O \nO O O X\n\n";

const string desat = "   X   \n  X X  \n X X X \nX X X X\n\n";

const string devat = "   X   \n  X X  \n X X X \nX X X O\n\n"
                    "   X   \n  X X  \n X X X \nX X O X\n\n"
                    "   X   \n  X X  \n X X X \nX O X X\n\n"
                    "   X   \n  X X  \n X X X \nO X X X\n\n"
                    "   X   \n  X X  \n X X O \nX X X X\n\n"
                    "   X   \n  X X  \n X O X \nX X X X\n\n"
                    "   X   \n  X X  \n O X X \nX X X X\n\n"
                    "   X   \n  X O  \n X X X \nX X X X\n\n"
                    "   X   \n  O X  \n X X X \nX X X X\n\n"
                    "   O   \n  X X  \n X X X \nX X X X\n\n";

const string nula = "   O   \n  O O  \n O O O \nO O O O\n\n";

const string dva = "   O   \n  O O  \n O O O \nO O X X\n\n"
                   "   O   \n  O O  \n O O O \nO X O X\n\n"
                   "   O   \n  O O  \n O O O \nX O O X\n\n"
                   "   O   \n  O O  \n O O X \nO O O X\n\n"
                   "   O   \n  O O  \n O X O \nO O O X\n\n"
                   "   O   \n  O O  \n X O O \nO O O X\n\n"
                   "   O   \n  O X  \n O O O \nO O O X\n\n"
                   "   O   \n  X O  \n O O O \nO O O X\n\n"
                   "   X   \n  O O  \n O O O \nO O O X\n\n"
                   "   O   \n  O O  \n O O O \nO X X O\n\n"
                   "   O   \n  O O  \n O O O \nX O X O\n\n"
                   "   O   \n  O O  \n O O X \nO O X O\n\n"
                   "   O   \n  O O  \n O X O \nO O X O\n\n"
                   "   O   \n  O O  \n X O O \nO O X O\n\n"
                   "   O   \n  O X  \n O O O \nO O X O\n\n"
                   "   O   \n  X O  \n O O O \nO O X O\n\n"
                   "   X   \n  O O  \n O O O \nO O X O\n\n"
                   "   O   \n  O O  \n O O O \nX X O O\n\n"
                   "   O   \n  O O  \n O O X \nO X O O\n\n"
                   "   O   \n  O O  \n O X O \nO X O O\n\n"
                   "   O   \n  O O  \n X O O \nO X O O\n\n"
                   "   O   \n  O X  \n O O O \nO X O O\n\n"
                   "   O   \n  X O  \n O O O \nO X O O\n\n"
                   "   X   \n  O O  \n O O O \nO X O O\n\n"
                   "   O   \n  O O  \n O O X \nX O O O\n\n"
                   "   O   \n  O O  \n O X O \nX O O O\n\n"
                   "   O   \n  O O  \n X O O \nX O O O\n\n"
                   "   O   \n  O X  \n O O O \nX O O O\n\n"
                   "   O   \n  X O  \n O O O \nX O O O\n\n"
                   "   X   \n  O O  \n O O O \nX O O O\n\n"
                   "   O   \n  O O  \n O X X \nO O O O\n\n"
                   "   O   \n  O O  \n X O X \nO O O O\n\n"
                   "   O   \n  O X  \n O O X \nO O O O\n\n"
                   "   O   \n  X O  \n O O X \nO O O O\n\n"
                   "   X   \n  O O  \n O O X \nO O O O\n\n"
                   "   O   \n  O O  \n X X O \nO O O O\n\n"
                   "   O   \n  O X  \n O X O \nO O O O\n\n"
                   "   O   \n  X O  \n O X O \nO O O O\n\n"
                   "   X   \n  O O  \n O X O \nO O O O\n\n"
                   "   O   \n  O X  \n X O O \nO O O O\n\n"
                   "   O   \n  X O  \n X O O \nO O O O\n\n"
                   "   X   \n  O O  \n X O O \nO O O O\n\n"
                   "   O   \n  X X  \n O O O \nO O O O\n\n"
                   "   X   \n  O X  \n O O O \nO O O O\n\n"
                   "   X   \n  X O  \n O O O \nO O O O\n\n";

const string osem ="   X   \n  X X  \n X X X \nX X O O\n\n"
                   "   X   \n  X X  \n X X X \nX O X O\n\n"
                   "   X   \n  X X  \n X X X \nO X X O\n\n"
                   "   X   \n  X X  \n X X O \nX X X O\n\n"
                   "   X   \n  X X  \n X O X \nX X X O\n\n"
                   "   X   \n  X X  \n O X X \nX X X O\n\n"
                   "   X   \n  X O  \n X X X \nX X X O\n\n"
                   "   X   \n  O X  \n X X X \nX X X O\n\n"
                   "   O   \n  X X  \n X X X \nX X X O\n\n"
                   "   X   \n  X X  \n X X X \nX O O X\n\n"
                   "   X   \n  X X  \n X X X \nO X O X\n\n"
                   "   X   \n  X X  \n X X O \nX X O X\n\n"
                   "   X   \n  X X  \n X O X \nX X O X\n\n"
                   "   X   \n  X X  \n O X X \nX X O X\n\n"
                   "   X   \n  X O  \n X X X \nX X O X\n\n"
                   "   X   \n  O X  \n X X X \nX X O X\n\n"
                   "   O   \n  X X  \n X X X \nX X O X\n\n"
                   "   X   \n  X X  \n X X X \nO O X X\n\n"
                   "   X   \n  X X  \n X X O \nX O X X\n\n"
                   "   X   \n  X X  \n X O X \nX O X X\n\n"
                   "   X   \n  X X  \n O X X \nX O X X\n\n"
                   "   X   \n  X O  \n X X X \nX O X X\n\n"
                   "   X   \n  O X  \n X X X \nX O X X\n\n"
                   "   O   \n  X X  \n X X X \nX O X X\n\n"
                   "   X   \n  X X  \n X X O \nO X X X\n\n"
                   "   X   \n  X X  \n X O X \nO X X X\n\n"
                   "   X   \n  X X  \n O X X \nO X X X\n\n"
                   "   X   \n  X O  \n X X X \nO X X X\n\n"
                   "   X   \n  O X  \n X X X \nO X X X\n\n"
                   "   O   \n  X X  \n X X X \nO X X X\n\n"
                   "   X   \n  X X  \n X O O \nX X X X\n\n"
                   "   X   \n  X X  \n O X O \nX X X X\n\n"
                   "   X   \n  X O  \n X X O \nX X X X\n\n"
                   "   X   \n  O X  \n X X O \nX X X X\n\n"
                   "   O   \n  X X  \n X X O \nX X X X\n\n"
                   "   X   \n  X X  \n O O X \nX X X X\n\n"
                   "   X   \n  X O  \n X O X \nX X X X\n\n"
                   "   X   \n  O X  \n X O X \nX X X X\n\n"
                   "   O   \n  X X  \n X O X \nX X X X\n\n"
                   "   X   \n  X O  \n O X X \nX X X X\n\n"
                   "   X   \n  O X  \n O X X \nX X X X\n\n"
                   "   O   \n  X X  \n O X X \nX X X X\n\n"
                   "   X   \n  O O  \n X X X \nX X X X\n\n"
                   "   O   \n  X O  \n X X X \nX X X X\n\n"
                   "   O   \n  O X  \n X X X \nX X X X\n\n";

int main() {
    int x;
    cin >>  x;
    if (x == 1)
        cout << jedna;
    else if (x == 0)
        cout << nula;
    else if (x == 9)
        cout << devat;
    else if (x == 10)
        cout << desat;
    else if (x == 2)
        cout << dva;
    else if (x == 8)
        cout << osem;
return 0;
}

// https://zenit.ksp.sk/task/zenit22kke
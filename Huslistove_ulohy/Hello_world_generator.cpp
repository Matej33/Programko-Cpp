#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() {

    ofstream file;
    file.open ("hello.cpp");
    if(!file){
        cout << "File not found" << endl;
        return 1;
    }

    time_t now = time(NULL);
    char *date = ctime(&now);

        file << "/****************************\\" << endl;
        file << "* Hello World - Generated    *" << endl;
        file << "*\t @Matej.Pucik \t     *" << endl;
        file << "\\****************************/" << endl;
        file << endl;
        file << "// " << "Today's date is: " << date << endl;
        file << endl;
        file << "#include <iostream>" << endl;
        file << endl;
        file << "using namespace std;" << endl;
        file << endl;
        file << "int main()  {" << endl;
        file << "\t cout << " << "\"" << "Hello World!" << "\"" << ";" << endl;
        file << "\t return 0;" << endl;
        file << "}" << endl;

        file.close();

    return 0;
}

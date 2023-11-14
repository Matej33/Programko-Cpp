#include <iostream>

using namespace std;

int main(){
int riadky, stlpce;
cin >> riadky >> stlpce;
    char **array = new char *[riadky]{};
    for (int i = 0; i < riadky; i++) {
        array[i] = new char[stlpce]{};
    }
for(int i=0; i < riadky; i++){
    for(int j=0; j < stlpce; j++){
        cin >> array[i][j];
    }
}
int x, y;
cin >> x >> y;
bool vysledok = false;
  for(int i=0; i < 6; i++){
      if(array[x][y] == array[x+i][y]){
          if(i == 5){
              cout << "PLAYER " << array[x][y] << " WON" << endl;
              vysledok = true;
              break;
          }
      }
  }
    for(int i=0; i < 6; i++){
        if(array[x][y] == array[x][y+i]){
            if(i == 5){
                cout << "PLAYER " << array[x][y] << " WON" << endl;
                vysledok = true;
                break;
            }
        }
    }
    for(int i=0; i < 6; i++){
        if(array[x][y] == array[x+i][y+i]){
            if(i == 5){
                cout << "PLAYER " << array[x][y] << " WON" << endl;
                vysledok = true;
                break;
            }
        }
    }
    if(!vysledok){
        cout << "CONTINUE" << endl;
    }
return 0;
}
#include <iostream>

using namespace std;

int main(){
	int pocitadlo = 0;
	for(int i = 0 ;i < 1000; i+=3) pocitadlo += i;
	for(int j = 0 ;j < 1000; j+=5) pocitadlo += j;
	for(int k = 0; k < 1000; k+=15) pocitadlo -= k;
	cout << pocitadlo << endl;;
	return 0;
}

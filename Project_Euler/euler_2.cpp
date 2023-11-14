#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 1;
	long n = 4000000;
	long pocitadlo = 0;
	for (int c = 2; c < n; c = a + b) {
		if(c % 2 == 0) pocitadlo += c;
		a = b;
		b = c;
	}
	cout << pocitadlo << endl ;
	return 0;
}




//	int a = 0, b = 1, n;
//	cin >> n;
//	for (int c = 0; c < n;c = a + b) {
//		cout << c << endl;
//		a = b;
//		b = c;
//	} 


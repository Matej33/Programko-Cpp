#include <iostream>
#include <cmath>

using namespace std;

struct info{
	string mesto;
	double x;
	double y;
};

int main(){
	int n;
	cin >> n;
	info *pole = new info[n];
	for(int i = 0; i < n; i++){
		cin >> pole[i].mesto >> pole[i].x >> pole[i].y;
	}
	double vzdialenost = 0;
	double max = 0;
	string mesto1;
	string mesto2;
	for(int i = 0; i < n - 1; i++){
		for(int j = 1; j < n; j++){
			double geg_sirka = (pole[i].x - pole[j].x);
			double geg_dlzka = (pole[i].y - pole[j].y);
			vzdialenost = sqrt(pow(geg_sirka, 2) + pow(geg_dlzka, 2));
		if(vzdialenost > max){
			max = vzdialenost;
			mesto1 = pole[i].mesto;
			mesto2 = pole[j].mesto;
		}
		}
	}
	cout << endl << mesto1 << endl << mesto2 << endl << max << endl;
	
	return 0;
}

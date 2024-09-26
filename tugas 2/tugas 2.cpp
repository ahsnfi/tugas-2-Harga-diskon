
#include <iostream>
using namespace std;

int main() {

	double hargaAsli;
	double diskon;
	double hargaDiskon;
	double hargaAkhir;

	hargaAsli = 150000;
	diskon = 12.5;
	hargaDiskon = (diskon / 100) * hargaAsli;
	hargaAkhir = hargaAsli - hargaDiskon;


	cout << "hargaAsli: Rp" << hargaAsli << endl;
	cout << "Diskon: " << diskon << "%" << endl;
	cout << "nilai diskon: Rp" << hargaDiskon << endl;
	cout << "harga setelah diskon: Rp" << hargaAkhir << endl;

	return 0;
}
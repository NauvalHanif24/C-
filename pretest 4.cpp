#include <iostream>
using namespace std;

int main(){
	
	int Jumlah;
	int Angka;
	int i = 1;
	int x,y,z;
	
	cout << "Masukan Jumlah Bilangan: ";
	cin >> Jumlah;
	cout << "Bilangan Angka: ";
	cin >> Angka;
	
	for (i = 1; i <= Jumlah/2; i++){
		cout << Angka << endl;
		x = Angka + Angka;
		
	}for (i = 1; i <= Jumlah/2; i++){
		cout << Angka - 10 << endl;
	}
	z = x + (Angka - 10) + (Angka - 10);
	cout << "Total Jumlah: " << z << endl;
	y = z/Jumlah;
	cout << "Rata-Rata: " << y << endl;
	return 0;
}

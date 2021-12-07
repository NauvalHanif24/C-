#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	// Tipe Data
	string Bulan;
	int Tanggal;
	int Tahun;
	double Jumlah_Uang; 
	double Bitcoin;
	double Jumlah;
	
	// Input
	cout << "Tanggal: ";
	cin >> Tanggal;
	cout << "Bulan: ";
	cin >> Bulan;
	cout << "Tahun: ";
	cin >> Tahun;
	
	cout << "Jumlah Uang: ";
	cin >> Jumlah_Uang;
	cout << "Bitcoin: ";
	cin >> Bitcoin;
	
	// Output
	Jumlah = Jumlah_Uang/Bitcoin;
	cout << "Tanggal Transaksi: " << Tanggal << " " << Bulan << " " << Tahun << "\n";
	cout << "Jumlah: " << Jumlah;
	
	return 0;
}
